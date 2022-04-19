class RscSMPaintText
{
	deletable = 0;
	fade = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.9843,0.9882,0.996,1};
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0;
	shadow = 1;
	colorShadow[] = {0,0,0,0.5};
	font = "RobotoCondensed";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing = 1;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
};

class RscSMPaintListBox
{
	deletable = 0;
	fade = 0;
	type = 5;
	rowHeight = 0;
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorScrollbar[] = {1,0,0,0};
	colorSelect[] = {0,0,0,1};
	colorSelect2[] = {0,0,0,1};
	colorSelectBackground[] = {0.95,0.95,0.95,1};
	colorSelectBackground2[] = {1,1,1,0.5};
	colorBackground[] = {0,0,0,0.3};
	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	colorTextRight[] = {1,1,1,1};
	colorSelectRight[] = {0,0,0,1};
	colorSelect2Right[] = {0,0,0,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	class ListScrollBar
	{
		color[] = {1,1,1,1};
		autoScrollEnabled = 1;
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		width = 0;
		height = 0;
		autoScrollSpeed = -1;
		autoScrollDelay = 5;
		autoScrollRewind = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		shadow = 0;
		scrollSpeed = 0.06;
	};
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.3;
	style = 16;
	font = "RobotoCondensed";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	colorShadow[] = {0,0,0,0.5};
	period = 1.2;
	maxHistoryDelay = 1;
};

class RscSMPaintCombo
{
	deletable = 0;
	fade = 0;
	type = 4;
	colorSelect[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,1};
	colorScrollbar[] = {1,0,0,1};
	colorDisabled[] = {1,1,1,0.25};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	colorTextRight[] = {1,1,1,1};
	colorSelectRight[] = {0,0,0,1};
	colorSelect2Right[] = {0,0,0,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
	soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
	maxHistoryDelay = 1;
	class ComboScrollBar
	{
		color[] = {1,1,1,1};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		width = 0;
		height = 0;
		autoScrollEnabled = 0;
		autoScrollSpeed = -1;
		autoScrollDelay = 5;
		autoScrollRewind = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		shadow = 0;
		scrollSpeed = 0.06;
	};
	style = "0x10 + 0x200";
	font = "RobotoCondensed";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.12;
	h = 0.035;
	colorSelectBackground[] = {1,1,1,0.7};
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
	wholeHeight = 0.45;
	colorActive[] = {1,0,0,1};
};

class RscSMPaintSlider
{
	style = "0x400 + 0x10";
	type = 43;  // this is the more "modern" slider. Type = 3 is the old dull one.
	shadow = 0;
	color[] = {1,1,1,0.4};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {0.5,0.5,0.5,0.2};
	arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
	thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
};

class RscSMPaintButton
{
	deletable = 0;
	fade = 0;
	type = 1;
	text = "";
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {0,0,0,0.5};
	colorBackgroundDisabled[] = {0,0,0,0.5};
	colorBackgroundActive[] = {0,0,0,1};
	colorFocused[] = {0,0,0,1};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	idc = -1;
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "RobotoCondensed";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	url = "";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	borderSize = 0;
};

class RscSMPaintEdit
{
	deletable = 0;
	fade = 0;
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1,1,1,0.25};
	colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",1};
	autocomplete = "";
	text = "";
	size = 0.2;
	style = "0x00 + 0x40";
	font = "RobotoCondensed";
	shadow = 2;
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	canModify = 1;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
};

class RscSMPaint
{
	idd = 420512;
	onLoad = "uiNameSpace setVariable ['RscSMPaint', _this select 0];";
	onUnload = "uiNameSpace setVariable ['RscSMPaint', displayNull]; [] call ExileClient_gui_modelBox_destroy;";
	class controlsbackground
	{
		class Background: RscSMPaintText
		{
			idc = 1000;
			x = 0.0121156 * safezoneW + safezoneX;
			y = 0.027 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.242 * safezoneH;
			colorBackground[] = {0.0745,0.0901,0.1058,0.85};
		};
		class CancelBackground: RscSMPaintText
		{
			idc = 1001;
			x = 0.0125281 * safezoneW + safezoneX;
			y = 0.91998 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.0599999 * safezoneH;
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class ColorBackground: RscSMPaintText
		{
			idc = 1002;
			show = "false";
			x = 0.221562 * safezoneW + safezoneX;
			y = 0.027 * safezoneH + safezoneY;
			w = 0.113122 * safezoneW;
			h = 0.165 * safezoneH;
			colorBackground[] = {0.0745,0.0901,0.1058,0.85};
		};
		class TextureBackground: RscSMPaintText
		{
			idc = 1003;
			show = "false";
			x = 0.0121156 * safezoneW + safezoneX;
			y = 0.283 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.374 * safezoneH;
			colorBackground[] = {0.0745,0.0901,0.1058,0.85};
		};
		class HexBackground: RscSMPaintText
		{
			idc = 1004;
			show = "false";
			x = 0.0121156 * safezoneW + safezoneX;
			y = 0.283 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.2112 * safezoneH;
			colorBackground[] = {0.0745,0.0901,0.1058,0.85};
		};
		class ColorBackG: RscSMPaintText
		{
			idc = 1005;
			show = "false";
			x = 0.0121156 * safezoneW + safezoneX;
			y = 0.283 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.2112 * safezoneH;
			colorBackground[] = {0.0745,0.0901,0.1058,0.85};
		};
		class MouseArea: RscSMPaintText
		{
			idc = 1029;
			style = 16;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneH";
		};
	};
	class controls
	{
		class LayersLabel: RscSMPaintText
		{
			idc = 1006;
			text = "Layers";
			x = 0.0250062 * safezoneW + safezoneX;
			y = 0.03998 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class Textures: RscSMPaintListBox
		{
			idc = 1007;
			show = "false";
			x = 0.025625 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.280001 * safezoneH;

			sizeEx = "0.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx2 = "0.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			rowHeight = "2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			canDrag = 0;
			itemSpacing = 0.001;
			period = 1.2;
			shadow = 0;
			maxHistoryDelay = 1;
			fade = 0;
			deletable = 0;
			type = 5;
			style = 16;
			colorPicture[] = {1,1,1,1};
			colorPictureDisabled[] = {1,1,1,0.25};
			colorPictureRight[] = {1,1,1,1};
			colorPictureRightDisabled[] = {1,1,1,0.25};
			colorPictureSelected[] = {1,1,1,1};
			colorScrollbar[] = {1,0,0,0};
			colorSelect2[] = {0,0,0,1};
			colorSelect2Right[] = {0,0,0,1};
			colorSelectBackground2[] = {1,1,1,0.5};
			colorSelectBackground[] = {0.95,0.95,0.95,1};
			colorSelectRight[] = {0,0,0,1};
			colorShadow[] = {0,0,0,0.5};
			disabledCtrlColor[] = {1,1,1,0.5};
			itemBackground[] = {1,1,1,0.1};
			tooltipColorBox[] = {1,1,1,1};
			tooltipColorShade[] = {0,0,0,0.65};
			tooltipColorText[] = {1,1,1,1};
		};
		class Layers: RscSMPaintCombo
		{
			idc = 1008;
			x = 0.0250062 * safezoneW + safezoneX;
			y = 0.08398 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
		};
		class TexturesLabel: RscSMPaintText
		{
			idc = 1009;
			show = "false";
			text = "Textures";
			x = 0.025625 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class SM_Color01Progress: RscSMPaintSlider
		{
			color[] = {1,0,0,1};
			idc = 1010;
			show = "false";
			x = 0.025625 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			colorActive[] = {1,0,0,1};
		};
		class SM_Color01Label: RscSMPaintText
		{
			idc = 1011;
			show = "false";
			text = "Red";
			x = 0.231875 * safezoneW + safezoneX;
			y = 0.049 * safezoneH + safezoneY;
			w = 0.0894063 * safezoneW;
			h = 0.0280001 * safezoneH;
		};
		class SM_Stat01Value: RscSMPaintText
		{
			idc = 1012;
			style = 1;
			show = "false";
			text = "0";
			x = 0.231875 * safezoneW + safezoneX;
			y = 0.049 * safezoneH + safezoneY;
			w = 0.0894063 * safezoneW;
			h = 0.0280001 * safezoneH;
		};
		class ColorLabel: RscSMPaintText
		{
			idc = 1013;
			show = "false";
			text = "Color";
			x = 0.025625 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class SM_Color02Progress: RscSMPaintSlider
		{
			idc = 1014;
			color[] = {0,1,0,1};
			show = "false";
			x = 0.025625 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			colorActive[] = {0,1,0,1};
		};
		class SM_Color03Progress: RscSMPaintSlider
		{
			idc = 1015;
			color[] = {0,0,1,1};
			show = "false";
			x = 0.025625 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			colorActive[] = {0,0,1,1};
		};
		class SM_Color04Progress: RscSMPaintSlider
		{
			idc = 1016;
			show = "false";
			color[] = {1,1,1,1};
			colorActive[] = {1,1,1,1};
			x = 0.025625 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
		};
		class SM_Color02Label: RscSMPaintText
		{
			idc = 1017;
			show = "false";
			text = "Green";
			x = 0.231875 * safezoneW + safezoneX;
			y = 0.0776 * safezoneH + safezoneY;
			w = 0.0894063 * safezoneW;
			h = 0.0280001 * safezoneH;
		};
		class SM_Color03Label: RscSMPaintText
		{
			idc = 1018;
			show = "false";
			text = "Blue";
			x = 0.231875 * safezoneW + safezoneX;
			y = 0.1106 * safezoneH + safezoneY;
			w = 0.0894063 * safezoneW;
			h = 0.0280001 * safezoneH;
		};
		class SM_Color04Label: RscSMPaintText
		{
			idc = 1019;
			show = "false";
			text = "Brightness";
			x = 0.231875 * safezoneW + safezoneX;
			y = 0.1392 * safezoneH + safezoneY;
			w = 0.0894063 * safezoneW;
			h = 0.0280001 * safezoneH;
		};
		class SM_Stat02Value: RscSMPaintText
		{
			idc = 1020;
			style = 1;
			show = "false";
			text = "0";
			x = 0.231875 * safezoneW + safezoneX;
			y = 0.0776 * safezoneH + safezoneY;
			w = 0.0894063 * safezoneW;
			h = 0.0280001 * safezoneH;
		};
		class SM_Stat03Value: RscSMPaintText
		{
			idc = 1021;
			style = 1;
			show = "false";
			text = "0";
			x = 0.231875 * safezoneW + safezoneX;
			y = 0.1106 * safezoneH + safezoneY;
			w = 0.0894063 * safezoneW;
			h = 0.0280001 * safezoneH;
		};
		class SM_Stat04Value: RscSMPaintText
		{
			idc = 1022;
			style = 1;
			show = "false";
			text = "0";
			x = 0.231875 * safezoneW + safezoneX;
			y = 0.1414 * safezoneH + safezoneY;
			w = 0.0894063 * safezoneW;
			h = 0.0280001 * safezoneH;
		};
		class Purchase: RscSMPaintButton
		{
			idc = 1023;
			text = "Purchase";
			x = 0.025625 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class ChangeMode: RscSMPaintButton
		{
			idc = 1024;
			text = "Change Mode";
			x = 0.025625 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class CurrentMode: RscSMPaintText
		{
			idc = 1025;
			text = "Mode: color";
			x = 0.025625 * safezoneW + safezoneX;
			y = 0.115 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.04 * safezoneH;
		};
		class Cancel: RscSMPaintButton
		{
			idc = 1026;
			text = "Cancel";
			onButtonClick = "closeDialog 0";
			x = 0.0250062 * safezoneW + safezoneX;
			y = 0.94 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.02 * safezoneH;
		};
		class HexEdit: RscSMPaintEdit
		{
			idc = 1027;
			show = "false";
			x = 0.025625 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.175311 * safezoneW;
			h = 0.0308 * safezoneH;
		};
		class Hex: RscSMPaintText
		{
			idc = 1028;
			show = "false";
			text = "Hex";
			x = 0.025625 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.04 * safezoneH;
		};
	};	
};