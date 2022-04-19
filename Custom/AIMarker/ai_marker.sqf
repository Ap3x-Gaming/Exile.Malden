// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//	@file Name: drawPlayerMarkers.sqf
//	@file Author: AgentRev
// Edited for Exile


if (!hasInterface) exitWith {};
disableSerialization;

A3W_mapDraw_arrLines = [];
A3W_mapDraw_eventCode =
{
	_mapCtrl = _this select 0;
	{ _mapCtrl drawLine _x } forEach A3W_mapDraw_arrLines;
};

if (!isNil "A3W_mapDraw_thread") then { terminate A3W_mapDraw_thread };
A3W_mapDraw_thread = [] spawn
{
	scriptName "drawPlayerMarkers";
	waitUntil
	{
		_newArrayLines = [];

		{
			if (side _x == east) then
			{
				_markerPos = [0,0,0];
				_markerArr = _x getVariable ["DMS_missionMarker", ""];
				if !(_markerArr isEqualTo "") then {
				_marker = _markerArr select 0;
				_markerPos = markerPos _marker;
				};

				if !(_markerPos isEqualTo [0,0,0]) then
				{
					_vehs = [];

					{
						_veh = vehicle _x;

						if !(_veh in _vehs) then
						{
							if (alive _veh && _veh distance _markerPos > 100) then // Change the Number (default 75) to set the distance from which the AI got marked. Higher = Ai can go further without a marker.
							{
								_newArrayLines pushBack [_markerPos, getPosASLVisual _veh, [1,0,0,1]];
							};

							_vehs pushBack _veh;
						};
					} forEach units _x;
				};
			};
		} forEach allGroups;

		A3W_mapDraw_arrLines = _newArrayLines;
		false
	};
};

// Main map = findDisplay 12 displayCtrl 51
// GPS = (uiNamespace getVariable ["RscCustomInfoMiniMap", displayNull]) displayCtrl 101
// UAV Terminal = findDisplay 160 displayCtrl 51

private ["_display", "_mapCtrl"];

// Main map
waitUntil {_display = findDisplay 12; !isNull _display};
_mapCtrl = _display displayCtrl 51;

if (!isNil "A3W_mapDraw_mainMapEH") then { _mapCtrl ctrlRemoveEventHandler ["Draw", A3W_mapDraw_mainMapEH] };
A3W_mapDraw_mainMapEH = _mapCtrl ctrlAddEventHandler ["Draw", A3W_mapDraw_eventCode];

// GPS
waitUntil {_display = uiNamespace getVariable ["RscCustomInfoMiniMap", displayNull]; !isNull _display};
_mapCtrl = _display displayCtrl 101;

if (!isNil "A3W_mapDraw_gpsMapEH") then { _mapCtrl ctrlRemoveEventHandler ["Draw", A3W_mapDraw_gpsMapEH] };
A3W_mapDraw_gpsMapEH = _mapCtrl ctrlAddEventHandler ["Draw", A3W_mapDraw_eventCode];
