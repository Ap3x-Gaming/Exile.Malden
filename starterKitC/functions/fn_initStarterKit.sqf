/*
	init sqf
	request to db

*/

params [
	["_pid","",[""]],
	["_co",0,[0]]
];

systemChat "Init script initialized";
systemChat format ["pid :%1 _co :%2", _pid,_co];
if !(alive player) exitWith {};

[_pid,_co] remoteExec ["cgsrv_fnc_requestStarterKitClient",2];