/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

class SM_LockingPlus: RscExileXM8Slide
{
	idc = 51259;
	onLoad = "uiNamespace setVariable ['SM_LockingPlus', (_this select 0)];";
	onUnload = "uiNamespace setVariable ['SM_LockingPlus', nil];";
	class controls
	{
		class RscListbox_1500: RscExileXM8ListBox
		{
			idc = 512591;
			x = 0.1;
			y = 0.18;
			w = 0.3625;
			h = 0.54;
		};
		class RscButton_1600: RscExileXM8Button
		{
			idc = 512592;
			text = "Close";
			x = 0.512499;
			y = 0.22;
			w = 0.3;
			h = 0.1;
			onButtonClick = "[] call SM_LockingPlus_onCloseButtonClick";
		};
		class RscButton_1601: RscExileXM8Button
		{
			idc = 512593;
			text = "Open";
			x = 0.512499;
			y = 0.1;
			w = 0.3;
			h = 0.1;
			onButtonClick = "[] call SM_LockingPlus_onOpenButtonClick";
		};
		class RscButton_1603: RscExileXM8ButtonMenu
		{
			idc = 512594;
			text = "GO BACK";
			x = 0.674999;
			y = 0.68;
			w = 0.15;
			h = 0.04;
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};
		class RscCombo_2100: RscExileXM8Combo
		{
			idc = 512595;
			x = 0.1;
			y = 0.1;
			w = 0.3625;
			h = 0.06;
			onLBSelChanged = "_this call SM_LockingPlus_onLBSelChanged";
		};
	};
};