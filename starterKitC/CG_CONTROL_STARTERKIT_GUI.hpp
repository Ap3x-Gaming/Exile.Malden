#include "common.hpp"

class CG_STARTERKIT {

	idd = 0101;

	class controls {

		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by garcia__, v1.063, #Tedyge)
		////////////////////////////////////////////////////////

		class CG_baseFrame: RscFrame
		{
			idc = 1800;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.143 * safezoneH;
		};
		class CG_pic: RscPicture
		{
			idc = 1800;
			text = "starterKitC\sign_thc_starterkitbg.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.143 * safezoneH;
		};
		class CG_textFrame: RscCGStarterKitStructuredText
		{
			idc = 1100;
			text = "Choose to get your starter box now!"; //--- ToDo: Localize;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class CG_okButton: RscCGStarterKitButton
		{
			idc = 1600;
			text = "OK"; //--- ToDo: Localize;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 1;[] execVM 'starterKitC\startFunctionCallForStarterKit.sqf'";
		};
		class CG_cancelButton: RscCGStarterKitButton
		{
			idc = 1601;
			text = "CANCEL"; //--- ToDo: Localize;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 1";
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

	}
}



//createDialog "CG_STARTERKIT";