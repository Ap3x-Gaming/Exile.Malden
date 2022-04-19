/**
 * ExileServer_object_player_createBambi
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_sessionID","_requestingPlayer","_spawnLocationMarkerName","_bambiPlayer","_accountData","_direction","_position","_spawnAreaPosition","_spawnAreaRadius","_clanID","_clanData","_clanGroup","_player","_devFriendlyMode","_devs","_parachuteNetID","_spawnType","_parachuteObject"];
_sessionID = _this select 0;
_requestingPlayer = _this select 1;
_spawnLocationMarkerName = _this select 2;
_bambiPlayer = _this select 3;
_accountData = _this select 4;
_direction = random 360;
_Respect = (_accountData select 0);
if ((count ExileSpawnZoneMarkerPositions) isEqualTo 0) then 
{
    _position = call ExileClient_util_world_findCoastPosition;
    if ((toLower worldName) isEqualTo "namalsk") then 
    {
        while {(_position distance2D [76.4239, 107.141, 0]) < 100} do 
        {
            _position = call ExileClient_util_world_findCoastPosition;
        };
    };
}
else 
{
    _spawnAreaPosition = getMarkerPos _spawnLocationMarkerName;
    _spawnAreaRadius = getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "spawnZoneRadius");
    _position = [_spawnAreaPosition, _spawnAreaRadius] call ExileClient_util_math_getRandomPositionInCircle;
    while {surfaceIsWater _position} do 
    {
        _position = [_spawnAreaPosition, _spawnAreaRadius] call ExileClient_util_math_getRandomPositionInCircle;
    };
};

_name = name _requestingPlayer;
_clanID = (_accountData select 3);
if !((typeName _clanID) isEqualTo "SCALAR") then
{
    _clanID = -1;
    _clanData = [];
}
else
{
    _clanData = missionNamespace getVariable [format ["ExileServer_clan_%1",_clanID],[]];
    if(isNull (_clanData select 5))then
    {
        _clanGroup = createGroup independent;
        _clanData set [5,_clanGroup];
        _clanGroup setGroupIdGlobal [_clanData select 0];
        missionNameSpace setVariable [format ["ExileServer_clan_%1",_clanID],_clanData];
    }
    else
    {
        _clanGroup = (_clanData select 5);
    };
    [_player] joinSilent _clanGroup;
};
_bambiPlayer setPosATL [_position select 0,_position select 1,0];
_bambiPlayer disableAI "FSM";
_bambiPlayer disableAI "MOVE";
_bambiPlayer disableAI "AUTOTARGET";
_bambiPlayer disableAI "TARGET";
_bambiPlayer disableAI "CHECKVISIBLE";
_bambiPlayer setDir _direction;
_bambiPlayer setName _name;
_bambiPlayer setVariable ["ExileMoney", 0, true]; 
_bambiPlayer setVariable ["ExileScore", (_accountData select 0)];
_bambiPlayer setVariable ["ExileKills", (_accountData select 1)];
_bambiPlayer setVariable ["ExileDeaths", (_accountData select 2)];
_bambiPlayer setVariable ["ExileClanID", _clanID];
_bambiPlayer setVariable ["ExileClanData", _clanData];
_bambiPlayer setVariable ["ExileHunger", 100];
_bambiPlayer setVariable ["ExileThirst", 100];
_bambiPlayer setVariable ["ExileTemperature", 37];
_bambiPlayer setVariable ["ExileWetness", 0];
_bambiPlayer setVariable ["ExileAlcohol", 0]; 
_bambiPlayer setVariable ["ExileName", _name]; 
_bambiPlayer setVariable ["ExileOwnerUID", getPlayerUID _requestingPlayer]; 
_bambiPlayer setVariable ["ExileIsBambi", true];
_bambiPlayer setVariable ["ExileXM8IsOnline", false, true];
_bambiPlayer setVariable ["ExileLocker", (_accountData select 4), true];
_devFriendlyMode = getNumber (configFile >> "CfgSettings" >> "ServerSettings" >> "devFriendyMode");
if (_devFriendlyMode isEqualTo 1) then 
{
    _devs = getArray (configFile >> "CfgSettings" >> "ServerSettings" >> "devs");
    {
        if ((getPlayerUID _requestingPlayer) isEqualTo (_x select 0))exitWith 
        {
            if((name _requestingPlayer) isEqualTo (_x select 1))then
            {
                _bambiPlayer setVariable ["ExileMoney", 50000, true];
                _bambiPlayer setVariable ["ExileScore", 25000];
            };
        };
    }
    forEach _devs;
};
_parachuteNetID = "";

_thugToCheck = _sessionID call ExileServer_system_session_getPlayerObject;
_HaloSpawnCheck = _thugToCheck getVariable ["playerWantsHaloSpawn", 0];

if (_HaloSpawnCheck isEqualTo 1) then
{
    _position set [2, getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "parachuteDropHeight")]; 
    if ((getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "haloJump")) isEqualTo 1) then
    {
        _bambiPlayer addBackpackGlobal "B_Parachute";
        _bambiPlayer setPosATL _position;
        _spawnType = 2;
    }
    else 
    {
        _parachuteObject = createVehicle ["Steerable_Parachute_F", _position, [], 0, "CAN_COLLIDE"];
        _parachuteObject setDir _direction;
        _parachuteObject setPosATL _position;
        _parachuteObject enableSimulationGlobal true;
        _parachuteNetID = netId _parachuteObject;
        _spawnType = 1;
    };
}
else
{
    _spawnType = 0;
};

switch (true) do 
{
   case (_Respect > 0 && _Respect < 250000):
   //Bambi
     {
     _bambiPlayer forceAddUniform "TRYK_U_B_PCUGs_gry";
     _bambiplayer addBackpack "B_Parachute";
     _bambiplayer addVest "V_BandollierB_blk";
     _bambiplayer addItem "Exile_Item_PlasticBottleCoffee";
     _bambiplayer addItem "Exile_Item_Vishpirin";
     _bambiplayer addItem "Exile_Item_DuctTape";
     _bambiplayer addItem "Exile_Item_EMRE";
     _bambiplayer addItem "SmokeShellOrange";
     _bambiplayer addItem "muzzle_snds_acp";
	 _bambiplayer addItem "acc_flashlight_pistol";
	 _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiPlayer addWeaponGlobal "hgun_ACPC2_F";
     _bambiplayer addHeadGear "H_MilCap_gry";
     _bambiPlayer addWeapon "TRYK_Shemagh_shade_N";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiPlayer addWeapon "CUP_arifle_M4A1_black";
     
      };
   
   case (_Respect > 249999 && _Respect < 500000):
   //Bambi Plus
    {
     _bambiPlayer forceAddUniform "TRYK_U_B_AOR2_GRY_R_CombatUniform";
     _bambiplayer addBackpack "B_Parachute";
     _bambiplayer addVest "V_BandollierB_blk";
     _bambiplayer addItem "Exile_Item_PlasticBottleCoffee";
     _bambiplayer addItem "Exile_Item_Vishpirin";
     _bambiplayer addItem "Exile_Item_DuctTape";
     _bambiplayer addItem "Exile_Item_EMRE";
     _bambiplayer addItem "SmokeShellOrange";
     _bambiplayer addItem "muzzle_snds_acp";
	 _bambiplayer addItem "acc_flashlight_pistol";
	 _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiPlayer addWeaponGlobal "hgun_ACPC2_F";
     _bambiplayer addHeadGear "H_MilCap_gry";
     _bambiPlayer addWeapon "TRYK_Shemagh_shade_N";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiPlayer addWeapon "CUP_arifle_M4A1_black";
    };
 
    case (_Respect > 499999 && _Respect < 750000):
    //Super Bambi
    {
     _bambiPlayer forceAddUniform "CUP_U_B_BAF_MTP_UBACSLONG";
     _bambiplayer addBackpack "B_Parachute";
     _bambiplayer addVest "V_BandollierB_blk";
     _bambiplayer addItem "Exile_Item_PlasticBottleCoffee";
     _bambiplayer addItem "Exile_Item_Vishpirin";
     _bambiplayer addItem "Exile_Item_DuctTape";
     _bambiplayer addItem "Exile_Item_EMRE";
     _bambiplayer addItem "SmokeShellOrange";
     _bambiplayer addItem "muzzle_snds_acp";
	 _bambiplayer addItem "acc_flashlight_pistol";
	 _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiPlayer addWeaponGlobal "hgun_ACPC2_F";
     _bambiplayer addHeadGear "H_MilCap_gry";
     _bambiPlayer addWeapon "TRYK_Shemagh_shade_N";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiPlayer addWeapon "CUP_arifle_M4A1_black";
    };
 
    case (_Respect > 749900 && _Respect < 1000000):
    //Definetly Not a Bambi
    {
     _bambiPlayer forceAddUniform "U_I_GhillieSuit";
     _bambiplayer addBackpack "B_Parachute";
     _bambiplayer addVest "V_BandollierB_blk";
     _bambiplayer addItem "Exile_Item_PlasticBottleCoffee";
     _bambiplayer addItem "Exile_Item_Vishpirin";
     _bambiplayer addItem "Exile_Item_DuctTape";
     _bambiplayer addItem "Exile_Item_EMRE";
     _bambiplayer addItem "SmokeShellOrange";
     _bambiplayer addItem "muzzle_snds_acp";
	 _bambiplayer addItem "acc_flashlight_pistol";
	 _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiPlayer addWeaponGlobal "hgun_ACPC2_F";
     _bambiplayer addHeadGear "H_MilCap_gry";
     _bambiPlayer addWeapon "TRYK_Shemagh_shade_N";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiPlayer addWeapon "CUP_arifle_M4A1_black";
    };
 
    case (_Respect > 999999 && _Respect < 1250000):
    //Woodman
    {
     _bambiPlayer forceAddUniform "U_I_GhillieSuit";
     _bambiplayer addBackpack "B_Parachute";
     _bambiplayer addVest "V_BandollierB_blk";
     _bambiplayer addItem "Exile_Item_PlasticBottleCoffee";
     _bambiplayer addItem "Exile_Item_Vishpirin";
     _bambiplayer addItem "Exile_Item_DuctTape";
     _bambiplayer addItem "Exile_Item_EMRE";
     _bambiplayer addItem "SmokeShellOrange";
     _bambiplayer addItem "optic_Aco";
	 _bambiplayer addItem "acc_flashlight_pistol";
	 _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiPlayer addWeaponGlobal "hgun_ACPC2_F";
     _bambiplayer addHeadGear "H_MilCap_gry";
     _bambiPlayer addWeapon "TRYK_Shemagh_shade_N";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiPlayer addWeapon "CUP_arifle_M4A1_black";
    };
    case (_Respect > 1249999 && _Respect < 1500000):
    //Robber
    {
     _bambiPlayer forceAddUniform "U_I_GhillieSuit";
     _bambiplayer addBackpack "B_Parachute";
     _bambiplayer addVest "V_BandollierB_blk";
     _bambiplayer addItem "Exile_Item_PlasticBottleCoffee";
     _bambiplayer addItem "Exile_Item_Vishpirin";
     _bambiplayer addItem "Exile_Item_DuctTape";
     _bambiplayer addItem "Exile_Item_EMRE";
     _bambiplayer addItem "SmokeShellOrange";
     _bambiplayer addItem "muzzle_snds_acp";
	 _bambiplayer addItem "muzzle_snds_acp";
	 _bambiplayer addItem "acc_flashlight_pistol";
	 _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiPlayer addWeaponGlobal "hgun_ACPC2_F";
     _bambiplayer addHeadGear "H_MilCap_gry";
     _bambiPlayer addWeapon "TRYK_Shemagh_shade_N";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiPlayer addWeapon "CUP_arifle_M4A1_black";
    };
    case (_Respect > 1499999 && _Respect < 2000000):
    //Hunter
    {
     _bambiPlayer forceAddUniform "U_I_GhillieSuit";
     _bambiplayer addBackpack "B_Parachute";
     _bambiplayer addVest "V_BandollierB_blk";
     _bambiplayer addItem "Exile_Item_PlasticBottleCoffee";
     _bambiplayer addItem "Exile_Item_Vishpirin";
     _bambiplayer addItem "Exile_Item_DuctTape";
     _bambiplayer addItem "Exile_Item_EMRE";
     _bambiplayer addItem "SmokeShellOrange";
     _bambiplayer addItem "muzzle_snds_acp";
	 _bambiplayer addItem "acc_flashlight_pistol";
	 _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiplayer addItem "optic_Aco";
     _bambiPlayer addWeaponGlobal "hgun_ACPC2_F";
     _bambiplayer addHeadGear "H_MilCap_gry";
     _bambiPlayer addWeapon "TRYK_Shemagh_shade_N";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiPlayer addWeapon "CUP_arifle_M4A1_black";
    };
    case (_Respect > 1999999 && _Respect < 2500000):
    //Worker
    {
     _bambiPlayer forceAddUniform "U_I_GhillieSuit";
     _bambiplayer addBackpack "B_Parachute";
     _bambiplayer addVest "V_BandollierB_blk";
     _bambiplayer addItem "Exile_Item_PlasticBottleCoffee";
     _bambiplayer addItem "Exile_Item_Vishpirin";
     _bambiplayer addItem "Exile_Item_DuctTape";
     _bambiplayer addItem "Exile_Item_EMRE";
     _bambiplayer addItem "SmokeShellOrange";
     _bambiplayer addItem "muzzle_snds_acp";
     _bambiplayer addItem "optic_Aco";
	 _bambiplayer addItem "acc_flashlight_pistol";
	 _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiPlayer addWeaponGlobal "hgun_ACPC2_F";
     _bambiplayer addHeadGear "H_MilCap_gry";
     _bambiPlayer addWeapon "TRYK_Shemagh_shade_N";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiPlayer addWeapon "CUP_arifle_M4A1_black";
    };
    case (_Respect > 2499999 && _Respect < 3000000):
    //Murderer
    {
     _bambiPlayer forceAddUniform "U_I_GhillieSuit";
     _bambiplayer addBackpack "B_Parachute";
     _bambiplayer addVest "V_BandollierB_blk";
     _bambiplayer addItem "Exile_Item_PlasticBottleCoffee";
     _bambiplayer addItem "Exile_Item_Vishpirin";
     _bambiplayer addItem "Exile_Item_DuctTape";
     _bambiplayer addItem "Exile_Item_EMRE";
     _bambiplayer addItem "SmokeShellOrange";
     _bambiplayer addItem "muzzle_snds_acp";
     _bambiplayer addItem "optic_Aco";
	 _bambiplayer addItem "acc_flashlight_pistol";
	 _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiPlayer addWeaponGlobal "hgun_ACPC2_F";
     _bambiplayer addHeadGear "H_MilCap_gry";
     _bambiPlayer addWeapon "TRYK_Shemagh_shade_N";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiPlayer addWeapon "CUP_arifle_M4A1_black";
    };
    case (_Respect > 2999999 && _Respect < 4000000):
    //Prisoner
    {
     _bambiPlayer forceAddUniform "U_I_GhillieSuit";
     _bambiplayer addBackpack "B_Parachute";
     _bambiplayer addVest "V_BandollierB_blk";
     _bambiplayer addItem "Exile_Item_PlasticBottleCoffee";
     _bambiplayer addItem "Exile_Item_Vishpirin";
     _bambiplayer addItem "Exile_Item_DuctTape";
     _bambiplayer addItem "Exile_Item_EMRE";
     _bambiplayer addItem "SmokeShellOrange";
     _bambiplayer addItem "muzzle_snds_acp";
     _bambiplayer addItem "optic_Aco";
	 _bambiplayer addItem "acc_flashlight_pistol";
	 _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiPlayer addWeaponGlobal "hgun_ACPC2_F";
     _bambiplayer addHeadGear "H_MilCap_gry";
     _bambiPlayer addWeapon "TRYK_Shemagh_shade_N";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiPlayer addWeapon "CUP_arifle_M4A1_black";
    };
    case (_Respect > 3999999 && _Respect < 5000000):
    //Prisoner
    {
     _bambiPlayer forceAddUniform "U_I_GhillieSuit";
     _bambiplayer addBackpack "B_Parachute";
     _bambiplayer addVest "V_BandollierB_blk";
     _bambiplayer addItem "Exile_Item_PlasticBottleCoffee";
     _bambiplayer addItem "Exile_Item_Vishpirin";
     _bambiplayer addItem "Exile_Item_DuctTape";
     _bambiplayer addItem "Exile_Item_EMRE";
     _bambiplayer addItem "SmokeShellOrange";
     _bambiplayer addItem "muzzle_snds_acp";
     _bambiplayer addItem "optic_Aco";
	 _bambiplayer addItem "acc_flashlight_pistol";
	 _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiPlayer addWeaponGlobal "hgun_ACPC2_F";
     _bambiplayer addHeadGear "H_MilCap_gry";
     _bambiPlayer addWeapon "TRYK_Shemagh_shade_N";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiPlayer addWeapon "CUP_arifle_M4A1_black";
    };
    case (_Respect > 4999999 && _Respect < 6000000):
    //KUT AK
    //Prisoner
    {
     _bambiPlayer forceAddUniform "U_I_GhillieSuit";
     _bambiplayer addBackpack "B_Parachute";
     _bambiplayer addVest "V_BandollierB_blk";
     _bambiplayer addItem "Exile_Item_PlasticBottleCoffee";
     _bambiplayer addItem "Exile_Item_Vishpirin";
     _bambiplayer addItem "Exile_Item_DuctTape";
     _bambiplayer addItem "Exile_Item_EMRE";
     _bambiplayer addItem "SmokeShellOrange";
     _bambiplayer addItem "muzzle_snds_acp";
     _bambiplayer addItem "optic_DMS";
	 _bambiplayer addItem "acc_flashlight_pistol";
	 _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiPlayer addWeaponGlobal "hgun_ACPC2_F";
     _bambiplayer addHeadGear "H_MilCap_gry";
     _bambiPlayer addWeapon "TRYK_Shemagh_shade_N";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiPlayer addWeapon "CUP_arifle_M4A1_black";
    };
    case (_Respect > 5999999 && _Respect < 7500000):
    //Prisoner
    {
     _bambiPlayer forceAddUniform "U_I_GhillieSuit";
     _bambiplayer addBackpack "B_Parachute";
     _bambiplayer addVest "V_BandollierB_blk";
     _bambiplayer addItem "Exile_Item_PlasticBottleCoffee";
     _bambiplayer addItem "Exile_Item_Vishpirin";
     _bambiplayer addItem "Exile_Item_DuctTape";
     _bambiplayer addItem "Exile_Item_EMRE";
     _bambiplayer addItem "SmokeShellOrange";
     _bambiplayer addItem "muzzle_snds_acp";
     _bambiplayer addItem "optic_DMS";
	 _bambiplayer addItem "acc_flashlight_pistol";
	 _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiPlayer addWeaponGlobal "hgun_ACPC2_F";
     _bambiplayer addHeadGear "H_MilCap_gry";
     _bambiPlayer addWeapon "TRYK_Shemagh_shade_N";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiPlayer addWeapon "CUP_arifle_M4A1_black";
    };
    case (_Respect > 7499999 && _Respect < 10000000):
    //Prisoner
    {
     _bambiPlayer forceAddUniform "U_I_GhillieSuit";
     _bambiplayer addBackpack "B_Parachute";
     _bambiplayer addVest "V_BandollierB_blk";
     _bambiplayer addItem "Exile_Item_PlasticBottleCoffee";
     _bambiplayer addItem "Exile_Item_Vishpirin";
     _bambiplayer addItem "Exile_Item_DuctTape";
     _bambiplayer addItem "Exile_Item_EMRE";
     _bambiplayer addItem "SmokeShellOrange";
     _bambiplayer addItem "muzzle_snds_acp";
     _bambiplayer addItem "optic_DMS";
	 _bambiplayer addItem "acc_flashlight_pistol";
	 _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiPlayer addWeaponGlobal "hgun_ACPC2_F";
     _bambiplayer addHeadGear "H_MilCap_gry";
     _bambiPlayer addWeapon "TRYK_Shemagh_shade_N";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiPlayer addWeapon "CUP_arifle_M4A1_black";
    };
    case (_Respect > 9999999 && _Respect < 11999999):
    //Prisoner
    {
     _bambiPlayer forceAddUniform "U_I_GhillieSuit";
     _bambiplayer addBackpack "B_Parachute";
     _bambiplayer addVest "V_BandollierB_blk";
     _bambiplayer addItem "Exile_Item_PlasticBottleCoffee";
     _bambiplayer addItem "Exile_Item_Vishpirin";
     _bambiplayer addItem "Exile_Item_DuctTape";
     _bambiplayer addItem "Exile_Item_EMRE";
     _bambiplayer addItem "SmokeShellOrange";
     _bambiplayer addItem "muzzle_snds_acp";
     _bambiplayer addItem "optic_DMS";
	 _bambiplayer addItem "acc_flashlight_pistol";
	 _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiPlayer addWeaponGlobal "hgun_ACPC2_F";
     _bambiplayer addHeadGear "H_MilCap_gry";
     _bambiPlayer addWeapon "TRYK_Shemagh_shade_N";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiPlayer addWeapon "CUP_arifle_M4A1_black";
    };
    case (_Respect > 11999999 && _Respect < 12999999):
    //Prisoner
    {
     _bambiPlayer forceAddUniform "U_I_GhillieSuit";
     _bambiplayer addBackpack "B_Parachute";
     _bambiplayer addVest "V_BandollierB_blk";
     _bambiplayer addItem "Exile_Item_PlasticBottleCoffee";
     _bambiplayer addItem "Exile_Item_Vishpirin";
     _bambiplayer addItem "Exile_Item_DuctTape";
     _bambiplayer addItem "Exile_Item_EMRE";
     _bambiplayer addItem "SmokeShellOrange";
     _bambiplayer addItem "muzzle_snds_acp";
     _bambiplayer addItem "optic_DMS";
	 _bambiplayer addItem "acc_flashlight_pistol";
	 _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiPlayer addWeaponGlobal "hgun_ACPC2_F";
     _bambiplayer addHeadGear "H_MilCap_gry";
     _bambiPlayer addWeapon "TRYK_Shemagh_shade_N";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiplayer addItem "CUP_30Rnd_556x45_Stanag";
	 _bambiPlayer addWeapon "CUP_arifle_M4A1_black";
    };
   case (_Respect > 15000000):
    //Prisoner
    {
     _bambiPlayer forceAddUniform "U_I_GhillieSuit";
     _bambiplayer addBackpack "B_Parachute";
     _bambiplayer addVest "V_BandollierB_blk";
     _bambiplayer addItem "Exile_Item_PlasticBottleCoffee";
     _bambiplayer addItem "Exile_Item_Vishpirin";
     _bambiplayer addItem "Exile_Item_DuctTape";
     _bambiplayer addItem "Exile_Item_EMRE";
     _bambiplayer addItem "SmokeShellOrange";
     _bambiplayer addItem "muzzle_snds_acp";
     _bambiplayer addItem "optic_DMS";
	 _bambiplayer addItem "acc_flashlight_pistol";
	 _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiPlayer addWeaponGlobal "hgun_ACPC2_F";
     _bambiplayer addHeadGear "H_MilCap_gry";
     _bambiPlayer addWeapon "TRYK_Shemagh_shade_N";
	 _bambiplayer addItem "Exile_Magazine_20Rnd_762x51_DMR_Green";
	 _bambiplayer addItem "Exile_Magazine_20Rnd_762x51_DMR_Green";
	 _bambiPlayer addWeapon "Exile_Weapon_DMR";
    };
   default
     {  
     _bambiPlayer forceAddUniform "TRYK_U_B_PCUGs_gry";
     _bambiplayer addBackpack "B_Parachute";
     _bambiplayer addVest "V_BandollierB_blk";
     _bambiplayer addItem "Exile_Item_PlasticBottleCoffee";
     _bambiplayer addItem "Exile_Item_Vishpirin";
     _bambiplayer addItem "Exile_Item_DuctTape";
     _bambiplayer addItem "Exile_Item_EMRE";
     _bambiplayer addItem "SmokeShellOrange";
     _bambiplayer addItem "muzzle_snds_acp";
	 _bambiplayer addItem "acc_flashlight_pistol";
	 _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiplayer addItem "9Rnd_45ACP_Mag";
     _bambiPlayer addWeaponGlobal "hgun_ACPC2_F";
     _bambiplayer addHeadGear "H_MilCap_gry";
     _bambiPlayer addWeapon "TRYK_Shemagh_shade_N";
     };
};
if((canTriggerDynamicSimulation _bambiPlayer) isEqualTo false) then 
{
    _bambiPlayer triggerDynamicSimulation true; 
};
_bambiPlayer addMPEventHandler ["MPKilled", {_this call ExileServer_object_player_event_onMpKilled}];
_bambiPlayer call ExileServer_object_player_database_insert;
_bambiPlayer call ExileServer_object_player_database_update;
_bambiPlayer setUnitLoadout ((_requestingPlayer getVariable "PlayerGearSelection") select 0);

_repCost = ((_requestingPlayer getVariable "PlayerGearSelection") select 1);

if (_repCost > 0) then 
{
	_newScore = _bambiPlayer getVariable ["ExileScore", 0];
	_newScore = _newScore - _repCost;
	_bambiPlayer setVariable ["ExileScore", _newScore, true];
	format["setAccountScore:%1:%2", _newScore, getPlayerUID _requestingPlayer] call ExileServer_system_database_query_fireAndForget;
};

_popCost = ((_requestingPlayer getVariable "PlayerGearSelection") select 2);

if (_popCost > 0) then 
{
	_newCash = _bambiPlayer getVariable ["ExileLocker", 0];
	_newCash = _newCash - _popCost;
	_bambiPlayer setVariable ["ExileLocker", _newCash, true];
	format["updateLocker:%1:%2", _newCash, getPlayerUID _requestingPlayer] call ExileServer_system_database_query_fireAndForget;
};
[
    _sessionID, 
    "createPlayerResponse", 
    [
        _bambiPlayer, 
        _parachuteNetID, 
        //str (_accountData select 0),
		str (_bambiPlayer getVariable ["ExileScore", 0]),
        (_accountData select 1),
        (_accountData select 2),
        100,
        100,
        0,
        (getNumber (configFile >> "CfgSettings" >> "BambiSettings" >> "protectionDuration")) * 60, 
        _clanData,
        _spawnType
    ]
] 
call ExileServer_system_network_send_to;
[_sessionID, _bambiPlayer] call ExileServer_system_session_update;
true
