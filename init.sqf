/*
*   Revive
*/
[] execVM "Custom\EnigmaRevive\init.sqf";

/*
* Claim Vehicle Script
*/
[] execVM "ClaimVehicles_Client\ClaimVehicles_Client_init.sqf";

/*
* Takepoptab for rearm
*/
[] execVM "Custom\rearm\takegive_poptab_init.sqf";

/*
* R3F BoxLoad
*/
[] execVM "R3F_LOG\init.sqf";

/*
* Service point
*/
if(hasInterface) then{
[] execVM "Custom\rearm\service_point.sqf";
};

/*
* Scrap vehicle parts Deploy Vehicle 
*/
fnc_bike_scrap = compileFinal preprocessFileLineNumbers "Custom\RecoverVehicleparts\RecoverVehicleparts.sqf";

/*
* Spawn carrier on map
*/
//[] execVM "Custom\Carrier\spawnCarrier.sqf";

/*
** Base Raiding Lockpicking
*/
[] execVM "addons\HEG_Xbrm_client\Xbrm_config.sqf"; //lockpicking

/*
* lock & unlock vehicle from inside
*/
[] execVM "Custom\Actions\fnc_showActions.sqf";

/*
* Statusbar
*/
[] execVM "Custom\StatusBar\statusBar_init.sqf";
/*
* Compile all the things!! For flag hacking!
*/
{
    _code = "";
    _function = _x select 0;
    _file = _x select 1;
    _code = compileFinal (preprocessFileLineNumbers _file);
    missionNamespace setVariable [_function, _code];
}
forEach
[
    // Server
    ["ExileServer_object_flag_network_hackFlagRequest","Custom\FlagHacking\ServerFiles\ExileServer_object_flag_network_hackFlagRequest.sqf"],
    ["ExileServer_object_flag_network_startFlagHackRequest","Custom\FlagHacking\ServerFiles\ExileServer_object_flag_network_startFlagHackRequest.sqf"],
    ["ExileServer_object_flag_network_updateFlagHackAttemptRequest","Custom\FlagHacking\ServerFiles\ExileServer_object_flag_network_updateFlagHackAttemptRequest.sqf"],
   
    // Client
    ["ExileClient_action_hackFlag_aborted","Custom\FlagHacking\ClientFiles\ExileClient_action_hackFlag_aborted.sqf"],
    ["ExileClient_action_hackFlag_completed","Custom\FlagHacking\ClientFiles\ExileClient_action_hackFlag_completed.sqf"],
    ["ExileClient_action_hackFlag_condition","Custom\FlagHacking\ClientFiles\ExileClient_action_hackFlag_condition.sqf"],
    ["ExileClient_action_hackFlag_duration","Custom\FlagHacking\ClientFiles\ExileClient_action_hackFlag_duration.sqf"],
    ["ExileClient_action_hackFlag_failChance","Custom\FlagHacking\ClientFiles\ExileClient_action_hackFlag_failChance.sqf"],
    ["ExileClient_action_hackFlag_failed","Custom\FlagHacking\ClientFiles\ExileClient_action_hackFlag_failed.sqf"]
]; 

/*
* Player Market By Cyunide
*/

waitUntil {!isNull (findDisplay 46)};
{
    _x params [['_function',''],['_file','']];
    _code = compileFinal (preprocessFileLineNumbers _file);
    missionNamespace setVariable [_function,_code];
} 
forEach
[
   ['ExileClient_system_transport_network_getItemGUIResponse','MarketByCyunide\Functions\ExileClient_system_transport_network_getItemGUIResponse.sqf'],
   ['ExileClient_system_transport_network_listPlayerMarketResponse','MarketByCyunide\Functions\ExileClient_system_transport_network_listPlayerMarketResponse.sqf'],
   ['ExileClient_gui_xm8_slide_cyMachine_onOpen','MarketByCyunide\Functions\onOpen.sqf'],
   ['ExileClient_gui_xm8_slide_cyMachineSell_onOpen','MarketByCyunide\Functions\onSellOpen.sqf']
];

/*
* Monkey's Welcome Toasts
*/
[] execVM "Custom\toast\MWT\monkeyswelcometoasts.sqf";
/*
* PayAnnoucement
*/
//[] execVM "Custom\Annouceterritorypayment\announceterritorypay.sqf";
/*
* disable em in territory
*/
disableEMNearExileConstructionFlag = compile preprocessFile "custom\disableEM\disableEMNearExileConstructionFlag.sqf";
["Exile_Construction_Flag_Static",160] spawn disableEMNearExileConstructionFlag;


[] execVM "Custom\RMT\AddActionsPlayer\init.sqf";//news


private ['_codeGlobal'];
{
	_codeGlobal = compileFinal (preprocessFileLineNumbers (_x select 1));
	missionNamespace setVariable [(_x select 0), _codeGlobal];
}
forEach
[
	["Remeto_util_world_isInWater","Custom\RMT\Remeto_util_world_isInWater.sqf"]
];