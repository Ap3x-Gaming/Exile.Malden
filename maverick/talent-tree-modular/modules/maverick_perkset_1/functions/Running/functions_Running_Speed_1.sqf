scriptName "functions_Running_Speed_1";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: functions_recoilCompensation_1.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "functions_Running_Speed_1.sqf"

_ownsDependency1 = [life_currentExpPerks, "perk_Running_Speed_2"] call mav_ttm_fnc_hasPerk;
_ownsDependency2 = [life_currentExpPerks, "perk_Running_Speed_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency1 && !_ownsDependency2) then {
	player setAnimSpeedCoef 1.1;

	player addEventHandler ["Respawn", {
		player setAnimSpeedCoef 1.1;
	}];
};
