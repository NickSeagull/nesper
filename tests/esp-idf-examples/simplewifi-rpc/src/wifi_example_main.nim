import nesper
import nesper/consts
import nesper/net_utils
import nesper/events
import nesper/wifi
import nesper/nvs
import nesper/tasks

import server

#  array[33, uint8]
var CONFIG_EXAMPLE_WIFI_SSID {.importc: "CONFIG_EXAMPLE_WIFI_SSID".}: cstring 
var CONFIG_EXAMPLE_WIFI_PASSWORD {.importc: "CONFIG_EXAMPLE_WIFI_PASSWORD".}: cstring 

const
  GOT_IPV4_BIT* = EventBits_t(BIT(0))
  CONNECTED_BITS* = (GOT_IPV4_BIT)

var s_connect_event_group*: EventGroupHandle_t
var s_ip_addr*: IpAddress
var s_connection_name*: cstring

var TAG*: cstring = "example"


proc got_ip_handler*(arg: pointer; event_base: esp_event_base_t; event_id: int32;
               event_data: pointer) {.cdecl.} =
  var event: ptr ip_event_got_ip_t = cast[ptr ip_event_got_ip_t](event_data)

  s_ip_addr = toIpAddress(event.ip_info.ip)
  # memcpy(addr(s_ip_addr), addr(event.ip_info.ip), sizeof((s_ip_addr)))
  discard xEventGroupSetBits(s_connect_event_group, GOT_IPV4_BIT)

proc on_wifi_disconnect*(arg: pointer; event_base: esp_event_base_t;
                        event_id: int32; event_data: pointer) {.cdecl.} =
  ESP_LOGI(TAG, "Wi-Fi disconnected, trying to reconnect...")
  check: esp_wifi_connect()

proc wifi_start*() =
  ##  set up connection, Wi-Fi or Ethernet
  var cfg: wifi_init_config_t = wifi_init_config_default()

  check: esp_wifi_init(addr(cfg))

  WIFI_EVENT_STA_DISCONNECTED.eventRegister(on_wifi_disconnect, nil)
  IP_EVENT_STA_GOT_IP.eventRegister(got_ip_handler, nil)

  check: esp_wifi_set_storage(WIFI_STORAGE_RAM)

  var wifi_config: wifi_config_t
  wifi_config.sta.ssid.setFromString(CONFIG_EXAMPLE_WIFI_SSID)
  wifi_config.sta.password.setFromString(CONFIG_EXAMPLE_WIFI_PASSWORD)

  ESP_LOGI(TAG, "Connecting to %s...", wifi_config.sta.ssid)
  check: esp_wifi_set_mode(WIFI_MODE_STA)
  check: esp_wifi_set_config(ESP_IF_WIFI_STA, addr(wifi_config))
  check: esp_wifi_start()
  check: esp_wifi_connect()

  s_connection_name = CONFIG_EXAMPLE_WIFI_SSID

proc wifi_stop*() =
  ##  tear down connection, release resources
  WIFI_EVENT_STA_DISCONNECTED.eventUnregister(on_wifi_disconnect) 
  IP_EVENT_STA_GOT_IP.eventUnregister(got_ip_handler)

  check: esp_wifi_stop()
  check: esp_wifi_deinit()

proc example_connect*(): esp_err_t =
  if s_connect_event_group != nil:
    return ESP_ERR_INVALID_STATE

  s_connect_event_group = xEventGroupCreate()

  wifi_start()
  discard xEventGroupWaitBits(s_connect_event_group, CONNECTED_BITS, 1, 1, portMAX_DELAY)

  ESP_LOGI(TAG, "Connected to %s", s_connection_name)
  ESP_LOGI(TAG, "IPv4 address: ", $s_ip_addr)

  run_http_server()
  echo("run_http_server\n")

  return ESP_OK

proc example_disconnect*(): esp_err_t =
  if s_connect_event_group == nil:
    return ESP_ERR_INVALID_STATE

  vEventGroupDelete(s_connect_event_group)
  s_connect_event_group = nil

  wifi_stop()
  ESP_LOGI(TAG, "Disconnected from %s", s_connection_name)
  s_connection_name = nil

  return ESP_OK

proc app_main*() =

  initNvs()
  tcpip_adapter_init()

  check: esp_event_loop_create_default()
  check: example_connect()

  ##  Register event handlers to stop the server when Wi-Fi or Ethernet is disconnected,
  ##  and re-start it upon connection.
  ##
  IP_EVENT_STA_GOT_IP.eventRegister(got_ip_handler, nil)
  WIFI_EVENT_STA_DISCONNECTED.eventRegister(on_wifi_disconnect,nil)

  echo("wifi setup!\n")
  echo("Wait for wifi\n")
  # vTaskDelay(10000 div portTICK_PERIOD_MS)
