scriptName "functions_Fishing_Speed_2";

#define __filename "functions_Fishing_Speed_2.sqf"

_ownsDependency3 = [life_currentExpPerks, "perk_fishing_Speed_3"] call mav_ttm_fnc_hasPerk;


if (!_ownsDependency3) then {
	mav_ttm_var_FishingSpeedMultiplier = 0.30;
};