scriptName "functions_breach_2";

#define __filename "functions_breach_2.sqf"

_ownsDependency = [life_currentExpPerks, "perk_breaching_lessTime_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency) then {
	mav_ttm_var_breachMultiplier = 1.30;
};