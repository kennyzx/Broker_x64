

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Wed Mar 05 09:50:52 2014
 */
/* Compiler settings for C:\Users\eho\AppData\Local\Temp\Fabrikam.idl-49f65c60:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "Fabrikam.h"

#define TYPE_FORMAT_STRING_SIZE   199                               
#define PROC_FORMAT_STRING_SIZE   397                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _Fabrikam_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } Fabrikam_MIDL_TYPE_FORMAT_STRING;

typedef struct _Fabrikam_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } Fabrikam_MIDL_PROC_FORMAT_STRING;

typedef struct _Fabrikam_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } Fabrikam_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const Fabrikam_MIDL_TYPE_FORMAT_STRING Fabrikam__MIDL_TypeFormatString;
extern const Fabrikam_MIDL_PROC_FORMAT_STRING Fabrikam__MIDL_ProcFormatString;
extern const Fabrikam_MIDL_EXPR_FORMAT_STRING Fabrikam__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIEventHandler_1_HSTRING_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIEventHandler_1_HSTRING_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIAsyncOperationCompletedHandler_1_int_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIAsyncOperationCompletedHandler_1_int_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __FIAsyncOperation_1_int_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __FIAsyncOperation_1_int_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_Fabrikam_CIFoo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_Fabrikam_CIFoo_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const Fabrikam_MIDL_PROC_FORMAT_STRING Fabrikam__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Invoke */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sender */

/* 24 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter e */

/* 30 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Invoke */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x3 ),	/* 3 */
/* 50 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 52 */	NdrFcShort( 0x8 ),	/* 8 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 58 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter asyncInfo */

/* 66 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 68 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 70 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter status */

/* 72 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 74 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 76 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Completed */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x6 ),	/* 6 */
/* 92 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x8 ),	/* 8 */
/* 98 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handler */

/* 108 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 112 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Return value */

/* 114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 116 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Completed */

/* 120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x7 ),	/* 7 */
/* 128 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 134 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 136 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handler */

/* 144 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 146 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 148 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Return value */

/* 150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 152 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetResults */

/* 156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 164 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x24 ),	/* 36 */
/* 170 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 172 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter results */

/* 180 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 182 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 188 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TestMethod */

/* 192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x6 ),	/* 6 */
/* 200 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 206 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 208 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter input */

/* 216 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 220 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 222 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 226 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure add_PeriodicEvent */

/* 234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x7 ),	/* 7 */
/* 242 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x34 ),	/* 52 */
/* 248 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 250 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 258 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 262 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter returnValue */

/* 264 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 266 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 268 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 272 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure remove_PeriodicEvent */

/* 276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 286 */	NdrFcShort( 0x18 ),	/* 24 */
/* 288 */	NdrFcShort( 0x8 ),	/* 8 */
/* 290 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 292 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 300 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 304 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 308 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindElementAsync */

/* 312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x9 ),	/* 9 */
/* 320 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 326 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 328 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter input */

/* 336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 342 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 346 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RetrieveData */

/* 354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0xa ),	/* 10 */
/* 362 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x24 ),	/* 36 */
/* 368 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 370 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 372 */	NdrFcShort( 0x1 ),	/* 1 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __valueSize */

/* 378 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 384 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 388 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */

	/* Return value */

/* 390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const Fabrikam_MIDL_TYPE_FORMAT_STRING Fabrikam__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  4 */	NdrFcLong( 0xaf86e2e0 ),	/* -1350114592 */
/*  8 */	NdrFcShort( 0xb12d ),	/* -20179 */
/* 10 */	NdrFcShort( 0x4c6a ),	/* 19562 */
/* 12 */	0x9c,		/* 156 */
			0x5a,		/* 90 */
/* 14 */	0xd7,		/* 215 */
			0xaa,		/* 170 */
/* 16 */	0x65,		/* 101 */
			0x10,		/* 16 */
/* 18 */	0x1e,		/* 30 */
			0x90,		/* 144 */
/* 20 */	
			0x12, 0x0,	/* FC_UP */
