_flag = (_this select 0);
_className = (_this select 1);
_maximumTerritoryRadius = getNumber (missionConfigFile >> "CfgTerritories" >> "maximumRadius");
_pads = nearestObjects [_flag, [_className], _maximumTerritoryRadius];
if ((count _pads) > 0) then 
{	
	_pad = _pads select 0;
	[_pad] spawn ExileClient_object_construction_deconstruct;
}else{
	["ErrorTitleAndText", ["Whoops!", "No one object in range!"]] call ExileClient_gui_toaster_addTemplateToast;
};