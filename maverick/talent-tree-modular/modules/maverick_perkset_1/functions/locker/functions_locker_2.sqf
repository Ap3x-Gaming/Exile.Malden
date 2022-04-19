scriptName "functions_locker_2";

#define __filename "functions_locker_2.sqf"

_ownsDependency = [life_currentExpPerks, "perk_locker_lessTime_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency) then {
	mav_ttm_var_lockerMultiplier = 1.5;
};