/* 22 */	NdrFcShort( 0xe ),	/* Offset= 14 (36) */
/* 24 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 26 */	NdrFcShort( 0x2 ),	/* 2 */
/* 28 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 30 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 32 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 34 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 36 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 38 */	NdrFcShort( 0x8 ),	/* 8 */
/* 40 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (24) */
/* 42 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 44 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 46 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0xffde ),	/* Offset= -34 (20) */
/* 56 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 58 */	NdrFcLong( 0x968b9665 ),	/* -1769236891 */
/* 62 */	NdrFcShort( 0x6ed ),	/* 1773 */
/* 64 */	NdrFcShort( 0x5774 ),	/* 22388 */
/* 66 */	0x8f,		/* 143 */
			0x53,		/* 83 */
/* 68 */	0x8e,		/* 142 */
			0xde,		/* 222 */
/* 70 */	0xab,		/* 171 */
			0xd5,		/* 213 */
/* 72 */	0xf7,		/* 247 */
			0xb5,		/* 181 */
/* 74 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 76 */	NdrFcLong( 0xd60cae9d ),	/* -703811939 */
/* 80 */	NdrFcShort( 0x88cb ),	/* -30517 */
/* 82 */	NdrFcShort( 0x59f1 ),	/* 23025 */
/* 84 */	0x85,		/* 133 */
			0x76,		/* 118 */
/* 86 */	0x3f,		/* 63 */
			0xba,		/* 186 */
/* 88 */	0x44,		/* 68 */
			0x79,		/* 121 */
/* 90 */	0x6b,		/* 107 */
			0xe8,		/* 232 */
/* 92 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 94 */	NdrFcShort( 0xffec ),	/* Offset= -20 (74) */
/* 96 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 98 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 100 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 102 */	NdrFcShort( 0x2 ),	/* Offset= 2 (104) */
/* 104 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 106 */	NdrFcLong( 0x98b9acc1 ),	/* -1732662079 */
/* 110 */	NdrFcShort( 0x4b56 ),	/* 19286 */
/* 112 */	NdrFcShort( 0x532e ),	/* 21294 */
/* 114 */	0xac,		/* 172 */
			0x73,		/* 115 */
/* 116 */	0x3,		/* 3 */
			0xd5,		/* 213 */
/* 118 */	0x29,		/* 41 */
			0x1c,		/* 28 */
/* 120 */	0xca,		/* 202 */
			0x90,		/* 144 */
/* 122 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 124 */	NdrFcLong( 0xac4cb24b ),	/* -1404259765 */
/* 128 */	NdrFcShort( 0xbf86 ),	/* -16506 */
/* 130 */	NdrFcShort( 0x5ab0 ),	/* 23216 */
/* 132 */	0xbf,		/* 191 */
			0x9d,		/* 157 */
/* 134 */	0x55,		/* 85 */
			0x5e,		/* 94 */
/* 136 */	0x7d,		/* 125 */
			0x89,		/* 137 */
/* 138 */	0x76,		/* 118 */
			0x4a,		/* 74 */
/* 140 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 142 */	NdrFcShort( 0x2 ),	/* Offset= 2 (144) */
/* 144 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 148 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 150 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 152 */	NdrFcShort( 0xffa0 ),	/* Offset= -96 (56) */
/* 154 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 156 */	NdrFcShort( 0x2 ),	/* Offset= 2 (158) */
/* 158 */	
			0x13, 0x0,	/* FC_OP */
/* 160 */	NdrFcShort( 0x10 ),	/* Offset= 16 (176) */
/* 162 */	
			0x13, 0x0,	/* FC_OP */
/* 164 */	NdrFcShort( 0xff80 ),	/* Offset= -128 (36) */
/* 166 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x4 ),	/* 4 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (162) */
/* 176 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 182 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 184 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 186 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 190 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 192 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 194 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (166) */
/* 196 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            HSTRING_UserSize
            ,HSTRING_UserMarshal
            ,HSTRING_UserUnmarshal
            ,HSTRING_UserFree
            }

        };



/* Standard interface: __MIDL_itf_Fabrikam_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0246, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0247, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0248, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0003, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0249, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0004, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0250, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0251, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0252, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0007, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0253, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0008, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: __FIEventHandler_1_HSTRING, ver. 0.0,
   GUID={0xac4cb24b,0xbf86,0x5ab0,{0xbf,0x9d,0x55,0x5e,0x7d,0x89,0x76,0x4a}} */

