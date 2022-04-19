scriptName "functions_Running_Speed_3";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: functions_recoilCompensation_3.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "functions_Running_Speed_3.sqf"

player setAnimSpeedCoef 1.25;

player addEventHandler ["Respawn", {
	player setAnimSpeedCoef 1.25;
}];