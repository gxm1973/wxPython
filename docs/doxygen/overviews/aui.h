/////////////////////////////////////////////////////////////////////////////
// Name:        aui.h
// Purpose:     topic overview
// Author:      wxWidgets team
// RCS-ID:      $Id$
// Licence:     wxWindows license
/////////////////////////////////////////////////////////////////////////////

/*!

 @page overview_aui wxAUI overview

 Class: wxAuiManager, wxAuiPaneInfo

 wxAUI stands for Advanced User Interface and the wxAUI framework
 aims to give its user a cutting edge interface for use with the
 wxWidgets based applications. The original wxAUI sources have
 kindly been made available under the wxWindows licence
 by Kirix Corp. and they have since then been integrated into
 wxWidgets CVS and further improved.

 wxAUI attempts to encapsulate the following aspects of the user interface:

 @li @ref overview_aui_frame
 @li @ref overview_aui_toolbar
 @li @ref overview_aui_modeless
 @li @ref overview_aui_lnf

 <hr>


 @section overview_aui_frame Frame Management

 Frame management provides the means to open, move and hide common
 controls that are needed to interact with the document, and allow these
 configurations to be saved into different perspectives and loaded at a
 later time.

 @subsection overview_aui_toolbar Toolbars

 Toolbars are a specialized subset of the frame management system and
 should behave similarly to other docked components. However, they also
 require additional functionality, such as "spring-loaded" rebar support,
 "chevron" buttons and end-user customizability.

 @subsection overview_aui_modeless Modeless Controls

 Modeless controls expose a tool palette or set of options that float
 above the application content while allowing it to be accessed. Usually
 accessed by the toolbar, these controls disappear when an option is
 selected, but may also be "torn off" the toolbar into a floating frame
 of their own.

 @subsection overview_aui_lnf Look and Feel

 Look and feel encompasses the way controls are drawn, both when shown
 statically as well as when they are being moved. This aspect of user
 interface design incorporates "special effects" such as transparent
 window dragging as well as frame animation.

 wxAUI adheres to the following principles:
 Use native floating frames to obtain a native look and feel for all
 platforms. Use existing wxWidgets code where possible, such as sizer
 implementation for frame management. Use classes included in wxCore
 and wxBase only. Use standard wxWidgets coding conventions.

*/
