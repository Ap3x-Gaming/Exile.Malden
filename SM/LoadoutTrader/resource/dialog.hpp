class SM_LoadoutTrader
{
	idd = 420612;
	onLoad = "uiNamespace setVariable [""SM_LoadoutTrader"", _this select 0];";
	onUnload = "uiNamespace setVariable [""SM_LoadoutTrader"", displayNull];";
	class controlsBackground
	{
		class DialogCaptionLeft: SM_LoadoutTrader_RscText
		{
			idc = 4000;
			text = "CURRENT LOADOUT";
			x = 0.05;
			y = 0;
			w = 0.4375;
			h = 0.04;
			colorBackground[] = {0.1,0.1,0.1,1};
		};	
		class DialogBackgroundLeft: SM_LoadoutTrader_RscText
		{
			idc = 2000;
			x = 0.05;
			y = 0.04;
			w = 0.4375;
			h = 0.96;
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogBackgroundMiddle: SM_LoadoutTrader_RscText
		{
			idc = 2001;
			x = 0.5125;
			y = 0.04;
			w = 0.4375;
			h = 0.96;
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCaptionMiddle: SM_LoadoutTrader_RscText
		{
			idc = 4001;
			text = "SAVED LOADOUTS";
			x = 0.5125;
			y = 0;
			w = 0.4375;
			h = 0.04;
			colorBackground[] = {0.1,0.1,0.1,1};
		};	
	};
	class controls
	{
		class InventoryListBox: SM_LoadoutTrader_ExileItemListBox
		{
			idc = 4005;
			x = 0.0625;
			y = 0.06;
			w = 0.4125;
			h = 0.78;
			colorBackground[] = {1,1,1,0.1};
		};
		class SaveLoadout: SM_LoadoutTrader_RscButton
		{
			idc = 4007;
			action = "[] call SM_LoadoutTrader_onSaveLoadoutButtonClick;";
			text = "SAVE LOADOUT";
			x = 0.0625;
			y = 0.94;
			w = 0.4125;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class LoadoutsListBox: SM_LoadoutTrader_ExileItemListBox
		{
			idc = 4009;
			x = 0.525;
			y = 0.06;
			w = 0.4125;
			h = 0.78;
			colorBackground[] = {1,1,1,0.1};
		};
		class PurchaseButton: SM_LoadoutTrader_RscButton
		{
			idc = 4010;
			action = "[] call SM_LoadoutTrader_onPurchaseLoadoutButtonClick;";
			text = "PURCHASE LOADOUT";
			x = 0.525;
			y = 0.94;
			w = 0.2;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class LoadoutName: SM_LoadoutTrader_RscEdit
		{
			text = "Loadout Name";
			idc = 1400;
			x = 0.0625;
			y = 0.86;
			w = 0.4125;
			h = 0.06;
		};
		class DeleteLoadout: SM_LoadoutTrader_RscButton
		{
			idc = 4011;
			action = "[] call SM_LoadoutTrader_onDeleteLoadoutButtonClick";
			text = "DELETE";
			x = 0.7375;
			y = 0.94;
			w = 0.2;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class InventoryButton: SM_LoadoutTrader_RscButton
		{
			idc = 4006;
			action = "[] call SM_LoadoutTrader_onOldInventoryButtonClick;";
			text = "OLD INVENTORY";
			x = 0.525;
			y = 0.86;
			w = 0.4125;
			h = 0.06;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
	};
};