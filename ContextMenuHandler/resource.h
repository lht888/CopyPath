#pragma once

///////////////////////////////////////////////////////////////////////////////////////////////////

#define VER_N(major,minor,build,revision) major,minor,build,revision

#define VER_A_(v) #v
#define VER_A(major,minor,build,revision) VER_A_(major.minor.build.revision)

#define WSTR_(sa) L##sa
#define WSTR(sa) WSTR_(sa)

///////////////////////////////////////////////////////////////////////////////////////////////////

#define VERSION_MAJOR			0
#define VERSION_MINOR			1
#define VERSION_BUILD			01
#define VERSION_REVISION		01

///////////////////////////////////////////////////////////////////////////////////////////////////

#define IDI_ICON_MENU			100
#define ICON_MENU_NAME_A		"icon.ico"

///////////////////////////////////////////////////////////////////////////////////////////////////

#define SUBMENU_ITEM_1			0
#define SUBMENU_ITEM_2			1
#define SUBMENU_ITEM_3			2
#define SUBMENU_SEPARATOR_1			3
#define SUBMENU_ITEM_5			4
#define SUBMENU_ITEM_6			5
#define SUBMENU_ITEM_7			6
#define MENU_ITEM				7

#define IDS_SUBMENU_ITEM_1		200 + SUBMENU_ITEM_1
#define IDS_SUBMENU_ITEM_2		200 + SUBMENU_ITEM_2
#define IDS_SUBMENU_ITEM_3		200 + SUBMENU_ITEM_3
//#define IDS_SUBMENU_ITEM_4		200 + SUBMENU_ITEM_4
#define IDS_SUBMENU_ITEM_5		200 + SUBMENU_ITEM_5
#define IDS_SUBMENU_ITEM_6		200 + SUBMENU_ITEM_6
#define IDS_SUBMENU_ITEM_7		200 + SUBMENU_ITEM_7
#define IDS_MENU_ITEM			200 + MENU_ITEM

///////////////////////////////////////////////////////////////////////////////////////////////////

#define PRODUCT_NAME_A			"Context Menu Handler"
#define PRODUCT_NAME_W			WSTR(PRODUCT_NAME_A)

///////////////////////////////////////////////////////////////////////////////////////////////////

#define PRODUCT_DESCRIPTION_A	"Context Menu Handler Shell Extension"

///////////////////////////////////////////////////////////////////////////////////////////////////

#define PRODUCT_COPYRIGHT_A		"Copyright (c) 2022 LHT CN"

///////////////////////////////////////////////////////////////////////////////////////////////////

#define PRODUCT_HKCR_W			L"*", L"Directory"

///////////////////////////////////////////////////////////////////////////////////////////////////

#define PRODUCT_CLSID_W			L"{AAAAAAAA-BBBB-CCCC-DDDD-EEEEEEEEEEEE}"
