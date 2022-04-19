/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

class SM_LockerPlus_RscText
{
	deletable = 0;
	fade = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {1, 1, 1, 1};
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0;
	shadow = 1;
	colorShadow[] = {0, 0, 0, 0.5};
	font = "RobotoCondensed";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing = 1;
	tooltipColorText[] = {1, 1, 1, 1};
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
};

class SM_LockerPlus_RscButton
{
	deletable = 0;
	fade = 0;
	type = 1;
	text = "";
	colorText[] = {1, 1, 1, 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	colorBackground[] = {0, 0, 0, 0.5};
	colorBackgroundDisabled[] = {0, 0, 0, 0.5};
	colorBackgroundActive[] = {0, 0, 0, 1};
	colorFocused[] = {0, 0, 0, 1};
	colorShadow[] = {0, 0, 0, 0};
	colorBorder[] = {0, 0, 0, 1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.09, 1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1};
	idc = -1;
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "RobotoCondensed";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	url = "";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	borderSize = 0;
};

class SM_LockerPlus_RscStructuredText
{
	deletable = 0;
	fade = 0;
	type = 13;
	idc = -1;
	style = 0;
	colorText[] = {1, 1, 1, 1};
	class Attributes
	{
		font = "RobotoCondensed";
		color = "#ffffff";
		colorLink = "#D09B43";
		align = "left";
		shadow = 1;
	};
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 1;
};

class SM_LockerPlus_ScrollBar
{
	color[] = {1, 1, 1, 0.6};
	colorActive[] = {1, 1, 1, 1};
	colorDisabled[] = {1, 1, 1, 0.3};
	thumb = "\A3\ui_f\data\gui\cfg\ScrollBar\thumb_ca.paa";
	arrowEmpty = "\A3\ui_f\data\gui\cfg\ScrollBar\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\ScrollBar\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\ScrollBar\border_ca.paa";
	shadow = 0;
	scrollSpeed = 0.06;
	width = 0;
	height = 0;
	autoScrollEnabled = 0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};

class SM_LockerPlus_RscListBox
{
	deletable = 0;
	fade = 0;
	type = 5;
	rowHeight = 0;
	colorText[] = {1, 1, 1, 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	colorScrollBar[] = {1, 0, 0, 0};
	colorSelect[] = {0, 0, 0, 1};
	colorSelect2[] = {0, 0, 0, 1};
	colorSelectBackground[] = {0.95, 0.95, 0.95, 1};
	colorSelectBackground2[] = {1, 1, 1, 0.5};
	colorBackground[] = {0, 0, 0, 0.3};
	soundSelect[] = {"\A3\ui_f\data\sound\RscListBox\soundSelect", 0.09, 1};
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	colorPicture[] = {1, 1, 1, 1};
	colorPictureSelected[] = {1, 1, 1, 1};
	colorPictureDisabled[] = {1, 1, 1, 0.25};
	colorPictureRight[] = {1, 1, 1, 1};
	colorPictureRightSelected[] = {1, 1, 1, 1};
	colorPictureRightDisabled[] = {1, 1, 1, 0.25};
	colorTextRight[] = {1, 1, 1, 1};
	colorSelectRight[] = {0, 0, 0, 1};
	colorSelect2Right[] = {0, 0, 0, 1};
	tooltipColorText[] = {1, 1, 1, 1};
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
	class ListScrollBar: SM_LockerPlus_ScrollBar
	{
		color[] = {1, 1, 1, 1};
		autoScrollEnabled = 1;
	};
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.3;
	style = 16;
	font = "RobotoCondensed";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	colorShadow[] = {0, 0, 0, 0.5};
	period = 1.2;
	maxHistoryDelay = 1;
};

class SM_LockerPlus_RscEdit
{
	deletable = 0;
	fade = 0;
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {0.95, 0.95, 0.95, 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
	autocomplete = "";
	text = "";
	size = 0.2;
	style = "0x00 + 0x40";
	font = "RobotoCondensed";
	shadow = 2;
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	canModify = 1;
	tooltipColorText[] = {1, 1, 1, 1};
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
};

class RscExileLockerDialog
{
	idd = 24029;
	onLoad = "uiNamespace setVariable ['RscExileLockerDialog', _this select 0]; [_this select 0] call SM_LockerPlus_onLockerDialogOpen";
	onUnload = "call ExileClient_gui_lockerDialog_event_onUnload; uiNamespace setVariable ['RscExileLockerDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: SM_LockerPlus_RscText
		{
			idc = 1000;
			x = 0.1375;
			y = 0.18;
			w = 0.75;
			h = 0.4;
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: SM_LockerPlus_RscText
		{
			idc = 1001;
			text = "Locker";
			x = 0.1375;
			y = 0.14;
			w = 0.75;
			h = 0.04;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class BalanceLabel: SM_LockerPlus_RscText
		{
			idc = 1002;
			text = "Balance:";
			x = 0.1625;
			y = 0.2;
			w = 0.35;
			h = 0.04;
		};
		class WithdrawLabel: SM_LockerPlus_RscText
		{
			idc = 1003;
			text = "Amount to withdraw:";
			x = 0.1625;
			y = 0.36;
			w = 0.25;
			h = 0.04;
		};
		class DepositLabel: SM_LockerPlus_RscText
		{
			idc = 1004;
			text = "Amount to deposit:";
			x = 0.6125;
			y = 0.36;
			w = 0.25;
			h = 0.04;
		};
		class InventoryLabel: SM_LockerPlus_RscText
		{
			idc = 1005;
			text = "Inventory:";
			x = 0.6125;
			y = 0.2;
			w = 0.25;
			h = 0.04;
		};
		class WireTransferBackground: SM_LockerPlus_RscText
		{
			idc = 1000;
			x = 0.2375;
			y = 0.64;
			w = 0.55;
			h = 0.36;
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class WireTransferCaption: SM_LockerPlus_RscText
		{
			idc = 1001;
			text = "WireTransfer";
			x = 0.2375;
			y = 0.6;
			w = 0.55;
			h = 0.04;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class PlayersLabel: SM_LockerPlus_RscText
		{
			idc = 1003;
			text = "Player to transfer to:";
			x = 0.25;
			y = 0.66;
			w = 0.25;
			h = 0.04;
		};
		class TransferLabel: SM_LockerPlus_RscText
		{
			idc = 1004;
			text = "Amount to transfer:";
			x = 0.5125;
			y = 0.66;
			w = 0.25;
			h = 0.04;
		};
	};
	class controls
	{
		class Balance: SM_LockerPlus_RscStructuredText
		{
			idc = 4000;
			text = "<t size='1.4'>0</t>";
			x = 0.1625;
			y = 0.26;
			w = 0.35;
			h = 0.08;
			colorBackground[] = {0,0,0,0};
		};
		class Inventory: SM_LockerPlus_RscStructuredText
		{
			idc = 4001;
			text = "<t size='1.4'>0</t>";
			x = 0.6125;
			y = 0.26;
			w = 0.25;
			h = 0.08;
			colorBackground[] = {0,0,0,0};
		};
		class ButtonCancel: SM_LockerPlus_RscButton
		{
			idc = 4002;
			text = "CANCEL";
			onButtonClick = "closeDialog 0";
			x = 0.7125;
			y = 0.52;
			w = 0.15;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class ButtonDeposit: SM_LockerPlus_RscButton
		{
			idc = 4003;
			onButtonClick = "_this call ExileClient_gui_lockerDialog_event_onDepositButtonClick";
			text = "<";
			x = 0.55;
			y = 0.42;
			w = 0.05;
			h = 0.08;
			colorBackground[] = {0,0,0,0.8};
			sizeEx = 1.5 * (0.04);
		};
		class ButtonWithdraw: SM_LockerPlus_RscButton
		{
			idc = 4004;
			onButtonClick = "_this call ExileClient_gui_lockerDialog_event_onWithdrawButtonClick";
			text = ">";
			x = 0.425;
			y = 0.42;
			w = 0.05;
			h = 0.08;
			colorBackground[] = {0,0,0,0.8};
			sizeEx = 1.5 * (0.04);
		};
		class WithdrawInput: SM_LockerPlus_RscEdit
		{
			idc = 4005;
			x = 0.1625;
			y = 0.42;
			w = 0.25;
			h = 0.08;
			colorBackground[] = {0,0,0,1};
		};
		class DepositInput: SM_LockerPlus_RscEdit
		{
			idc = 4006;
			x = 0.6125;
			y = 0.42;
			w = 0.25;
			h = 0.08;
			colorBackground[] = {0,0,0,1};
		};
		class PlayersList: SM_LockerPlus_RscListBox
		{
			idc = 1500;
			x = 0.25;
			y = 0.72;
			w = 0.25;
			h = 0.26;
		};
		class TransferInput: SM_LockerPlus_RscEdit
		{
			idc = 4007;
			x = 0.5125;
			y = 0.72;
			w = 0.25;
			h = 0.08;
			colorBackground[] = {0,0,0,1};
		};
		class TransferButton: SM_LockerPlus_RscButton
		{
			idc = 4008;
			text = "TRANSFER";
			onButtonClick = "[] call SM_LockerPlus_onWireTransferButtonClick";
			x = 0.6125;
			y = 0.94;
			w = 0.15;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
	};
};