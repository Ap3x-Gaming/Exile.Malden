scriptName "functions_pick_2";

#define __filename "functions_pick_2.sqf"

_ownsDependency = [life_currentExpPerks, "perk_picking_lessTime_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency) then {
	mav_ttm_var_pickMultiplier = 1.10;
};