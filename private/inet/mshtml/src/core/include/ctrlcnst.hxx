//+------------------------------------------------------------------------
//
//  File:       ctrlconst.hxx
//
//  Contents:   Constants used by the controls
//
//-------------------------------------------------------------------------

#ifndef I_CTRLCNST_HXX_
#define I_CTRLCNST_HXX_
#pragma INCMSG("--- Beg 'ctrlcnst.hxx'")

// Default control sizes
#define TB_DEFAULT_WIDTH            2540    // 1 in.    Textbox
#define TB_DEFAULT_HEIGHT           635     // .25 in.

#define LB_DEFAULT_WIDTH            2540    // 1 in.    Listbox
#define LB_DEFAULT_HEIGHT           2540    // 1 in.

#define CB_DEFAULT_WIDTH            2540    // 1 in.    Combobox
#define CB_DEFAULT_HEIGHT           635     // 0.25 in.

#define OPB_DEFAULT_WIDTH           3810    // 1.5 in.  Optionbutton
#define OPB_DEFAULT_HEIGHT          635     // .25 in.

#define CKB_DEFAULT_WIDTH           3810    // 1.5 in.  Checkbox
#define CKB_DEFAULT_HEIGHT          635     // .25 in.

#ifndef _MAC
#define TGLB_DEFAULT_WIDTH          1270    // .5 in.   Togglebutton
#define TGLB_DEFAULT_HEIGHT         (40 * 2540 / 72)    // 40 points
#else
#define TGLB_DEFAULT_WIDTH          1524    // .6 in.   Togglebutton
#define TGLB_DEFAULT_HEIGHT         (45 * 2540 / 72)    // 45 points
#endif  // _MAC

#define TABSTRIP_DEFAULT_WIDTH      5080    // 2 in.    Tabstrip
#define TABSTRIP_DEFAULT_HEIGHT     3810    // 1.5 in.

#define IMG_DEFAULT_WIDTH           2540    // 1 inch   Image
#define IMG_DEFAULT_HEIGHT          2540    // 1 inch

#ifndef _MAC
#define CMDB_DEFAULT_WIDTH          2540                // 1 in.    Commandbutton
#else
#define CMDB_DEFAULT_WIDTH          3302                // 1.3 in.    Commandbutton
#endif  // _MAC
#define CMDB_DEFAULT_HEIGHT         (24 * 2540 / 72)    // 24 points


#define MISC_STATUS_COMMAND_BUTTON_95 \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_ACTSLIKEBUTTON | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_SETCLIENTSITEFIRST)

#define MISC_STATUS_TEXT_BOX_95 \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_SETCLIENTSITEFIRST)

#define MISC_STATUS_CHECK_BOX_95 \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_SETCLIENTSITEFIRST)

#define MISC_STATUS_LABEL_95 \
    (OLEMISC_ACTSLIKELABEL | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_SETCLIENTSITEFIRST)

#define MISC_STATUS_OPTION_BUTTON_95 \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_SETCLIENTSITEFIRST)

#define MISC_STATUS_LIST_BOX_95 \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_SETCLIENTSITEFIRST)

#define MISC_STATUS_COMBO_BOX_95 \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_SETCLIENTSITEFIRST)

#define MISC_STATUS_VERTICAL_SCROLL_95 \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_SETCLIENTSITEFIRST)

#define MISC_STATUS_GROUP_BOX_95 \
    (OLEMISC_ACTSLIKELABEL | \
     OLEMISC_NOUIACTIVATE | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_SETCLIENTSITEFIRST)

#define MISC_STATUS_HORIZONTAL_SCROLL_95 \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_SETCLIENTSITEFIRST)

#define MISC_STATUS_IMAGE \
    (OLEMISC_NOUIACTIVATE | \
     OLEMISC_INSIDEOUT | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_IGNOREACTIVATEWHENVISIBLE |\
     OLEMISC_SUPPORTSMULTILEVELUNDO | \
     OLEMISC_CANTLINKINSIDE | \
     OLEMISC_SETCLIENTSITEFIRST)

#define MISC_STATUS_PROP_TABS \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_SUPPORTSMULTILEVELUNDO | \
     OLEMISC_CANTLINKINSIDE | \
     OLEMISC_SETCLIENTSITEFIRST)

