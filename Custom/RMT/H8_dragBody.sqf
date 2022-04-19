/*
DragBody script REWORKED BY REMETO FOR EXILE

Description
Drag dead bodies out of sight to avoid detection. JIP/MP/SP/Dedicated compatible

CfgRemoteExec.hpp
class H8_fnc_attach { allowedTargets=1; };
class H8_fnc_detach { allowedTargets=1; };
class H8_carAction { allowedTargets=1; };
class H8_carRemoveAction { allowedTargets=1; };

*/

#define H8_DRAGTEXT	"Drag Body"		// AddAction text for drag body
#define H8_DROPTEXT	"Release Body"	// AddAction text for dropping body
#define H8_LOADTEXT	"Load Body"		// AddAction text for dropping body
#define H8_UNLOTEXT	"Unload Body"	// AddAction text for dropping body

H8_DragAction =
{
	_unit = (_this select 0);
	if (isNull attachedTo _unit) then 
	{
		[_unit, vehicle player] remoteExecCall ["H8_fnc_attach", -2];
		_offSet = [0,0,0];
		if !(_unit call Remeto_util_world_isInWater) then
		{
			_offSet = [0,1,0];
			player playAction "grabDrag";
			player forceWalk true;
		};
		_unit attachTo [player,_offSet];
		_dropID= player addAction [H8_DROPTEXT,{call H8_dropAction},_unit,6];
		_hideID =player addAction [H8_LOADTEXT,{call H8_putIncar},_unit,6,false,true,"","_target distance _this < 5 and cursorTarget isKindOf 'LandVehicle'"];
		player setVariable ["H8hideVeh",_hideID];
		player setVariable ["H8dropact",_dropID];
		["SuccessTitleAndText", ["Success!","Body taken."]] call ExileClient_gui_toaster_addTemplateToast;
	}else{
		["ErrorTitleAndText", ["Whoops!","Body is already attached to you."]] call ExileClient_gui_toaster_addTemplateToast;
	};
};

H8_putIncar =
{
	_hideID = (_this select 2);
	_dropID = player getVariable "H8dropact";
	_unit = (_this select 3);
	_vehicle = cursorTarget;
	_loadedBody =_vehicle getVariable "H8loadedBody";
	if (isNil "_loadedBody") then
	{
		player playMove "amovpknlmstpsraswrfldnon";
		player forceWalk false;
		player removeAction _hideID;
		player removeAction _dropID;
		[_unit, vehicle player] remoteExecCall ["H8_fnc_detach", -2];
		sleep 1;
		deTach _unit;
		_unit setPos [-1000,-1000,0];
		_vehicle setVariable ["H8loadedBody",_unit,true];
		[_vehicle] remoteExecCall ["H8_carAction", -2];
	}else{
		["ErrorTitleAndText", ["Whoops!","Vehicle already has a body loaded"]] call ExileClient_gui_toaster_addTemplateToast;
	};
};

H8_carAction =
{
	_vehicle = (_this select 0);
	_vehicle addAction [H8_UNLOTEXT,{call H8_unLoadBody},nil,0,false,true,"","_this distance _target < 5"];
};

H8_carRemoveAction =
{
	_vehicle = (_this select 0);
	_id = (_this select 1);
	_vehicle removeAction _id;
};

H8_unLoadBody =
{
	_vehicle = (_this select 0);
	_player = (_this select 1);
	_id = (_this select 2);
	[_vehicle,_id] remoteExecCall ["H8_carRemoveAction", -2];
	_unit = _vehicle getVariable "H8loadedBody";
	_vehicle setVariable ["H8loadedBody",Nil];
	_pos  = _player modelToWorld [1,0,0];
	_unit setPos _pos;
	_unit switchMove "AinjPpneMstpSnonWrflDb_release";
	["SuccessTitleAndText", ["Success!","Body unloaded."]] call ExileClient_gui_toaster_addTemplateToast;
};

H8_dropAction =
{
	_dropID = (_this select 2);
	_hideID = player getVariable "H8hideVeh";
	_unit	=	(_this select 3);
	[_unit, vehicle player] remoteExecCall ["H8_fnc_detach", -2];
	deTach _unit;
	player removeAction _hideID;
	player removeAction _dropID;
	player playMove "amovpknlmstpsraswrfldnon";
	player forceWalk false;
	["SuccessTitleAndText", ["Success!","Body released."]] call ExileClient_gui_toaster_addTemplateToast;
};

H8_fnc_attach =
{
	_unit 	= 	(_this select 0);
	_player = 	(_this select 1);
	_id = format ["h8EF%1",netId _unit];
	0 = [_id, "onEachFrame", "H8_fnc_moveBody",[_unit,_player]] call BIS_fnc_addStackedEventHandler;
};

H8_fnc_detach =
{
	_unit 	= 	(_this select 0);
	_player = 	(_this select 1);
	_id = format ["h8EF%1",netId _unit];
	_result = [_id, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	systemchat str _result;
	_time = diag_tickTime + 2;
	waituntil {(_result || (diag_tickTime > _time))};
	_relD = [_unit,_player] call BIS_fnc_dirTo;
	_unit switchMove "AinjPpneMstpSnonWrflDb_release";
	_unit setDir _relD;
};

H8_fnc_moveBody =
{
	_unit 	= (_this select 0);
	_player	= (_this select 1);
	_pos  = _player modelToWorld [0,1,0];
	_unit setPos _pos;
	_unit setDir 180;
	_unit switchMove "AinjPpneMrunSnonWnonDb";
};