#pragma code_seg(".orpc")
static const unsigned short __FIEventHandler_1_HSTRING_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __FIEventHandler_1_HSTRING_ProxyInfo =
    {
    &Object_StubDesc,
    Fabrikam__MIDL_ProcFormatString.Format,
    &__FIEventHandler_1_HSTRING_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FIEventHandler_1_HSTRING_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Fabrikam__MIDL_ProcFormatString.Format,
    &__FIEventHandler_1_HSTRING_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) ___FIEventHandler_1_HSTRINGProxyVtbl = 
{
    &__FIEventHandler_1_HSTRING_ProxyInfo,
    &IID___FIEventHandler_1_HSTRING,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* __FIEventHandler_1_HSTRING::Invoke */
};

const CInterfaceStubVtbl ___FIEventHandler_1_HSTRINGStubVtbl =
{
    &IID___FIEventHandler_1_HSTRING,
    &__FIEventHandler_1_HSTRING_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_Fabrikam_0000_0009, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0254, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0010, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __FIAsyncOperationCompletedHandler_1_int, ver. 0.0,
   GUID={0xd60cae9d,0x88cb,0x59f1,{0x85,0x76,0x3f,0xba,0x44,0x79,0x6b,0xe8}} */

#pragma code_seg(".orpc")
static const unsigned short __FIAsyncOperationCompletedHandler_1_int_FormatStringOffsetTable[] =
    {
    42
    };

static const MIDL_STUBLESS_PROXY_INFO __FIAsyncOperationCompletedHandler_1_int_ProxyInfo =
    {
    &Object_StubDesc,
    Fabrikam__MIDL_ProcFormatString.Format,
    &__FIAsyncOperationCompletedHandler_1_int_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FIAsyncOperationCompletedHandler_1_int_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Fabrikam__MIDL_ProcFormatString.Format,
    &__FIAsyncOperationCompletedHandler_1_int_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) ___FIAsyncOperationCompletedHandler_1_intProxyVtbl = 
{
    &__FIAsyncOperationCompletedHandler_1_int_ProxyInfo,
    &IID___FIAsyncOperationCompletedHandler_1_int,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* __FIAsyncOperationCompletedHandler_1_int::Invoke */
};

const CInterfaceStubVtbl ___FIAsyncOperationCompletedHandler_1_intStubVtbl =
{
    &IID___FIAsyncOperationCompletedHandler_1_int,
    &__FIAsyncOperationCompletedHandler_1_int_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_Fabrikam_0000_0011, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0255, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_Fabrikam_0000_0012, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IInspectable, ver. 0.0,
   GUID={0xAF86E2E0,0xB12D,0x4c6a,{0x9C,0x5A,0xD7,0xAA,0x65,0x10,0x1E,0x90}} */


/* Object interface: __FIAsyncOperation_1_int, ver. 0.0,
   GUID={0x968b9665,0x06ed,0x5774,{0x8f,0x53,0x8e,0xde,0xab,0xd5,0xf7,0xb5}} */

#pragma code_seg(".orpc")
static const unsigned short __FIAsyncOperation_1_int_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    84,
    120,
    156
    };

static const MIDL_STUBLESS_PROXY_INFO __FIAsyncOperation_1_int_ProxyInfo =
    {
    &Object_StubDesc,
    Fabrikam__MIDL_ProcFormatString.Format,
    &__FIAsyncOperation_1_int_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __FIAsyncOperation_1_int_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Fabrikam__MIDL_ProcFormatString.Format,
    &__FIAsyncOperation_1_int_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___FIAsyncOperation_1_intProxyVtbl = 
{
    &__FIAsyncOperation_1_int_ProxyInfo,
    &IID___FIAsyncOperation_1_int,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __FIAsyncOperation_1_int::put_Completed */ ,
    (void *) (INT_PTR) -1 /* __FIAsyncOperation_1_int::get_Completed */ ,
    (void *) (INT_PTR) -1 /* __FIAsyncOperation_1_int::GetResults */
};


static const PRPC_STUB_FUNCTION __FIAsyncOperation_1_int_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___FIAsyncOperation_1_intStubVtbl =
{
    &IID___FIAsyncOperation_1_int,
    &__FIAsyncOperation_1_int_ServerInfo,
    9,
    &__FIAsyncOperation_1_int_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_Fabrikam_0000_0013, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_Fabrikam_CIFoo, ver. 0.0,
   GUID={0x96F6F9C8,0x253D,0x47F3,{0x8D,0x1E,0x55,0xF9,0xD5,0xA4,0x2A,0x10}} */

#pragma code_seg(".orpc")
static const unsigned short __x_Fabrikam_CIFoo_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    192,
    234,
    276,
    312,
    354
    };

static const MIDL_STUBLESS_PROXY_INFO __x_Fabrikam_CIFoo_ProxyInfo =
    {
    &Object_StubDesc,
    Fabrikam__MIDL_ProcFormatString.Format,
    &__x_Fabrikam_CIFoo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_Fabrikam_CIFoo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Fabrikam__MIDL_ProcFormatString.Format,
    &__x_Fabrikam_CIFoo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) ___x_Fabrikam_CIFooProxyVtbl = 
{
    &__x_Fabrikam_CIFoo_ProxyInfo,
    &IID___x_Fabrikam_CIFoo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_Fabrikam_CIFoo::TestMethod */ ,
    (void *) (INT_PTR) -1 /* __x_Fabrikam_CIFoo::add_PeriodicEvent */ ,
    (void *) (INT_PTR) -1 /* __x_Fabrikam_CIFoo::remove_PeriodicEvent */ ,
    (void *) (INT_PTR) -1 /* __x_Fabrikam_CIFoo::FindElementAsync */ ,
    (void *) (INT_PTR) -1 /* __x_Fabrikam_CIFoo::RetrieveData */
};


static const PRPC_STUB_FUNCTION __x_Fabrikam_CIFoo_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_Fabrikam_CIFooStubVtbl =
{
    &IID___x_Fabrikam_CIFoo,
    &__x_Fabrikam_CIFoo_ServerInfo,
    11,
    &__x_Fabrikam_CIFoo_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_Fabrikam_0000_0014, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    Fabrikam__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x800025b, /* MIDL Version 8.0.603 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _Fabrikam_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &___FIEventHandler_1_HSTRINGProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIAsyncOperation_1_intProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIAsyncOperationCompletedHandler_1_intProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_Fabrikam_CIFooProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _Fabrikam_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &___FIEventHandler_1_HSTRINGStubVtbl,
    ( CInterfaceStubVtbl *) &___FIAsyncOperation_1_intStubVtbl,
    ( CInterfaceStubVtbl *) &___FIAsyncOperationCompletedHandler_1_intStubVtbl,
    ( CInterfaceStubVtbl *) &___x_Fabrikam_CIFooStubVtbl,
    0
};

PCInterfaceName const _Fabrikam_InterfaceNamesList[] = 
{
    "__FIEventHandler_1_HSTRING",
    "__FIAsyncOperation_1_int",
    "__FIAsyncOperationCompletedHandler_1_int",
    "__x_Fabrikam_CIFoo",
    0
};

const IID *  const _Fabrikam_BaseIIDList[] = 
{
    0,
    &IID_IInspectable,
    0,
    &IID_IInspectable,
    0
};


#define _Fabrikam_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _Fabrikam, pIID, n)

int __stdcall _Fabrikam_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _Fabrikam, 4, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _Fabrikam, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _Fabrikam, 4, *pIndex )
    
}

const ExtendedProxyFileInfo Fabrikam_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _Fabrikam_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _Fabrikam_StubVtblList,
    (const PCInterfaceName * ) & _Fabrikam_InterfaceNamesList,
    (const IID ** ) & _Fabrikam_BaseIIDList,
    & _Fabrikam_IID_Lookup, 
    4,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

