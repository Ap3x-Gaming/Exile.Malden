scriptName "functions_pick_1";

#define __filename "functions_pick_1.sqf"

_ownsDependency1 = [life_currentExpPerks, "perk_picking_lessTime_2"] call mav_ttm_fnc_hasPerk;
_ownsDependency2 = [life_currentExpPerks, "perk_picking_lessTime_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency1 && !_ownsDependency2) then {
	mav_ttm_var_pickMultiplier = 1.05;
};