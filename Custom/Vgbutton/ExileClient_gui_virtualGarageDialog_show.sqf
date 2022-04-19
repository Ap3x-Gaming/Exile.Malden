private["_flag", "_buildRights", "_territoryLevel", "_maxNumberOfVehicles", "_control"];
disableSerialization;
try 
{
    if ((getNumber(missionConfigFile >> 'CfgVirtualGarage' >> 'enableVirtualGarage')) isEqualTo 0) then 
    {
        throw "This server has Virtual Garage disabled! Ask the server owner to enable it!";
    };
    if ((getNumber(missionConfigFile >> "CfgVirtualGarage" >> "canAccessGarageInCombat") isEqualTo 1) && {ExileClientPlayerIsInCombat}) then 
    {
        throw "You cannot access Virtual Garage while in combat!";    
    };
    _flag = player call ExileClient_util_world_getTerritoryAtPosition;
    if (isNull _flag) then 
    {
        throw "You must be in your territory in order to access Virtual Garage";
    };
    _buildRights = _flag getVariable ["ExileTerritoryBuildRights", []];
    if !((getPlayerUID player) in _buildRights) then 
    {
        throw "You do not have permission to access this territory's Virtual Garage";
    };
    _control = ['ExAd_VG', 0] call ExileClient_gui_xm8_slide;
}
catch 
{
    [_exception, 'Okay'] call ExileClient_gui_xm8_showWarning;
};
true 