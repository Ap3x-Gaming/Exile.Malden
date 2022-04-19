if (isServer) exitWith {}; 

private ['_codeClient'];

{
	_codeClient = compileFinal (preprocessFileLineNumbers (_x select 1));
	missionNamespace setVariable [(_x select 0), _codeClient];
}

forEach
[
	["RMT_PlayerAddActions","Custom\RMT\AddActionsPlayer\Functions\RMT_PlayerAddActions.sqf"]
];

// Create the AddActions Thread..
[1, RMT_PlayerAddActions, [], true] call ExileClient_system_thread_addtask;
