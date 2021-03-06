/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private["_sessionID", "_paramaters", "_object", "_pincode", "_state", "_objectPinCode", "_type", "_accessDenied", "_accessDenialExpiresAt", "_numberOfFails"];
_sessionID = _this select 0;
_paramaters = _this select 1;
_object = objectFromNetId (_paramaters select 0);
_pincode = _paramaters select 1;
_state = _paramaters select 2;
_objectPinCode = _object getVariable ["ExileAccessCode","000000"];
_type = typeOf _object;
_accessDenied = false;
if (_object getVariable ["ExileAccessDenied", false]) then 
{
	_accessDenialExpiresAt = _object getVariable ["ExileAccessDeniedExpiresAt", 0];
	if (time > _accessDenialExpiresAt) then 
	{
		_object setVariable ["ExileAccessDenied", false];
		_object setVariable ["ExileAccessDeniedExpiresAt", 0];	
	}
	else 
	{
		_accessDenied = true;
	};
};
if (_accessDenied) then 
{
	[_sessionID,"lockResponse",["Access denied!", false, "", "", -1]] call ExileServer_system_network_send_to;
}
else 
{
	private _player = _sessionID call ExileServer_system_session_getPlayerObject;
	private _hasUnlockPermission = [_player, _object] call SM_LockingPlus_hasPermission;
	if ((count _pincode) isEqualTo (count _objectPinCode) || {_hasUnlockPermission})then
	{
		if (_pincode isEqualTo _objectPinCode || {_hasUnlockPermission}) then
		{
			if!(_state)then
			{
				if(isNumber(configFile >> "CfgVehicles" >> _type >> "exileIsLockable"))then
				{
					_object setVariable ["ExileIsLocked",0,true];
				}
				else
				{
					if(local _object)then
					{
						_object lock 0;
					}
					else
					{
						[owner _object,"LockVehicleRequest",[netId _object,false]] call ExileServer_system_network_send_to;
					};
					_object setVariable ["ExileIsLocked",0];
				};
				if (_object isKindOf "Exile_Container_Abstract_Safe") then 
				{
					_object animateSource ['DoorAnimationSource', 1];
				};
				[_sessionID,"lockResponse",["Unlocked!", true , netId _object , _objectPinCode, 0]] call ExileServer_system_network_send_to;
				_object enableRopeAttach true;
			}
			else
			{
				if(isNumber(configFile >> "CfgVehicles" >> _type >> "exileIsLockable"))then
				{
					_object setVariable ["ExileIsLocked",-1,true];
				}
				else
				{
					if(local _object)then
					{
						_object lock 2;
					}
					else
					{
						[owner _object,"LockVehicleRequest",[netId _object,true]] call ExileServer_system_network_send_to;
					};
					_object setVariable ["ExileIsLocked",-1];
				};
				if (_object isKindOf "Exile_Container_Abstract_Safe") then 
				{
					_object animateSource ['DoorAnimationSource', 0];
				};
				[_sessionID,"lockResponse",["Locked!",true, netId _object, _objectPinCode, 2]] call ExileServer_system_network_send_to;
				_object enableRopeAttach false;
			};
			_object setVariable ["ExileLastLockToggleAt", time];
			_object setVariable ["ExileAccessDenied", false];
			_object setVariable ["ExileAccessDeniedExpiresAt", 0];		
			_object call ExileServer_system_vehicleSaveQueue_addVehicle;
		}
		else
		{
			if (_object call ExileClient_util_world_isInTraderZone) then 
			{
				[_sessionID,"lockResponse",["Wrong PIN!", false, "", "", -1]] call ExileServer_system_network_send_to;
			}
			else 
			{
				_numberOfFails = _object getVariable ["ExileNumberOfFailedLocks", 0];
				_numberOfFails = _numberOfFails + 1;
				_object setVariable ["ExileNumberOfFailedLocks", _numberOfFails];
				switch (_numberOfFails) do 
				{
					case 1:
					{
						[_sessionID,"lockResponse",["Wrong PIN! Two tries remaining.", false, "", "", -1]] call ExileServer_system_network_send_to;
					};
					case 2:
					{
						[_sessionID,"lockResponse",["Wrong PIN! One try remaining.", false, "", "", -1]] call ExileServer_system_network_send_to;
					};
					default
					{
						[_sessionID,"lockResponse",["Wrong PIN! Access denied for five minutes.", false, "", "", -1]] call ExileServer_system_network_send_to;
						_object setVariable ["ExileAccessDenied", true];
						_object setVariable ["ExileAccessDeniedExpiresAt", time + (5 * 60)];
					};						
				};
			};
		};
	};
};
true