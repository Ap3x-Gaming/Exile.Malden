scriptName "functions_grind_2";

#define __filename "functions_grind_2.sqf"

_ownsDependency = [life_currentExpPerks, "perk_grinding_lessTime_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency) then {
	mav_ttm_var_grindMultiplier = 1.20;
};