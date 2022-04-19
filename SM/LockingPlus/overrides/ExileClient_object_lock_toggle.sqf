/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _condition = _this;
private _object = ExileClientInteractionObject;
if(ExileLockIsShown)exitWith{};
ExileLockIsShown = true;
private _known = _object getVariable ["ExileAlreadyKnownCode",""];
private _pincode = "";
if !([player, _object] call SM_LockingPlus_hasPermission) then
{
	if ((_known isEqualTo "") || ExileClientPlayerIsInCombat) then
	{
		_pincode = 4 call ExileClient_gui_keypadDialog_show;
	}
	else
	{
		_pincode = _known;
	};
}
else
{
	_pincode = "UNLOCK ME PLEASE SENPAI";
};
if!(_pincode isEqualTo "")then
{
	["lockToggle",[netId _object, _pincode, _condition]] call ExileClient_system_network_send;
};
call ExileClient_gui_interactionMenu_unhook;
ExileLockIsShown = false;
true