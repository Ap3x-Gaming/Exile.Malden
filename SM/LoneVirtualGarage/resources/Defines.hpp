/**
 * StokesMagee's Resort
 * www.stokesmagee.net
 * © 2017 StokesMagee's Resort
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

class RscSMVGText
{
    deletable = 0;
    fade = 0;
    type = 0;
    idc = -1;
    colorBackground[] = {0,0,0,0};
    colorText[] = {1,1,1,1};
    text = "";
    fixedWidth = 0;
    x = 0;
    y = 0;
    h = 0.037;
    w = 0.3;
    style = 0;
    shadow = 1;
    colorShadow[] = {0,0,0,0.5};
    font = "PuristaMedium";
    sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1)";
    linespacing = 1;
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {1,1,1,1};
    tooltipColorShade[] = {0,0,0,0.65};
};

class RscSMVGFrame
{
    type = 0;
    idc = -1;
    style = 64;
    shadow = 2;
    colorBackground[] = {0,0,0,0};
    colorText[] = {1,1,1,1};
    font = "PuristaMedium";
    sizeEx = 0.02;
    text = "";
    x = 0;
    y = 0;
    w = 0.3;
    h = 0.3;
};

class RscSMVGButton
{
    deletable = 0;
    fade = 0;
    access = 0;
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
    sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
    url = "";
    offsetX = 0;
    offsetY = 0;
    offsetPressedX = 0;
    offsetPressedY = 0;
    borderSize = 0;
};
class RscSMVGButtonPrimary: RscSMVGButton
{
    colorBackground[] = {"199/255","38/255","81/255",0.5};
    colorText[] = {"251/255","252/255","254/255",1};
    shadow = 0;
    font = "PuristaSemibold";
    sizeEx = "20 * pixelH";
    colorFocused[] = {"199/255","38/255","81/255",0.75};
    colorBackgroundActive[] = {"199/255","38/255","81/255",0.75};
    colorDisabled[] = {"251/255","252/255","254/255",0.25};
    colorBackgroundDisabled[] = {"199/255","38/255","81/255",0.25};
};