

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sat Aug 12 21:31:12 2017
 */
/* Compiler settings for C:\Users\NEWKI_~1\AppData\Local\Temp\Fabrikam.idl-639a7b87:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID___FIEventHandler_1_HSTRING,0xac4cb24b,0xbf86,0x5ab0,0xbf,0x9d,0x55,0x5e,0x7d,0x89,0x76,0x4a);


MIDL_DEFINE_GUID(IID, IID___FIAsyncOperationCompletedHandler_1_int,0xd60cae9d,0x88cb,0x59f1,0x85,0x76,0x3f,0xba,0x44,0x79,0x6b,0xe8);


MIDL_DEFINE_GUID(IID, IID___FIAsyncOperation_1_int,0x968b9665,0x06ed,0x5774,0x8f,0x53,0x8e,0xde,0xab,0xd5,0xf7,0xb5);


MIDL_DEFINE_GUID(IID, IID___x_Fabrikam_CIFoo,0x96F6F9C8,0x253D,0x47F3,0x8D,0x1E,0x55,0xF9,0xD5,0xA4,0x2A,0x10);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



