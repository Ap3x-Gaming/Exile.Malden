	// Revive
	ExileClient_object_player_death_startBleedingOut = "custom\EnigmaRevive\ExileClient_object_player_death_startBleedingOut.sqf"; //enigma revive
	
	//instant constructions
	ExileClient_construction_handleAbort = "Custom\Instantbuild\ExileClient_construction_handleAbort.sqf";
	
	//SM vector
	ExileClient_gui_constructionMode_update = "SM\Vector\SM_gui_constructionMode_update.sqf";
	ExileClient_gui_hud_event_onKeyUp = "SM\Vector\SM_gui_hud_event_onKeyUp.sqf";
	ExileClient_construction_thread = "SM\Vector\SM_construction_thread.sqf";
	
	// Vehicle spawn laat voertuigen op vaste plek spawnen
	ExileServer_system_trading_network_purchaseVehicleRequest = "Custom\helipad\ExileServer_system_trading_network_purchaseVehicleRequest.sqf";
	
	//ImprovedKillFeed
	// Kill Messages werkt niet! staat al ergens
	ExileServer_object_player_event_onMpKilled = "Custom\ImprovedKillFeed\ExileServer_object_player_event_onMpKilled.sqf";

	// sell crates
	
    ExileClient_gui_traderDialog_updateInventoryDropdown = "custom\SellCrate\ExileClient_gui_traderDialog_updateInventoryDropdown.sqf";
	ExileClient_gui_wasteDumpDialog_show = "Custom\SellCrate\ExileClient_gui_wasteDumpDialog_show.sqf";
	
	//Spawn Selection by bambam
	ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick = "xs\spawn\Overwrites\ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick.sqf";
	ExileClient_gui_selectSpawnLocation_show = "xs\spawn\Overwrites\ExileClient_gui_selectSpawnLocation_show.sqf";
	ExileClient_gui_selectSpawnLocation_zoomToMarker = "xs\spawn\Overwrites\ExileClient_gui_selectSpawnLocation_zoomToMarker.sqf";
	ExileClient_gui_selectSpawnLocation_event_onListBoxSelectionChanged = "xs\spawn\Overwrites\ExileClient_gui_selectSpawnLocation_event_onListBoxSelectionChanged.sqf";
	//Randomloadouts by Garcia
	ExileServer_object_player_createBambi = "randomLoudoutsC\ExileServer_object_player_createBambi.sqf";
	// EM
	ExileClient_system_thread_initialize = "Custom\EM\ExileClient_system_thread_initialize.sqf";
	
	// Radiation
	ExileClient_system_radiation_initialize = "Custom\Radiation\ExileClient_system_radiation_initialize.sqf";
    ExileClient_system_radiation_event_onPlayerSpawned = "Custom\Radiation\ExileClient_system_radiation_event_onPlayerSpawned.sqf";
	
	//StokeMage basepaint
	ExileServer_object_construction_database_load = "SM_Paint\overrides\ExileServer_object_construction_database_load.sqf";
	
	//stokemage missle incomming
	ExileServer_system_garbageCollector_deleteObject = "SM_IncomingMissile\code\overrides\ExileServer_system_garbageCollector_deleteObject.sqf";
	ExileServer_object_vehicle_createPersistentVehicle = "SM_IncomingMissile\code\overrides\ExileServer_object_vehicle_createPersistentVehicle.sqf";
	ExileServer_object_vehicle_createNonPersistentVehicle = "SM_IncomingMissile\code\overrides\ExileServer_object_vehicle_createNonPersistentVehicle.sqf";
	
	//ExAd XM8
    ExileClient_gui_xm8_slide = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_slide.sqf";
    ExileClient_gui_xm8_show = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_show.sqf";
	

	//safe zone bug
	ExileClient_object_player_thread_safeZone ="Custom\SafezoneBug\ExileClient_object_player_thread_safeZone.sqf";
	
	//repair combat mode 
	ExileClient_action_repairVehicle_condition = "Custom\CombatRepair\ExileClient_action_repairVehicle_condition.sqf";
	
	
	// for virtual garage on first page..
    ExileServer_system_territory_database_load = "ExAdClient\VirtualGarage\CustomCode\ExileServer_system_territory_database_load.sqf";
	ExileClient_gui_virtualGarageDialog_show = "Custom\Vgbutton\ExileClient_gui_virtualGarageDialog_show.sqf";
	ExileServer_object_tree_network_chopTreeRequest = "Custom\Choptree\ExileServer_object_tree_network_chopTreeRequest.sqf";
	
	//FISHING
	//ExileClient_gui_hud_event_onKeyUp = "Custom\Fishing\ExileClient_gui_hud_event_onKeyUp.sqf";

	//Custom keys
	//ExileClient_gui_hud_event_onKeyUp = "Custom\Lock\overwrites\ExileClient_gui_hud_event_onKeyUp.sqf";
	
	//Crash_Loot
    ExileClient_object_container_pack = "Custom\Crashloot\ExileClient_object_container_pack.sqf";
    ExileServer_object_container_packContainer = "Custom\Crashloot\ExileServer_object_container_packContainer.sqf";	
	
	
	//LightFix
	ExileServer_object_floodLight_network_toggleFloodLightRequest = "Custom\LightFix\ExileServer_object_floodLight_network_toggleFloodLightRequest.sqf";
	ExileClient_object_floodLight_network_toggleFloodLightRequest = "Custom\LightFix\ExileClient_object_floodLight_network_toggleFloodLightRequest.sqf";
	ExileClient_object_portableGenerator_switchOn = "Custom\LightFix\ExileClient_object_portableGenerator_switchOn.sqf";
	ExileClient_object_portableGenerator_switchOff = "Custom\LightFix\ExileClient_object_portableGenerator_switchOff.sqf";
	
	//SM territory locking plus
	ExileClient_object_lock_toggle = "SM\LockingPlus\overrides\ExileClient_object_lock_toggle.sqf";
	ExileServer_object_lock_network_lockToggle = "SM_LockingPlus\overrides\ExileServer_object_lock_network_lockToggle.sqf";
	
	// FLOOR PEAKING
	ExileClient_object_player_initialize = "Custom\Floorpeak\ExileClient_object_player_initialize.sqf";
	ExileClient_object_player_stats_update = "Custom\Floorpeak\ExileClient_object_player_stats_update.sqf";
	
	//weaponhud/groupPanel
	ExileClient_gui_hud_renderGroupPanel = "Custom\Panel\ExileClient_gui_hud_renderGroupPanel.sqf";
	ExileClient_gui_hud_renderWeaponPanel = "Custom\Panel\ExileClient_gui_hud_renderWeaponPanel.sqf";
	
	//flaghack
	ExileClient_action_execute = "Custom\FlagHacking\CustomCode\ExileClient_action_execute.sqf"; 
	
	//Safezone height
	ExileClient_util_world_isInTraderZone = "Custom\Safezone\ExileClient_util_world_isInTraderZone.sqf";
	
	//StatusBar
	ExileServer_system_database_connect = "Custom\StatusBar\ExileServer_system_database_connect.sqf";
	
	//stpps people to pick up locked vehicle
	ExileClient_object_vehicle_network_lockVehicleRequest = "Custom\PickLocked\ExileClient_object_vehicle_network_lockVehicleRequest.sqf";
	
	// Base height restriction
	ExileClient_construction_beginNewObject = "Custom\Baseheight\ExileClient_construction_beginNewObject.sqf";
	
	//Auto-run-Fix
	ExileClient_system_autoRun_canAutoRun = "custom\Autorun\ExileClient_system_autoRun_canAutoRun.sqf";
	
	//Lock/Thermalscanner fix
	ExileServer_object_construction_network_addLockRequest = "custom\ThermalScanner\ExileServer_object_construction_network_addLockRequest.sqf";
	ExileServer_object_lock_network_hackLockRequest = "custom\ThermalScanner\ExileServer_object_lock_network_hackLockRequest.sqf";
	ExileServer_object_lock_network_setPin = "custom\ThermalScanner\ExileServer_object_lock_network_setPin.sqf";
	
	//Grinding Rebalance
	ExileClient_action_grindLock_duration = "Exile_Client_Overrides\ExileClient_action_grindLock_duration.sqf";
	ExileClient_action_grindLock_condition = "Exile_Client_Overrides\ExileClient_action_grindLock_condition.sqf";
	ExileServer_object_lock_network_grindLockRequest = "Exile_Server_Overrides\ExileServer_object_lock_network_grindLockRequest.sqf";	

	// details territory
	ExileClient_gui_xm8_slide_territory_onOpen = "Custom\Territory\ExileClient_gui_xm8_slide_territory_onOpen.sqf";
	
	// Dynamic spawn vehicle with items in it.
	ExileServer_world_spawnVehicles = "Custom\SpawnVehicle\ExileServer_world_spawnVehicles.sqf";
	/*
	* TOASTS
	*/
	ExileClient_gui_toaster_addToast = "custom\toast\MWT\ExileClient_gui_toaster_addToast.sqf";
	/*
	* Steal Flag Height
	*/
	ExileClient_action_stealFlag_condition = "Custom\Hackheightflag\ExileClient_action_stealFlag_condition.sqf";
	
	/*
	* Fix For Vehicle Customs needing extra PT for Pin Change
	*/
	ExileClient_gui_vehicleRekeyDialog_event_onDropDownSelectionChanged = "Custom\Codetraderfix\ExileClient_gui_vehicleRekeyDialog_event_onDropDownSelectionChanged.sqf";
	/*
	* AI vehicle marker 100 and higher
	*/
	ai_marker = "Custom\AIMarker\ai_marker.sqf";
	/*
	* Disable mines on traders
	*/
	ExileClient_object_player_event_onFired = "Custom\Safezone\ExileClient_object_player_event_onFired.sqf";
	/*
	* Stealflag annoucements discord
	*/
	ExileClient_action_stealFlag_duration = "Custom\Flaghackannoucement\ExileClient_action_stealFlag_duration.sqf";
	/*
	* Raise Vanilla Marker distance
	*/
	ExileClient_system_party_updateMyMarker = "Custom\3DMarkers\ExileClient_system_party_updateMyMarker.sqf";
	//ExileClient_action_execute = "Custom\Perk\ExileClient_action_execute.sqf";//Included In Flagg Hacking
	ExileClient_gui_lockerDialog_event_onDepositButtonClick = "Custom\Perk\ExileClient_gui_lockerDialog_event_onDepositButtonClick.sqf";
	ExileClient_gui_lockerDialog_show = "Custom\Perk\ExileClient_gui_lockerDialog_show.sqf";
	ExileServer_system_locker_network_lockerDepositRequest = "Custom\Perk\ExileServer_system_locker_network_lockerDepositRequest.sqf";
	ExileClient_system_locker_network_lockerResponse = "Custom\Perk\ExileClient_system_locker_network_lockerResponse.sqf";
	ExileClient_object_player_bambiStateEnd = "Custom\Perk\ExileClient_object_player_bambiStateEnd.sqf"; 
	// Exp
	ExileClient_gui_hud_showKillDetails = "actions\ExileClient_gui_hud_showKillDetails.sqf";
	ExileClient_action_hotwireVehicle_completed = "actions\ExileClient_action_hotwireVehicle_completed.sqf";
	ExileClient_action_repairVehicle_completed = "actions\ExileClient_action_repairVehicle_completed.sqf";
	ExileClient_action_stealFlag_completed = "actions\ExileClient_action_stealFlag_completed.sqf";
	ExileClient_action_hackLock_completed = "actions\ExileClient_action_hackLock_completed.sqf";
	ExileClient_action_grindLock_completed = "actions\ExileClient_action_grindLock_completed.sqf";
	ExileClient_action_breaching_completed = "actions\ExileClient_action_breaching_completed.sqf";
	//ExileClient_object_construction_network_repairConstructionResponse = "actions\ExileClient_object_construction_network_repairConstructionResponse.sqf";
	