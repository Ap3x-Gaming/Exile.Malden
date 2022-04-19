scriptName "functions_scavenge_1";

#define __filename "functions_scavenge_1.sqf"

_ownsDependency1 = [life_currentExpPerks, "perk_scavengeing_lessTime_2"] call mav_ttm_fnc_hasPerk;
_ownsDependency2 = [life_currentExpPerks, "perk_scavengeing_lessTime_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency1 && !_ownsDependency2) then {
	mav_ttm_var_scavengeMultiplier = 1.20;
};