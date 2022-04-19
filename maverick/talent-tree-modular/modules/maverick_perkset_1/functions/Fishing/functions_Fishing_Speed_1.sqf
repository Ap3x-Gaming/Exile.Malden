scriptName "functions_Fishing_Speed_1";

#define __filename "functions_Fishing_Speed_1.sqf"

_ownsDependency2 = [life_currentExpPerks, "perk_fishing_Speed_2"] call mav_ttm_fnc_hasPerk;
_ownsDependency3 = [life_currentExpPerks, "perk_fishing_Speed_3"] call mav_ttm_fnc_hasPerk;


if (!_ownsDependency2 && !_ownsDependency3) then {
	mav_ttm_var_FishingSpeedMultiplier = 0.20;
};