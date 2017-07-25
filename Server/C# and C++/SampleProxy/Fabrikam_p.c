

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Jul 24 17:40:51 2017
 */
/* Compiler settings for C:\Users\NEWKI_~1\AppData\Local\Temp\Fabrikam.idl-6013666a:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

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
#define PROC_FORMAT_STRING_SIZE   417                               
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

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
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
/*  8 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sender */

/* 26 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter e */

/* 32 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 38 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 40 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 42 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Invoke */

/* 44 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 46 */	NdrFcLong( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x3 ),	/* 3 */
/* 52 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	NdrFcShort( 0x8 ),	/* 8 */
/* 58 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 60 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter asyncInfo */

/* 70 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 72 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 74 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter status */

/* 76 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 78 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 80 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 82 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 84 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 86 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Completed */

/* 88 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 90 */	NdrFcLong( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x6 ),	/* 6 */
/* 96 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 102 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 104 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handler */

/* 114 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 116 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 118 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Return value */

/* 120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 122 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Completed */

/* 126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x7 ),	/* 7 */
/* 134 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 140 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 142 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handler */

/* 152 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 154 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 156 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Return value */

/* 158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 160 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetResults */

/* 164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 172 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x24 ),	/* 36 */
/* 178 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 180 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter results */

/* 190 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 192 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 198 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TestMethod */

/* 202 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x6 ),	/* 6 */
/* 210 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 216 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 218 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x1 ),	/* 1 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter input */

/* 228 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 230 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 232 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 234 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 236 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 238 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 242 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure add_PeriodicEvent */

/* 246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x7 ),	/* 7 */
/* 254 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x34 ),	/* 52 */
/* 260 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 262 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 272 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 274 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 276 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter returnValue */

/* 278 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 280 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 282 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 286 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure remove_PeriodicEvent */

/* 290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 298 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 300 */	NdrFcShort( 0x18 ),	/* 24 */
/* 302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 304 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 306 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 316 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 318 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 320 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 324 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindElementAsync */

/* 328 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x9 ),	/* 9 */
/* 336 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 338 */	NdrFcShort( 0x8 ),	/* 8 */
/* 340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 342 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 344 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter input */

/* 354 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 356 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 360 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 362 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 364 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Return value */

/* 366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 368 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RetrieveData */

/* 372 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0xa ),	/* 10 */
/* 380 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x24 ),	/* 36 */
/* 386 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 388 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 390 */	NdrFcShort( 0x1 ),	/* 1 */
/* 392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __valueSize */

/* 398 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 400 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 404 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 406 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 408 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */

	/* Return value */

/* 410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 412 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 414 */	0x8,		/* FC_LONG */
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
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
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
/* 170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (162) */
/* 176 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 182 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
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
    44
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
    88,
    126,
    164
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
   GUID={0x70C0D02F,0xF21A,0x4EE1,{0xA4,0xFE,0x9A,0x21,0x63,0x94,0x52,0xF3}} */

#pragma code_seg(".orpc")
static const unsigned short __x_Fabrikam_CIFoo_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    202,
    246,
    290,
    328,
    372
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
    ( CInterfaceProxyVtbl *) &___x_Fabrikam_CIFooProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIEventHandler_1_HSTRINGProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIAsyncOperation_1_intProxyVtbl,
    ( CInterfaceProxyVtbl *) &___FIAsyncOperationCompletedHandler_1_intProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _Fabrikam_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &___x_Fabrikam_CIFooStubVtbl,
    ( CInterfaceStubVtbl *) &___FIEventHandler_1_HSTRINGStubVtbl,
    ( CInterfaceStubVtbl *) &___FIAsyncOperation_1_intStubVtbl,
    ( CInterfaceStubVtbl *) &___FIAsyncOperationCompletedHandler_1_intStubVtbl,
    0
};

PCInterfaceName const _Fabrikam_InterfaceNamesList[] = 
{
    "__x_Fabrikam_CIFoo",
    "__FIEventHandler_1_HSTRING",
    "__FIAsyncOperation_1_int",
    "__FIAsyncOperationCompletedHandler_1_int",
    0
};

const IID *  const _Fabrikam_BaseIIDList[] = 
{
    &IID_IInspectable,
    0,
    &IID_IInspectable,
    0,
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
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

