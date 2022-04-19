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

_randomLoudouts = [
 [
  [["CUP_arifle_ACRC_tan_556","","","CUP_optic_MicroT1",["CUP_30Rnd_556x45_Stanag",30],[],""],[],["CUP_hgun_Colt1911","","","",["CUP_7Rnd_45ACP_1911",7],[],""],["CUP_I_B_PMC_Unit_43",[["CUP_30Rnd_556x45_Stanag",2,30]]],["CUP_V_CZ_NPP2006_nk_des",[["CUP_7Rnd_45ACP_1911",2,7],["DDR_Item_Dressing",2,1]]],["B_Kitbag_cbr",[["Exile_Item_PlasticBottleFreshWater",1,1],["Exile_Item_DuctTape",1,1],["Exile_Item_BeefParts",1,1]]],"CUP_H_PMC_Cap_Back_EP_Grey","",[],["ItemMap","","","","Exile_Item_XM8","CUP_NVG_PVS7"]]
 ],
 [
  [["CUP_sgun_M1014_Entry_vfg","","","CUP_optic_MicroT1",["CUP_6Rnd_B_Beneli_74Pellets",6],[],""],[],["hgun_Rook40_F","","","",["16Rnd_9x21_Mag",16],[],""],["U_OrestesBody",[["DDR_Item_Dressing",2,1],["CUP_6Rnd_B_Beneli_74Pellets",2,6]]],["V_TacVest_camo",[["MiniGrenade",3,1],["SmokeShell",2,1],["16Rnd_9x21_Mag",2,16],["CUP_6Rnd_B_Beneli_74Pellets",1,6],["Exile_Item_BeefParts",1,1],["Exile_Item_PlasticBottleFreshWater",1,1],["Exile_Item_DuctTape",1,1]]],["CUP_B_Motherlode_MTP",[]],"CUP_H_C_MAGA_01","G_Respirator_white_F",[],["ItemMap","","","","Exile_Item_XM8","CUP_NVG_PVS15_winter"]]
 ],
 [
  [[],[],["CUP_hgun_TEC9","muzzle_snds_L","","",["CUP_32Rnd_9x19_TEC9",32],[],""],["CUP_U_O_CHDKZ_Lopotev",[["CUP_32Rnd_9x19_TEC9",3,32]]],["V_TacVest_blk_POLICE",[["DDR_Item_Dressing",2,1]]],["B_FieldPack_blk",[["Exile_Item_BeefParts",1,1],["Exile_Item_DuctTape",1,1],["Exile_Item_PlasticBottleFreshWater",1,1]]],"","G_Balaclava_blk",[],["ItemMap","","","","Exile_Item_XM8","CUP_NVG_PVS15_black"]]
 ],
 [
   [["arifle_AK47","","","",["30Rnd_762x39_AK47_M",30],[],""],[],[],["CUP_O_TKI_Khet_Partug_02",[["DDR_Item_Dressing",2,1]]],["V_Chestrig_blk",[["30Rnd_762x39_AK47_M",2,30]]],["B_Kitbag_cbr",[["Exile_Item_BeefParts",1,1],["Exile_Item_DuctTape",1,1],["Exile_Item_PlasticBottleFreshWater",1,1]]],"CUP_H_CZ_Pakol_headset_f_brown","CUP_FR_NeckScarf3",[],["ItemMap","","","","Exile_Item_XM8","CUP_NVG_HMNVS"]]
 ],
 [
  [["CUP_smg_saiga9","","","CUP_optic_MicroT1_low",["CUP_10Rnd_9x19_Saiga9",10],[],""],[],[],["CUP_U_I_GUE_Flecktarn2",[["DDR_Item_Dressing",2,1]]],["V_TacVest_oli",[["MiniGrenade",1,1],["CUP_10Rnd_9x19_Saiga9",3,10]]],["B_TacticalPack_rgr",[["Exile_Item_DuctTape",1,1],["Exile_Item_PlasticBottleFreshWater",1,1],["Exile_Item_BeefParts",1,1]]],"CUP_H_PMC_Beanie_Black","G_Lowprofile",[],["ItemMap","","","","Exile_Item_XM8","CUP_NVG_PVS15_green"]]
 ],
 [
  [["CUP_arifle_G36K_KSK_VFG","","","CUP_optic_MicroT1_low",["CUP_30Rnd_556x45_G36",30],[],""],[],["hgun_P07_khk_F","","","",["16Rnd_9x21_Mag",16],[],""],["CUP_U_B_GER_Flecktarn_2",[["DDR_Item_Dressing",2,1]]],["CUP_V_B_GER_Armatus_BB_Fleck",[["SmokeShell",2,1],["16Rnd_9x21_Mag",2,16],["CUP_30Rnd_556x45_G36",3,30]]],["B_Kitbag_rgr",[["Exile_Item_DuctTape",1,1],["Exile_Item_PlasticBottleFreshWater",1,1],["Exile_Item_BeefParts",1,1]]],"CUP_H_Ger_Beret_TankCommander_Grn","CUP_G_Scarf_Face_Grn",[],["ItemMap","","","","Exile_Item_XM8","O_NVGoggles_grn_F"]]
 ],
 [
  [["CUP_arifle_HK416_Desert","","","CUP_optic_MicroT1_coyote",["CUP_30Rnd_556x45_PMAG_QP_Tan",30],[],""],[],["hgun_Pistol_heavy_01_F","","","",["11Rnd_45ACP_Mag",11],[],""],["CUP_I_B_PARA_Unit_6",[["DDR_Item_Dressing",2,1]]],["CUP_V_B_BAF_DDPM_Osprey_Mk3_AutomaticRifleman",[["11Rnd_45ACP_Mag",2,11],["CUP_30Rnd_556x45_PMAG_QP_Tan",2,30]]],["B_Kitbag_tan",[["Exile_Item_BeefParts",1,1],["Exile_Item_DuctTape",1,1],["Exile_Item_PlasticBottleFreshWater",1,1]]],"CUP_H_CZ_Booniehat_fold_des","CUP_TK_NeckScarf",[],["ItemMap","","","","Exile_Item_XM8","CUP_NVG_PVS15_tan"]]
 ],
 [
  [["CUP_sgun_Saiga12K","","","CUP_optic_ekp_8_02",["CUP_8Rnd_B_Saiga12_74Slug_M",5],[],""],[],[],["CUP_U_O_SLA_MixedCamo",[["DDR_Item_Dressing",2,1]]],["CUP_V_I_Guerilla_Jacket",[["MiniGrenade",2,1],["CUP_8Rnd_B_Saiga12_74Slug_M",3,5]]],["CUP_B_USMC_MOLLE_WDL",[["Exile_Item_DuctTape",1,1],["Exile_Item_PlasticBottleFreshWater",1,1],["Exile_Item_BeefParts",1,1]]],"CUP_H_TKI_Lungee_03","CUP_FR_NeckScarf3",[],["ItemMap","","","","Exile_Item_XM8","CUP_NVG_HMNVS"]]
 ],
 [
  [["arifle_Mk20_plain_F","","","CUP_optic_AC11704_Black",["30Rnd_556x45_Stanag",30],[],""],[],[],["CUP_U_I_GUE_Anorak_01",[["DDR_Item_Dressing",2,1]]],["CUP_V_B_Eagle_SPC_Crew",[["30Rnd_556x45_Stanag",1,30]]],["B_Kitbag_cbr",[["Exile_Item_BeefParts",1,1],["Exile_Item_DuctTape",1,1],["Exile_Item_PlasticBottleFreshWater",1,1]]],"","G_Respirator_blue_F",[],["ItemMap","","","","Exile_Item_XM8","CUP_NVG_PVS7"]]
 ],
 [
  [["CUP_srifle_Mosin_Nagant","","","",["CUP_5Rnd_762x54_Mosin_M",5],[],""],[],["CUP_hgun_Makarov","","","",["CUP_8Rnd_9x18_Makarov_M",8],[],""],["CUP_U_CRYEG3_V2",[["DDR_Item_Dressing",2,1]]],["V_I_G_resistanceLeader_F",[["CUP_8Rnd_9x18_Makarov_M",2,8],["CUP_5Rnd_762x54_Mosin_M",3,5],["SmokeShell",2,1]]],["B_Kitbag_sgg",[["Exile_Item_DuctTape",1,1],["Exile_Item_PlasticBottleFreshWater",1,1],["Exile_Item_BeefParts",1,1]]],"H_Shemag_olive","CUP_G_Scarf_Face_Grn",[],["ItemMap","","","","Exile_Item_XM8","NVGoggles_INDEP"]]
 ],
 [
  [["CUP_arifle_Galil_SAR_black","","","CUP_optic_MicroT1_low",["CUP_35Rnd_556x45_Galil_Mag",35],[],""],[],[],["CUP_U_C_Fireman_01",[["DDR_Item_Dressing",2,1]]],["V_TacVest_blk",[["CUP_35Rnd_556x45_Galil_Mag",1,35],["Exile_Item_DuctTape",1,1],["Exile_Item_PlasticBottleFreshWater",2,1],["Exile_Item_BeefParts",2,1]]],["B_SCBA_01_F",[]],"CUP_H_C_Fireman_Helmet_01","G_Respirator_yellow_F",[],["ItemMap","","ItemRadio","","Exile_Item_XM8","CUP_NVG_GPNVG_black"]]
 ],
 [
  [["CUP_arifle_AK47_Early","","","",["CUP_30Rnd_762x39_AK47_M",30],[],""],[],["CUP_hgun_Makarov","","","",["CUP_8Rnd_9x18_Makarov_M",8],[],""],["CUP_O_TKI_Khet_Partug_08",[["DDR_Item_Dressing",2,1]]],["CUP_V_OI_TKI_Jacket5_03",[["CUP_30Rnd_TE1_Yellow_Tracer_762x39_AK47_M",1,30]]],["B_Kitbag_cbr",[["Exile_Item_PlasticBottleFreshWater",1,1],["Exile_Item_BeefParts",1,1],["Exile_Item_DuctTape",1,1]]],"CUP_H_TKI_Lungee_Open_04","CUP_FR_NeckScarf4",[],["ItemMap","","","","Exile_Item_XM8","CUP_NVG_PVS7"]]
 ],
 [
  [["CUP_arifle_G36K_KSK","","","CUP_optic_AC11704_Black",["CUP_30Rnd_556x45_G36",30],[],""],[],[],["CUP_I_B_PARA_Unit_9",[["DDR_Item_Dressing",2,1]]],["CUP_V_B_Armatus_BB_OD",[["CUP_30Rnd_556x45_G36",1,30],["DDR_Item_Bloodbag",1,1]]],["B_Kitbag_rgr",[["Exile_Item_BeefParts",1,1],["DDR_Item_Yummy_Juice",2,1],["DDR_Item_Container_Chicken_Rice",2,1],["Exile_Item_DuctTape",1,1]]],"CUP_H_Ger_Boonie_Flecktarn","CUP_FR_NeckScarf",[],["ItemMap","","","","Exile_Item_XM8","CUP_NVG_PVS7"]]
 ],
 [
  [["CUP_smg_EVO","","","CUP_optic_AC11704_Black",["CUP_30Rnd_9x19_EVO",30],[],""],[],[],["CUP_U_CRYE_BLK_Roll",[["DDR_Item_Dressing",2,1]]],["CUP_V_MBSS_PACA2_Black",[["CUP_30Rnd_9x19_EVO",2,30],["SmokeShell",1,1]]],["B_Kitbag_tan",[["Exile_Item_DuctTape",1,1],["Exile_Item_PlasticBottleFreshWater",1,1],["Exile_Item_BeefParts",1,1]]],"CUP_H_RUS_Bandana_HS","CUP_G_Scarf_Face_Tan",[],["ItemMap","","","","Exile_Item_XM8","CUP_NVG_PVS7"]]
 ],
 [
  [["CUP_smg_vityaz_top_rail","CUP_muzzle_mfsup_Flashhider_762x39_Black","","CUP_optic_AC11704_Black",["CUP_30Rnd_9x19AP_Vityaz",30],[],""],[],[],["CUP_I_B_PMC_Unit_16",[["DDR_Item_Dressing",2,1]]],["CUP_V_PMC_IOTV_Coyote_Empty",[["CUP_30Rnd_9x19AP_Vityaz",3,30]]],["B_Kitbag_rgr",[["Exile_Item_DuctTape",1,1],["Exile_Item_PlasticBottleFreshWater",1,1],["Exile_Item_BeefParts",1,1]]],"CUP_H_SLA_BeanieGreen","CUP_G_ESS_BLK_Scarf_Face_Blk",[],["ItemMap","","","","Exile_Item_XM8","CUP_NVG_PVS15_black"]]
 ],
 [
  [["CUP_arifle_HK416_Black","","","CUP_optic_MicroT1_low",["CUP_30Rnd_556x45_PMAG_QP",30],[],""],[],[],["CUP_I_B_PMC_Unit_39",[]],["CUP_V_B_Armatus_BB_Black",[["CUP_30Rnd_556x45_PMAG_QP",1,30],["SmokeShell",1,1],["MiniGrenade",2,1]]],["B_Kitbag_sgg",[["Exile_Item_BeefParts",1,1],["Exile_Item_DuctTape",1,1],["Exile_Item_PlasticBottleFreshWater",1,1],["DDR_Item_Bloodbag",1,1],["DDR_Item_Container_Chicken_Rice",2,1],["DDR_Item_Yummy_Juice",2,1]]],"CUP_H_CZ_Cap_Headphones","CUP_G_Scarf_Face_Grn",[],["ItemMap","","","","Exile_Item_XM8","CUP_NVG_PVS7"]]
 ],
 [
  [["CUP_arifle_ACRC_blk_556","","CUP_acc_ANPEQ_2_Black_Top","CUP_optic_MicroT1",["CUP_30Rnd_556x45_Stanag",30],[],""],[],[],["CUP_I_B_PMC_Unit_40",[["Exile_Item_InstaDoc",1,1],["DDR_Item_Dressing",2,1]]],["CUP_V_B_Armatus_Black",[["CUP_30Rnd_556x45_Stanag",2,30],["MiniGrenade",1,1]]],["B_Kitbag_sgg",[["Exile_Item_BeefParts",1,1],["Exile_Item_DuctTape",1,1],["Exile_Item_PlasticBottleFreshWater",1,1],["DDR_Item_Container_Chicken_Rice",2,1],["DDR_Item_Yummy_Juice",2,1],["SmokeShell",1,1]]],"CUP_H_OpsCore_Black","CUP_G_Scarf_Face_Grn",[],["ItemMap","","","","Exile_Item_XM8","NVGoggles_OPFOR"]]
 ],
 [
  [["CUP_smg_EVO","","","CUP_optic_AC11704_Black",["CUP_30Rnd_9x19_EVO",30],[],""],[],[],["CUP_U_O_RUS_EMR_gloves_pads",[["DDR_Item_Dressing",2,1],["Exile_Item_InstaDoc",1,1]]],["CUP_V_PMC_IOTV_Black_Empty",[["CUP_30Rnd_9x19_EVO",2,30]]],["B_Kitbag_cbr",[["Exile_Item_DuctTape",1,1],["Exile_Item_PlasticBottleFreshWater",1,1],["Exile_Item_BeefParts",1,1],["SmokeShell",2,1]]],"CUP_H_PMC_Beanie_Headphones_Khaki","CUP_G_Scarf_Face_Tan",[],["ItemMap","","","","Exile_Item_XM8","CUP_NVG_PVS7"]]
 ],
 [
  [["CUP_arifle_M4A1_MOE_winter","","","CUP_optic_MicroT1",["CUP_30Rnd_556x45_Stanag",30],[],""],[],["CUP_hgun_Colt1911","","","",["CUP_7Rnd_45ACP_1911",7],[],""],["CUP_U_B_BDUv2_Winter_M81",[["DDR_Item_Dressing",2,1]]],["CUP_V_B_BAF_DPM_Osprey_Mk3_Pilot",[["CUP_7Rnd_45ACP_1911",2,7],["CUP_30Rnd_556x45_Stanag",2,30]]],["B_Kitbag_rgr",[["Exile_Item_BeefParts",1,1],["Exile_Item_PlasticBottleFreshWater",1,1],["Exile_Item_DuctTape",1,1]]],"CUP_H_OpsCore_Grey_SF","CUP_G_ESS_BLK_Scarf_White",[],["ItemMap","","","","Exile_Item_XM8","CUP_NVG_PVS15_black"]]
 ],
 [
  [["CUP_arifle_FNFAL5061","","","",["CUP_20Rnd_762x51_FNFAL_M",20],[],""],[],["hgun_P07_F","","","",["16Rnd_9x21_Mag",16],[],""],["CUP_I_B_PMC_Unit_21",[["DDR_Item_Dressing",2,1]]],["CUP_V_PMC_IOTV_Black_TL",[["CUP_20Rnd_762x51_FNFAL_M",3,20],["16Rnd_9x21_Mag",3,16],["MiniGrenade",1,1]]],["B_Kitbag_cbr",[["Exile_Item_BeefParts",1,1],["Exile_Item_DuctTape",1,1],["Exile_Item_PlasticBottleFreshWater",1,1],["DDR_Item_Bloodbag",1,1]]],"CUP_H_OpsCore_Grey","CUP_G_ESS_KHK_Ember",[],["ItemMap","","","","Exile_Item_XM8","CUP_NVG_HMNVS"]]
 ]
];

_cnt = count _randomLoudouts;

_randomLoadoutNumber = floor random _cnt;

_randomLoudoutsIndex = _randomLoudouts select _randomLoadoutNumber; 
_randomLoudoutsIndex = _randomLoudoutsIndex select 0; 
 
_bambiPlayer setUnitLoadout _randomLoudoutsIndex;


if((canTriggerDynamicSimulation _bambiPlayer) isEqualTo false) then 
{
    _bambiPlayer triggerDynamicSimulation true; 
};
_bambiPlayer addMPEventHandler ["MPKilled", {_this call ExileServer_object_player_event_onMpKilled}];
_bambiPlayer call ExileServer_object_player_database_insert;
_bambiPlayer call ExileServer_object_player_database_update;
//_bambiPlayer setUnitLoadout ((_requestingPlayer getVariable "PlayerGearSelection") select 0);
/*
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
};*/
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
