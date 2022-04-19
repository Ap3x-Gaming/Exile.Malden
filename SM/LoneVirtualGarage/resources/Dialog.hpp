/**
 * StokesMagee's Resort
 * www.stokesmagee.net
 * © 2017 StokesMagee's Resort
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

class SM_VirtualGarageDialog
{
	idd = 42289;
	onLoad = "uiNamespace setVariable [""SM_VirtualGarageDialog"", _this select 0];";
	onUnload = "uiNamespace setVariable [""SM_VirtualGarageDialog"", displayNull];";
	class controlsBackground
	{
		class Background: RscSMVGText
		{
			idc = 1800;
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.176 * safezoneH;
			colorBackground[] = {"19/255","23/255","27/255",0.75};
		};
		class BackgroundTop: RscSMVGText
		{
			idc = 1804;
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"19/255","23/255","27/255",1};
			text = "Lone Wolf Virtual Garage";
			colorText[] = {"251/255","252/255","254/255",1};
		};
	};
	class controls
	{
		class StoreVehicle: RscSMVGButtonPrimary
		{
			idc = 1600;
			text = "Store Vehicle";
			action = "[] call SM_fnc_onStoreVirtualGarageButtonClick";
			x = 0.469062 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class RetriveVehicle: RscSMVGButtonPrimary
		{
			idc = 1601;
			text = "Retrieve Vehicle";
			action = "[] call SM_fnc_onRetrieveVirtualGarageButtonClick";
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class Cancel: RscSMVGButtonPrimary
		{
			idc = 1602;
			text = "Cancel";
			action = "closeDialog 0";
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class StoredVehicleText: RscSMVGText
		{
			idc = 1000;
			text = "Stored Vehicle:";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"19/255","23/255","27/255",0.75};
			colorText[] = {"251/255","252/255","254/255",1};
		};
		class StoredVehicle: RscSMVGText
		{
			idc = 1001;
			text = "Requesting Information...";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"19/255","23/255","27/255",0.5};
			colorText[] = {"251/255","252/255","254/255",0.75};
		};
		class VehicleNearbyText: RscSMVGText
		{
			idc = 1002;
			text = "Vehicle Nearby:";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"19/255","23/255","27/255",0.75};
			colorText[] = {"251/255","252/255","254/255",1};
		};
		class VehicleNearby: RscSMVGText
		{
			idc = 1003;
			text = "Searching...";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"19/255","23/255","27/255",0.5};
			colorText[] = {"251/255","252/255","254/255",0.75};
		};
	};
};