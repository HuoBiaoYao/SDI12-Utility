/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  PANEL                            1       /* callback function: panelCB */
#define  PANEL_NUMERIC                    2       /* control type: numeric, callback function: (none) */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

#define  MENUBAR                          1
#define  MENUBAR_MENU1                    2
#define  MENUBAR_MENU1_ITEM3              3
#define  MENUBAR_MENU1_ITEM3_3            4
#define  MENUBAR_MENU1_ITEM4              5
#define  MENUBAR_MENU1_ITEM1_3            6
#define  MENUBAR_MENU1_ITEM5              7
#define  MENUBAR_MENU1_ITEM2_2            8
#define  MENUBAR_MENU1_2                  9
#define  MENUBAR_MENU1_2_ITEM8            10
#define  MENUBAR_MENU1_2_ITEM9            11
#define  MENUBAR_MENU1_2_ITEM9_SUBMENU    12
#define  MENUBAR_MENU1_2_ITEM9_ITEM10     13
#define  MENUBAR_MENU1_2_ITEM9_ITEM11     14
#define  MENUBAR_MENU1_5                  15
#define  MENUBAR_MENU1_5_ITEM1_2          16
#define  MENUBAR_MENU1_5_ITEM2            17
#define  MENUBAR_MENU1_5_ITEM3_2          18
#define  MENUBAR_MENU1_5_ITEM12           19
#define  MENUBAR_MENU1_5_ITEM13           20
#define  MENUBAR_MENU1_5_ITEM14           21
#define  MENUBAR_MENU1_4                  22
#define  MENUBAR_MENU1_4_ITEM1            23


     /* Callback Prototypes: */

int  CVICALLBACK panelCB(int panel, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif
