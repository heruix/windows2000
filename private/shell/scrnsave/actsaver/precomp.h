/////////////////////////////////////////////////////////////////////////////
// PRECOMP.H
//
// Include file for standard system include files, or project specific
// include files that are used frequently, but are changed infrequently.
//
// History:
//
// Author   Date        Description
// ------   ----        -----------
// jaym     12/09/96    Created
/////////////////////////////////////////////////////////////////////////////
#ifndef __PRECOMP_H__
#define __PRECOMP_H__

#define _ATL_MIN_CRT
#define _ATL_NO_DEBUG_CRT
#define _ATL_STATIC_REGISTRY

#include <olectl.h>
#include <docobj.h>
#include <windowsx.h>
#include <htiface.h>
#include <exdisp.h>
#include <exdispid.h>

#ifdef __cplusplus
#ifndef _M_PPC
#pragma intrinsic(memcpy)
#pragma intrinsic(memcmp)
#pragma intrinsic(memset)
#endif
#endif /* __cplusplus */

#ifdef WIN32
#define WINCAPI             __cdecl
#define DATASEG_READONLY    ".text" // read only data, same as one generated by linker
#else
#define DATASEG_READONLY    "_TEXT"
#endif  // WIN32

#include <ccstock.h>
#include "debug.h"

#undef DEBUG_BREAK
#ifdef _X86_
// Use int 3 so we stop immediately in the source
#define DEBUG_BREAK        { _asm int 3 }
#else
#define DEBUG_BREAK        DebugBreak();
#endif

#include "atlbase.h"
#include "atlcom.h"
#include "statreg.h"
#include "dispids.h"

#include "strclass.h"

#include <mstask.h>
#include <wininet.h>    // for GetUrlCacheEntryInfo and INTERNET_MAX_URL_LENGTH
#include <winineti.h>   // for MAX_CACHE_ENTRY_INFO_SIZE
#include <commctrl.h>   // for Toolbar
#include <comctrlp.h>   // for HDPA
#include <shlobj.h>     // for LPCITEMIDLIST
#include <shlobjp.h>
#include <shlwapi.h>    // for Path* functions
#include <shlwapip.h>
#include <shellp.h>
#include <shdguid.h>
#include <shlguid.h>
#include <shguidp.h>

#ifdef _DEBUG
#include <intshcut.h>   // for IUniformResourceLocator
#endif  // _DEBUG

#include <mshtml.h>     // for IHTMLDocument2
#include <mshtmdid.h>   // for DISPID_*
#include <msxml.h>      // for IXMLDocument
#include <subsmgr.h>

#ifdef FEATURE_FONT_SETTINGS
#include <inetcpl.h>
#endif  // FEATURE_FONT_SETTINGS

class CExeModule : public CComModule
{
public:
    DWORD   dwThreadID;
    LONG    Unlock();
};

extern CExeModule * _pModule;

extern HANDLE       g_hHeap;

#ifdef _DEBUG
extern ULONG        g_cHeapAllocsOutstanding;
#endif  // _DEBUG

#endif  // __PRECOMP_H__
