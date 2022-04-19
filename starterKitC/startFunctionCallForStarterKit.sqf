/*
	init sqf
	request to db

*/

systemChat "Starter Kit script initialized";
if !(alive player) exitWith {};

_player = getPlayerUID player;
_co = clientOwner;

[_player,_co] call cg_fnc_initStarterKit;