#define MISC_STATUS_LABEL_CONTROL \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_SETCLIENTSITEFIRST | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_IGNOREACTIVATEWHENVISIBLE |\
     OLEMISC_SUPPORTSMULTILEVELUNDO | \
     OLEMISC_CANTLINKINSIDE | \
     OLEMISC_ACTSLIKELABEL)

#define MISC_STATUS_COMMAND_BUTTON \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_ACTSLIKEBUTTON | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_IGNOREACTIVATEWHENVISIBLE |\
     OLEMISC_SUPPORTSMULTILEVELUNDO | \
     OLEMISC_CANTLINKINSIDE | \
     OLEMISC_SETCLIENTSITEFIRST)

#define MISC_STATUS_MORPH_DATA_CONTROL \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_IGNOREACTIVATEWHENVISIBLE |\
     OLEMISC_SUPPORTSMULTILEVELUNDO | \
     OLEMISC_CANTLINKINSIDE | \
     OLEMISC_SETCLIENTSITEFIRST)

#define MISC_STATUS_MDCTEXT \
    MISC_STATUS_MORPH_DATA_CONTROL

#define MISC_STATUS_MDCCOMBO \
    MISC_STATUS_MORPH_DATA_CONTROL

#define MISC_STATUS_MDCCHECKBUTTON \
    (MISC_STATUS_MORPH_DATA_CONTROL)

#define MISC_STATUS_MDCOPTIONBUTTON \
    (MISC_STATUS_MORPH_DATA_CONTROL)

#define MISC_STATUS_MDCTOGGLEBUTTON \
    (MISC_STATUS_MORPH_DATA_CONTROL)

#define MISC_STATUS_MDCLIST \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_SETCLIENTSITEFIRST | \
     OLEMISC_CANTLINKINSIDE | \
     OLEMISC_SUPPORTSMULTILEVELUNDO)

#define MISC_STATUS_CTRLSELECTOR \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_IGNOREACTIVATEWHENVISIBLE |\
     OLEMISC_SUPPORTSMULTILEVELUNDO | \
     OLEMISC_CANTLINKINSIDE | \
     OLEMISC_SETCLIENTSITEFIRST)

#define MISC_STATUS_SCROLLBAR \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_IGNOREACTIVATEWHENVISIBLE |\
     OLEMISC_SUPPORTSMULTILEVELUNDO | \
     OLEMISC_CANTLINKINSIDE | \
     OLEMISC_SETCLIENTSITEFIRST)

#define MISC_STATUS_TABSTRIP \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_IGNOREACTIVATEWHENVISIBLE |\
     OLEMISC_SUPPORTSMULTILEVELUNDO | \
     OLEMISC_CANTLINKINSIDE | \
     OLEMISC_SETCLIENTSITEFIRST)

#define MISC_STATUS_TREEVIEW_CONTROL \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_CANTLINKINSIDE | \
     OLEMISC_SETCLIENTSITEFIRST)

#define MISC_STATUS_SPINBUTTON \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_IGNOREACTIVATEWHENVISIBLE |\
     OLEMISC_SUPPORTSMULTILEVELUNDO | \
     OLEMISC_CANTLINKINSIDE | \
     OLEMISC_SETCLIENTSITEFIRST)


#define MISC_STATUS_WHTMLCONTROL \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_IGNOREACTIVATEWHENVISIBLE |\
     OLEMISC_CANTLINKINSIDE | \
     OLEMISC_SETCLIENTSITEFIRST | \
     OLEMISC_ALWAYSRUN)

#define MISC_STATUS_WHTMLHIDDEN \
    (OLEMISC_INSIDEOUT | \
     OLEMISC_RECOMPOSEONRESIZE | \
     OLEMISC_ACTIVATEWHENVISIBLE | \
     OLEMISC_IGNOREACTIVATEWHENVISIBLE |\
     OLEMISC_SETCLIENTSITEFIRST | \
     OLEMISC_ALWAYSRUN | \
     OLEMISC_INVISIBLEATRUNTIME)

#pragma INCMSG("--- End 'ctrlcnst.hxx'")
#else
#pragma INCMSG("*** Dup 'ctrlcnst.hxx'")
#endif
