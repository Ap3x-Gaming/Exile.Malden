scriptName "functions_steal_2";

#define __filename "functions_steal_2.sqf"

_ownsDependency = [life_currentExpPerks, "perk_stealing_lessTime_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency) then {
	mav_ttm_var_stealMultiplier = 1.20;
};