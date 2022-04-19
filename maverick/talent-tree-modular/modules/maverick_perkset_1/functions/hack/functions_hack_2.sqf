scriptName "functions_hack_2";

#define __filename "functions_hack_2.sqf"

_ownsDependency = [life_currentExpPerks, "perk_hacking_lessTime_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency) then {
	mav_ttm_var_hackMultiplier = 1.20;
};