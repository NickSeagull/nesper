import nesper

import nesper/net_utils
import nesper/nvs_utils
import nesper/events
import nesper/tasks

const
  GOT_IPV4_BIT* = EventBits_t(BIT(1))
  CONNECTED_BITS* = (GOT_IPV4_BIT)

var networkConnectEventGroup*: EventGroupHandle_t
var networkIpAddr*: IpAddress
var networkConnectionName*: cstring

when defined(ESP_IDF_V4_0):
  type
    TcpIpAdaptersHandles* = tcpip_adapter_if_t
    TcpIpAdaptersInfoHandles* = ptr tcpip_adapter_ip_info_t
else:
  type
    TcpIpAdaptersHandles* = ptr esp_netif_t
    TcpIpAdaptersInfoHandles* = esp_netif_ip_info_t

proc networkingInitDhcp*(
      dhcp_client=true,
      dhcp_server=false,
      tcp_adapters: openArray[TcpIpAdaptersHandles],
    ) =
  if not dhcp_server:
    for tcp_adp in tcp_adapters:
      when defined(ESP_IDF_V4_0):
        check: tcpip_adapter_dhcps_stop(tcp_adp)
      else:
        check: esp_netif_dhcps_stop(tcp_adp)

  if not dhcp_client:
    for tcp_adp in tcp_adapters:
      when defined(ESP_IDF_V4_0):
        check: tcpip_adapter_dhcpc_stop(tcp_adp)
      else:
        check: esp_netif_dhcpc_stop(tcp_adp)

proc networkingInit*(
      startNvs=true,
      dhcp_client=true,
      dhcp_server=false,
      tcp_adapters: openArray[TcpIpAdaptersHandles],
    ) =

  # Networking will generally utilize NVS for storing net info
  # so it's best to start it first
  if startNvs == true:
    initNvs()

  # configure dhcp clients and servers
  networkingInitDhcp(dhcp_client=dhcp_client, dhcp_server=dhcp_server, tcp_adapters)
  # Create default event loop that runs in background
  check: esp_event_loop_create_default()

template onNetworking*(code: untyped) =
  discard xEventGroupWaitBits(networkConnectEventGroup, CONNECTED_BITS, 1, 1, portMAX_DELAY)
  # execute user code
  code


template setStaticIpAddress*(
      ip: IpAddress,
      gateway: IpAddress,
      netmask: IpAddress,
      tcp_adapters: openArray[TcpIpAdaptersHandles],
    ) = 

  var ip_info: TcpIpAdaptersInfoHandles 

  ip_info.ip = joinBytes32(ip.address_v4, 4)
  ip_info.gw = joinBytes32(gateway.address_v4, 4)
  ip_info.netmask = joinBytes32(netmask.address_v4, 4)

  for tcp_adp in tcp_adapters:
    when defined(ESP_IDF_V4_0):
      check: tcpip_adapter_set_ip_info(tcpip_if, ip_info)
    else:
      check: esp_netif_set_ip_info(tcp_adp, addr ip_info)
