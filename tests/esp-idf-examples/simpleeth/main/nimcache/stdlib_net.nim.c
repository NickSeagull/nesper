/* Generated by Nim Compiler v1.3.7 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <sys/socket.h>
#include <errno.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
  #  define nimfr_(proc, file) \
      TFrame FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #  define nimfrs_(proc, file, slots, length) \
      struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #  define nimln_(n, file) \
      FR_.line = n; FR_.filename = file;
  
/* section: NIM_merge_TYPES */
typedef NU8 tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ;
typedef NU8 tySet_tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg;
typedef NU8 tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg;

/* section: NIM_merge_PROC_HEADERS */
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);

/* section: NIM_merge_VARS */
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;

/* section: NIM_merge_PROCS */

#line 544 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(void, nimFrame)(TFrame* s) {
#line 545 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	{
#line 545 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		if (!(framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA3_;

#line 546 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		(*s).calldepth = ((NI16) 0);	}
	goto LA1_;
	LA3_: ;
	{
#line 549 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"

#line 549 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		(*s).calldepth = (NI16)((*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1));	}
	LA1_: ;

#line 551 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	(*s).prev = framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
#line 552 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = s;
#line 553 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	{
#line 553 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		if (!((*s).calldepth == ((NI16) 2000))) goto LA8_;

#line 553 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"

#line 553 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw();
	}
	LA8_: ;
}

#line 86 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(void, popFrame)(void) {
#line 87 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).prev;}

#line 1183 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
N_LIB_PRIVATE N_NIMCALL(int, toCInt__jdGcpZaHg8FvJJ7dgE9b75w)(tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ opt) {	int result;	int colontmpD_;	int colontmpD__2;	int colontmpD__3;	int colontmpD__4;	int colontmpD__5;	int colontmpD__6;	int colontmpD__7;	int colontmpD__8;	int colontmpD__9;	nimfr_("toCInt", "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");	result = (int)0;	colontmpD_ = (int)0;	colontmpD__2 = (int)0;	colontmpD__3 = (int)0;	colontmpD__4 = (int)0;	colontmpD__5 = (int)0;	colontmpD__6 = (int)0;	colontmpD__7 = (int)0;	colontmpD__8 = (int)0;	colontmpD__9 = (int)0;
#line 1184 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	nimln_(1184, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");
#line 1185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	nimln_(1185, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");	switch (opt) {
	case ((tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ) 0):
	{
#line 1186 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
		nimln_(1186, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");		colontmpD_ = SO_ACCEPTCONN;		result = colontmpD_;	}
	break;
	case ((tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ) 1):
	{
#line 1187 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
		nimln_(1187, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");		colontmpD__2 = SO_BROADCAST;		result = colontmpD__2;	}
	break;
	case ((tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ) 2):
	{
#line 1188 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
		nimln_(1188, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");		colontmpD__3 = SO_DEBUG;		result = colontmpD__3;	}
	break;
	case ((tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ) 3):
	{
#line 1189 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
		nimln_(1189, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");		colontmpD__4 = SO_DONTROUTE;		result = colontmpD__4;	}
	break;
	case ((tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ) 4):
	{
#line 1190 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
		nimln_(1190, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");		colontmpD__5 = SO_KEEPALIVE;		result = colontmpD__5;	}
	break;
	case ((tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ) 5):
	{
#line 1191 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
		nimln_(1191, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");		colontmpD__6 = SO_OOBINLINE;		result = colontmpD__6;	}
	break;
	case ((tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ) 6):
	{
#line 1192 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
		nimln_(1192, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");		colontmpD__7 = SO_REUSEADDR;		result = colontmpD__7;	}
	break;
	case ((tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ) 7):
	{
#line 1193 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
		nimln_(1193, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");		colontmpD__8 = SO_REUSEPORT;		result = colontmpD__8;	}
	break;
	case ((tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ) 8):
	{
#line 1194 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
		nimln_(1194, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");		colontmpD__9 = ((int) 1);		result = colontmpD__9;	}
	break;
	}
	popFrame();	return result;}

#line 193 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDisconnectionError__XxybNfLJKXhPAkMhmPhNzQ)(tySet_tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg flags, NI32 lastError) {	NIM_BOOL result;	NIM_BOOL T1_;	NIM_BOOL T3_;	NIM_BOOL T4_;	nimfr_("isDisconnectionError", "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");	result = (NIM_BOOL)0;
#line 195 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	nimln_(195, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");
#line 206 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	nimln_(206, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");	T1_ = (NIM_BOOL)0;
#line 206 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	T1_ = ((flags &((NU8)1<<((NU)(((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 1))&7U)))!=0);	if (!(T1_)) goto LA2_;

#line 208 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	nimln_(208, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");	T3_ = (NIM_BOOL)0;
#line 207 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	nimln_(207, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");	T4_ = (NIM_BOOL)0;
#line 207 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	T4_ = (lastError == ECONNRESET);	if (T4_) goto LA5_;

#line 208 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	nimln_(208, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");	T4_ = (lastError == EPIPE);	LA5_: ;
	T3_ = T4_;	if (T3_) goto LA6_;

#line 209 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	nimln_(209, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");	T3_ = (lastError == ENETRESET);	LA6_: ;
	T1_ = T3_;	LA2_: ;
	result = T1_;	popFrame();	return result;}

#line 211 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
N_LIB_PRIVATE N_NIMCALL(int, toOSFlags__o0FbRanOjUQrx1x33AiBQA)(tySet_tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg socketFlags) {	int result;	nimfr_("toOSFlags", "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");{	result = (int)0;	{		tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg f;		NI i;		f = (tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg)0;
#line 52 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/iterators.nim"
		nimln_(52, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/iterators.n"
"im");		i = ((NI) 0);		{
#line 53 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/iterators.nim"
			nimln_(53, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/iterators.n"
"im");			while (1) {				NI TM__XqsrSBxhOTPgLQ9cX4MmV4A_2;
#line 53 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/iterators.nim"
				if (!(i <= ((NI) 1))) goto LA3;

#line 54 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/iterators.nim"
				nimln_(54, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/iterators.n"
"im");				{
#line 54 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/iterators.nim"
					if ((i) < ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 0) || (i) > ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 1)){ raiseRangeErrorI(i, ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 0), ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 1)); goto BeforeRet_;}					if (!((socketFlags &((NU8)1<<((NU)(((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) (i)))&7U)))!=0)) goto LA6_;

#line 213 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
					nimln_(213, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");					if ((i) < ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 0) || (i) > ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 1)){ raiseRangeErrorI(i, ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 0), ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 1)); goto BeforeRet_;}					f = ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) (i));					{
#line 214 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
						nimln_(214, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");						switch (f) {
						case ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 0):
						{
#line 216 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
							nimln_(216, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");
#line 216 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
							result = (NI32)(result | ((NI32) 1));						}
						break;
						case ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 1):
						{
#line 217 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
							nimln_(217, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");							goto LA8;
						}
						break;
						}
					} LA8: ;
				}
				LA6_: ;

#line 55 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/iterators.nim"
				nimln_(55, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/iterators.n"
"im");				if (nimAddInt(i, ((NI) 1), &TM__XqsrSBxhOTPgLQ9cX4MmV4A_2)) { raiseOverflow(); goto BeforeRet_;};				i = (NI)(TM__XqsrSBxhOTPgLQ9cX4MmV4A_2);			} LA3: ;
		}
	}
	}BeforeRet_: ;
	popFrame();	return result;}
