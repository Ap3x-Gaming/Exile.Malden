/*

 get database result and check the value for 0/1
 value 0 = off, 1 = on

*/

params [
	["_res", 0, [0]],
	["_pid", "", [""]]
];

if !(getPlayerUID player == _pid) exitWith {};

if (_res == 0) then {

	[_pid] call cg_fnc_getClientStarterKit;
	
} else {
	
	["ErrorTitleAndText", ["Error!", format["Starter Kit already owned!"]]] call ExileClient_gui_toaster_addTemplateToast;

};