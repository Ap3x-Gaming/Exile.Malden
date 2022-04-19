scriptName "functions_breach_1";

#define __filename "functions_breach_1.sqf"

_ownsDependency1 = [life_currentExpPerks, "perk_breaching_lessTime_2"] call mav_ttm_fnc_hasPerk;
_ownsDependency2 = [life_currentExpPerks, "perk_breaching_lessTime_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency1 && !_ownsDependency2) then {
	mav_ttm_var_breachMultiplier = 1.25;
};