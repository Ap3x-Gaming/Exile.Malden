/*
 
 database call to update starter kit value

*/

params [
	["_pid", "", [""]]
];

[_pid] remoteExec ["cgsrv_fnc_updateStarterKitServer", 2];