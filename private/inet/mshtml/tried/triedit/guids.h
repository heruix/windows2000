// guids.h: definitions of GUIDs/IIDs/CLSIDs used in TriEdit
// Copyright (c)1997-1999 Microsoft Corporation, All Rights Reserved
//

//#ifndef __GUIDS_H__
//#define __GUIDS_H__

// IID_ITokenGen for interface in token.h
DEFINE_GUID(IID_ITokenGen,
0x1106aec0, 0xfe30, 0x11d0, 0xb0, 0x79, 0x00, 0x60, 0x08, 0x05, 0x8a, 0x0e);

// IID_IPersistTextStream and IID_IActiveDesigner for DTC filtering
DEFINE_GUID(IID_IPersistTextStream,
0x56223fe3, 0xd397, 0x11cf, 0xa4, 0x2e, 0x00, 0xaa, 0x00, 0xc0, 0x09, 0x40);

DEFINE_GUID(IID_IActiveDesigner,
0x51aae3e0, 0x7486, 0x11cf, 0xa0, 0xc2, 0x0, 0xaa, 0x0, 0x62, 0xbe, 0x57);

// Page Transition DTC
DEFINE_GUID(CLSID_PageTr,
0x8EA785B1, 0x4738, 0x11D1, 0xB4, 0x7C, 0x0, 0xA0, 0xC9, 0x59, 0xBB, 0x15);

// Trident's Command Set
DEFINE_GUID(CMDSETID_Forms3,
0xDE4BA900, 0x59CA, 0x11CF, 0x95, 0x92, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00);

// TriEditParse
DEFINE_GUID(CLSID_TriEditParse, 
0x010E6CBE, 0xFE2B, 0x11D0, 0xB0, 0x79, 0x00, 0x60, 0x08, 0x05, 0x8A, 0x0E);

#define IE5_SPACING
#ifdef IE5_SPACING
// ie5 specific - temporary use
DEFINE_GUID(IID_IHTMLUniqueName, 
0x3050f4d0, 0x98b5, 0x11cf, 0xbb, 0x82, 0x00, 0xaa, 0x00, 0xbd, 0xce, 0x0b);

DEFINE_GUID(IID_IHTMLDocument3, 
0x3050f485, 0x98b5, 0x11cf, 0xbb, 0x82, 0x00, 0xaa, 0x00, 0xbd, 0xce, 0x0b);
#endif //IE5_SPACING