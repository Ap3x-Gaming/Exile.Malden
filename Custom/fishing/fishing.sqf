/*
 Basic fishing script for exile by JackFrost, modify by Serveratze [Fishing Boat]
*/

if (isNil {alreadyFishing}) then  {
	alreadyFishing = 0;
};

if (alreadyFishing == 1) exitWith 
{
	[
	    "ErrorTitleAndText",
	    ["Fishing Info", "You're already fishing!"]
	] call ExileClient_gui_toaster_addTemplateToast;	
};

alreadyFishing = 1;

timeFishing = 7;

diag_log format['A Player starting fishing'];

private["_fisharray"];

if (ExileClientPlayerIsInCombat) exitWith
{
	[
	    "ErrorTitleAndText", 
	    ["Fishing Info", "You're in combat Bitch!"]
	] call ExileClient_gui_toaster_addTemplateToast;
		alreadyFishing = 0
};
if (ExilePlayerInSafezone) exitWith
{
 	[
	    "ErrorTitleAndText", 
	    ["Fishing Info", "You can not fish in the safezone pussy!"]
	] call ExileClient_gui_toaster_addTemplateToast;
		alreadyFishing = 0
};
if (speed vehicle player >= 25) exitwith
{ 
    [
	    "ErrorTitleAndText",
	    ["Fishing Info", "Slow down mate you can not fish at this speed!"]
	] call ExileClient_gui_toaster_addTemplateToast;
		alreadyFishing = 0
};
if (speed vehicle player <= -25) exitwith
{ 
    [
	    "ErrorTitleAndText",
		["Fishing Info", "Slow down mate you can not fish at this speed!"]
	] call ExileClient_gui_toaster_addTemplateToast;
		alreadyFishing = 0
};
if !("DDR_Item_Fishing_Net" in magazines player) exitwith
{ 
    [
	    "ErrorTitleAndText",
		["Fishing Info", "Buy a fishnet at the scuba or hardware trader!"]
    ] call ExileClient_gui_toaster_addTemplateToast;
		alreadyFishing = 0
};
if !(vehicle player isKindOf "Ship") exitwith
{ 
    [
	    "ErrorTitleAndText",
	    ["Fishing Info", "You must be captain of a ship! GET ON YOUR SHIP CAPTAIN!"]
	] call ExileClient_gui_toaster_addTemplateToast;
		alreadyFishing = 0
};
if (abs (getTerrainHeightASL getPos player) <= 10) exitwith 
{ 
    [
	    "ErrorTitleAndText",
		["Fishing Info", "Go to deep water there is no fish here!!"]
	] call ExileClient_gui_toaster_addTemplateToast;
		alreadyFishing = 0
}; 
if ("DDR_Item_Fishing_Net" in magazines player) then {
 
		["Casting Fishing Net"] spawn ExileClient_gui_baguette_show;
        playsound "net";
	while
		{	
			timeFishing > 0 && speed vehicle player <= 25 && speed vehicle player >= -25
		}
		do
			{
				timeFishing = timeFishing-1;
				sleep 1;
			
				if (timeFishing == 0)then
					{
						completed = 1;
					}
				else
					{
						completed = 0};
			};
		
	if (completed == 1) then
		{	
			fishingChance = random 1;
				
			if (fishingChance > 0.85) then
				{
					_fisharray =[
	                    "DDR_Item_CatShark",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Stones",
	                    "DDR_Item_Mullet",
	                    "DDR_Item_Mullet",
	                    "DDR_Item_Silver_Bar",
	                    "DDR_Item_Mullet",
	                    "DDR_Item_Silver_Ore",
	                    "DDR_Item_Gold_Ore",
	                    "Exile_Item_JunkMetal",
	                    "Exile_Item_JunkMetal",
	                    "Exile_Item_JunkMetal",
	                    "DDR_Item_Gold_Bar",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Turtle",
	                    "DDR_Item_Stones",
	                    "DDR_Item_Mullet",
	                    "DDR_Item_Mullet",
	                    "DDR_Item_Silver_Bar",
	                    "DDR_Item_Mullet",
	                    "DDR_Item_Silver_Ore",
	                    "DDR_Item_Gold_Ore",
	                    "Exile_Item_JunkMetal",
	                    "DDR_Item_Gold_Bar",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Tunaa",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Tunaa",
	                    "DDR_Item_Ornate",
	                    "DDR_Item_Ornate",
	                    "DDR_Item_Ornate",
	                    "DDR_Item_Tunaa",
	                    "DDR_Item_Turtle",
	                    "DDR_Item_Skull",
	                    "DDR_Item_Salt_Shaker"
						] call BIS_fnc_selectRandom;
					_fisharray_1 =[
	                    "DDR_Item_CatShark",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Stones",
	                    "DDR_Item_Mullet",
	                    "DDR_Item_Mullet",
	                    "DDR_Item_Silver_Bar",
	                    "DDR_Item_Mullet",
	                    "DDR_Item_Silver_Ore",
	                    "DDR_Item_Gold_Ore",
	                    "Exile_Item_JunkMetal",
	                    "Exile_Item_JunkMetal",
	                    "Exile_Item_JunkMetal",
	                    "DDR_Item_Gold_Bar",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Turtle",
	                    "DDR_Item_Stones",
	                    "DDR_Item_Mullet",
	                    "DDR_Item_Mullet",
	                    "DDR_Item_Silver_Bar",
	                    "DDR_Item_Mullet",
	                    "DDR_Item_Silver_Ore",
	                    "DDR_Item_Gold_Ore",
	                    "Exile_Item_JunkMetal",
	                    "DDR_Item_Gold_Bar",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Tunaa",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Mackerel",
	                    "DDR_Item_Tunaa",
	                    "DDR_Item_Ornate",
	                    "DDR_Item_Ornate",
	                    "DDR_Item_Ornate",
	                    "DDR_Item_Tunaa",
	                    "DDR_Item_Turtle",
	                    "DDR_Item_Skull",
	                    "DDR_Item_Salt_Shaker",
	                    "DDR_Item_Salt_Shaker"
						] call BIS_fnc_selectRandom;
					["That's how you catch some stuff!"] spawn ExileClient_gui_baguette_show;
						playsound "fish";
						player addItem _fisharray;
						player addItem _fisharray_1;
				}
			else			
				{
					["You did not catch any fish!!!"] spawn ExileClient_gui_baguette_show;
				};
			
			if (random 1 > 0.98) then
				{
					player removeItem "DDR_Item_Fishing_Net";
					[
					"InfoTitleAndText",
					["Fishing Info", "Your fishnet got STUCK. Get a new one!"]
					] call ExileClient_gui_toaster_addTemplateToast;
						alreadyFishing = 0
				};
		}
		else
		{
		    ["ErrorTitleAndText",["Fishing Info", "DO NOT MOVE!! you've scared the fish.."]] call ExileClient_gui_toaster_addTemplateToast;
			alreadyFishing = 0
		}
};

alreadyFishing = 0;