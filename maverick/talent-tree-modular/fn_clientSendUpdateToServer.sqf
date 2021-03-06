scriptName "fn_clientSendUpdateToServer";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: fn_clientSendUpdateToServer.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "fn_clientSendUpdateToServer.sqf"

params [
	["_which", -1, [0]]
];

if (_which isEqualTo -1) exitWith {};

private _toSend = switch (_which) do {
	case 0: {life_currentExpLevel};
	case 1: {life_currentExp};
	case 2: {life_currentPerkPoints};
	case 3: {life_currentExpPerks};
};

diag_log "fn_clientSendUpdateToServer.sqf Sending to server";

["perksUpdateRequest", [[_which, _toSend]]] call ExileClient_system_network_send;
