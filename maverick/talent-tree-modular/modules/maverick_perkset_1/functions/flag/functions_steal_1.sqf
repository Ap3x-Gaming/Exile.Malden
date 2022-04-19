scriptName "functions_steal_1";

#define __filename "functions_steal_1.sqf"

_ownsDependency1 = [life_currentExpPerks, "perk_stealing_lessTime_2"] call mav_ttm_fnc_hasPerk;
_ownsDependency2 = [life_currentExpPerks, "perk_stealing_lessTime_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency1 && !_ownsDependency2) then {
	mav_ttm_var_stealMultiplier = 1.10;
};