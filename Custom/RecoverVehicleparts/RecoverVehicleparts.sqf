///scrap vehicle
/*
if !((vehicle player) isEqualTo player) exitWith {};

if ((typeOf cursorTarget == "V12_YFZ450_NOIR") || 
	( typeOf cursorTarget == "CUP_O_UAZ_Open_CHDKZ") || 
	( typeOf cursorTarget == "RwG_Mozzie_Carl_Orange") || 
	( typeOf cursorTarget == "sab_ultralight") || 
	(typeOf cursorTarget == "sab_boat_5")) then {
    deletevehicle cursorTarget;
    player playMove "AinvPknlMstpSnonWnonDr_medic3";
    player additem "Exile_Item_DuctTape";
    uiSleep 4;
    ["SuccessTitleAndText", ["Scrapped your vehicle!", "You received your Duct Tape in return."]] call ExileClient_gui_toaster_addTemplateToast;
};



if !((vehicle player) isEqualTo player) exitWith {};

if ((typeOf cursorTarget == "V12_YFZ450_NOIR") || 
	( typeOf cursorTarget == "CUP_O_UAZ_Open_CHDKZ") || 
	( typeOf cursorTarget == "I_C_Plane_Civil_01_F") || 
	( typeOf cursorTarget == "sab_ultralight") || 
	( typeOf cursorTarget == "sab_boat_5")) then {
    deletevehicle cursorTarget;
    player playMove "AinvPknlMstpSnonWnonDr_medic3";
    player additem "Exile_Item_DuctTape";
    uiSleep 4;
    ["SuccessTitleAndText", ["Scrapped your vehicle!", "You received your Duct Tape in return."]] call ExileClient_gui_toaster_addTemplateToast;
};
//laatst gebruikt
if !((vehicle player) isEqualTo player) exitWith {};

if ((typeOf cursorTarget == "V12_YFZ450_NOIR") || 
	( typeOf cursorTarget == "CUP_O_UAZ_Open_CHDKZ") || 
	( typeOf cursorTarget == "RwG_Mozzie_Carl_Orange") || 
	( typeOf cursorTarget == "sab_ultralight") || 
	( typeOf cursorTarget == "sab_boat_5")) then {
	    _obj = cursorTarget;
        if (player distance _obj <= 15) then {
        disableUserInput true;
        player playActionNow "Medic";
        uiSleep 3;
        deletevehicle _obj;
        uiSleep 1;
        player additem "Exile_Item_DuctTape";
        ["SuccessTitleAndText", ["Scrapped your vehicle!", "You received your Duct Tape in return."]] call ExileClient_gui_toaster_addTemplateToast;
        disableUserInput false;
    };
};
*/
if !((vehicle player) isEqualTo player) exitWith {};

if ((typeOf cursorTarget == "CUP_O_UAZ_Open_RU")) then {
	    _obj = cursorTarget;
        if (player distance _obj <= 15) then {
        disableUserInput true;
        player playActionNow "Medic";
        uiSleep 3;
        deletevehicle _obj;
        uiSleep 1;
        player additem "Exile_Item_DuctTape";
        ["SuccessTitleAndText", ["Scrapped your UAZ!", "You received your Duct Tape in return."]] call ExileClient_gui_toaster_addTemplateToast;
        disableUserInput false;
    };
};

if !((vehicle player) isEqualTo player) exitWith {};

if ((typeOf cursorTarget == "Lada_Civ_04")) then {
	    _obj = cursorTarget;
        if (player distance _obj <= 15) then {
        disableUserInput true;
        player playActionNow "Medic";
        uiSleep 3;
        deletevehicle _obj;
        uiSleep 1;
        player additem "Exile_Item_DuctTape";
        ["SuccessTitleAndText", ["Scrapped your Lada!", "You received your DuctTape in return."]] call ExileClient_gui_toaster_addTemplateToast;
        disableUserInput false;
    };
};

if !((vehicle player) isEqualTo player) exitWith {};

if ((typeOf cursorTarget == "RwG_Mozzie_Carl_Orange")) then {
	    _obj = cursorTarget;
        if (player distance _obj <= 15) then {
        disableUserInput true;
        player playActionNow "Medic";
        uiSleep 3;
        deletevehicle _obj;
        uiSleep 1;
        player additem "DDR_Item_Main_Rotor";
		player additem "DDR_Item_Engine";
        ["SuccessTitleAndText", ["Scrapped your Mozzie!", "You received your Main Rotor & Engine in return."]] call ExileClient_gui_toaster_addTemplateToast;
        disableUserInput false;
    };
};

if !((vehicle player) isEqualTo player) exitWith {};

if ((typeOf cursorTarget == "sab_ultralight")) then {
	    _obj = cursorTarget;
        if (player distance _obj <= 15) then {
        disableUserInput true;
        player playActionNow "Medic";
        uiSleep 3;
        deletevehicle _obj;
        uiSleep 1;
        player additem "Exile_Item_DuctTape";
        ["SuccessTitleAndText", ["Scrapped your ultralight!", "You received your DuctTape in return."]] call ExileClient_gui_toaster_addTemplateToast;
        disableUserInput false;
    };
};

if !((vehicle player) isEqualTo player) exitWith {};

if ((typeOf cursorTarget == "Exile_Boat_WaterScooter")) then {
	    _obj = cursorTarget;
        if (player distance _obj <= 15) then {
        disableUserInput true;
        player playActionNow "Medic";
        uiSleep 3;
        deletevehicle _obj;
        uiSleep 1;
        player additem "Exile_Item_DuctTape";
        ["SuccessTitleAndText", ["Scrapped your WaterScooter!", "You received your DuckTape in return."]] call ExileClient_gui_toaster_addTemplateToast;
        disableUserInput false;
    };
};