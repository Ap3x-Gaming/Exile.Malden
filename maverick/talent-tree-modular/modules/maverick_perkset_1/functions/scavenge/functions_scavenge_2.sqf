scriptName "functions_scavenge_2";

#define __filename "functions_scavenge_2.sqf"

_ownsDependency = [life_currentExpPerks, "perk_scavengeing_lessTime_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency) then {
	mav_ttm_var_scavengeMultiplier = 1.30;
};