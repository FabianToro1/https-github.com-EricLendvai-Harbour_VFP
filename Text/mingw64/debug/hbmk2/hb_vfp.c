/*
 * Harbour 3.2.0dev (r1901151150)
 * MinGW GNU C 8.1 (64-bit)
 * Generated C source from "r:\Harbour_vfp\mingw64\debug\hb_vfp.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( HB_VFP_OUTPUTDEBUGSTRING );
HB_FUNC_EXTERN( HB_VFP_SENDTODEBUGVIEW );
HB_FUNC_EXTERN( ISBEGSEQ );
HB_FUNC_EXTERN( VFP_DBF );
HB_FUNC_EXTERN( VFP_GETCOMPATIBILITYPACKVERSION );
HB_FUNC_EXTERN( VFP_SCANSTACK );
HB_FUNC_EXTERN( VFP_STRREPLACE );
HB_FUNC_EXTERN( VFP_STRTOFILE );
HB_FUNC_EXTERN( VFP_STRTRAN );
HB_FUNC_EXTERN( __DBGENTRY );
HB_FUNC_EXTERN( __DEBUGITEM );
HB_FUNC_EXTERN( __GETLASTRETURN );
HB_FUNC_EXTERN( __PIDNUM );
HB_FUNC( __HBEXTERN__HB_VFP__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HB_VFP )
{ "HB_VFP_OUTPUTDEBUGSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFP_OUTPUTDEBUGSTRING )}, NULL },
{ "HB_VFP_SENDTODEBUGVIEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFP_SENDTODEBUGVIEW )}, NULL },
{ "ISBEGSEQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISBEGSEQ )}, NULL },
{ "VFP_DBF", {HB_FS_PUBLIC}, {HB_FUNCNAME( VFP_DBF )}, NULL },
{ "VFP_GETCOMPATIBILITYPACKVERSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( VFP_GETCOMPATIBILITYPACKVERSION )}, NULL },
{ "VFP_SCANSTACK", {HB_FS_PUBLIC}, {HB_FUNCNAME( VFP_SCANSTACK )}, NULL },
{ "VFP_STRREPLACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VFP_STRREPLACE )}, NULL },
{ "VFP_STRTOFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VFP_STRTOFILE )}, NULL },
{ "VFP_STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VFP_STRTRAN )}, NULL },
{ "__DBGENTRY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGENTRY )}, NULL },
{ "__DEBUGITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEBUGITEM )}, NULL },
{ "__GETLASTRETURN", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GETLASTRETURN )}, NULL },
{ "__PIDNUM", {HB_FS_PUBLIC}, {HB_FUNCNAME( __PIDNUM )}, NULL },
{ "__HBEXTERN__HB_VFP__", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HB_VFP__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HB_VFP, "r:\\Harbour_vfp\\mingw64\\debug\\hb_vfp.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HB_VFP
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HB_VFP )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HB_VFP__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

