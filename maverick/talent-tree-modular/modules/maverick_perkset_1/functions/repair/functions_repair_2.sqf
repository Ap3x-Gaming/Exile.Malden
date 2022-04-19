scriptName "functions_repair_2";

#define __filename "functions_repair_2.sqf"

_ownsDependency = [life_currentExpPerks, "perk_repairing_lessTime_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency) then {
	mav_ttm_var_repairMultiplier = 1.25;
};