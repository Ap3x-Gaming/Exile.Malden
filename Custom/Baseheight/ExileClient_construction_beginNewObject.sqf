/**
 * ExileClient_construction_beginNewObject
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_kitClassName", "_previewObjectClassName", "_playerHeight"];
_kitClassName = _this select 0;
ExileClientConstructionConfig = ("getText(_x >> 'kitMagazine') == _kitClassName" configClasses(configFile >> "CfgConstruction")) select 0;
_previewObjectClassName = getText(ExileClientConstructionConfig >> "previewObject");
ExileClientConstructionSnapToObjectClassNames = (ExileClientConstructionConfig >> "SnapObjects") call Bis_fnc_getCfgSubClasses;
ExileClientConstructionProcess = 1;
ExileClientConstructionOffset = [0, 5, 0]; 
ExileClientConstructionPosition = [0, 0, 0];
ExileClientConstructionRotation = 0; 
ExileClientConstructionKitClassName = _kitClassName; 
ExileClientConstructionObjectDisplayName = getText(configFile >> "CfgVehicles" >> _previewObjectClassName >> "displayName");

_playerHeightASL = (getPosASL player) select 2;
_playerHeightATL = (getPosATL player) select 2;
_playerHeight = 0;

if (_playerHeightASL <= _playerHeightATL) then
{
	_playerHeight = _playerHeightASL;
} else
{
	_playerHeight = _playerHeightATL;
};

_playerHeight = (getPosATL player) select 2;
	if (_playerHeight >= 25) exitWith
	{
		deleteVehicle ExileClientConstructionObject;
		["ErrorTitleAndText", ["Construction aborted!", "You are trying to build above the height limit! (25M)"]] call ExileClient_gui_toaster_addTemplateToast;
	};
if (ExileClientPlayerIsInCombat) then
{
	["ErrorTitleAndText", ["Construction aborted!", "You cannot build during a combat."]] call ExileClient_gui_toaster_addTemplateToast;
}
else 
{
	ExileClientConstructionMode = 1;
	ExileClientConstructionIsInSelectSnapObjectMode = true;
	ExileClientConstructionSupportSnapMode = count(ExileClientConstructionSnapToObjectClassNames) > 0;
	ExileClientConstructionCurrentSnapToObject = objNull;
	ExileClientConstructionPosition = [getPosATL player, ExileClientConstructionOffset select 1, getDir player] call ExileClient_util_math_getPositionInDirection;
	ExileClientConstructionPosition set[2, ExileClientConstructionOffset select 2];
	{
		player reveal _x;
	}
	forEach (player nearObjects  ["Exile_Construction_Abstract_Static", 20]); 
	if((count _this) < 2 )then
	{
		["buildConstructionRequest", [_previewObjectClassName,ExileClientConstructionPosition]] call ExileClient_system_network_send;
	}
	else
	{
		["buildTerritoryRequest", [_previewObjectClassName, (ASLtoAGL (ATLtoASL ExileClientConstructionPosition)),_this select 1,_this select 2]] call ExileClient_system_network_send;
	};
};
true