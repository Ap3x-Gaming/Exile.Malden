	class SM_LockerPlus
	{
		targetType = 2;
		target = "Exile_Locker";
		class actions
		{
			class ItemStorage: ExileAbstractAction
			{
				title = "<img image='\exile_assets\texture\arsenal\backpack_ca.paa' size='1' shadow='false'/>Access Item Storage";
				condition = "SM_LockerPlus_EnableInventoryStorage";
				action = "[] call SM_LockerPlus_Show";
			};
		};
	};
	class Tank
	{
		targetType=2;
		target="Tank";
		
		class Actions
		{
			class Lock: ExileAbstractAction
			{
				title="Lock";
				condition="((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action="true spawn ExileClient_object_lock_toggle";
			};
			class Unlock: ExileAbstractAction
			{
				title="Unlock";
				condition="((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action="false spawn ExileClient_object_lock_toggle";
			};
			class Repair: ExileAbstractAction
			{
				title="Repair";
				condition= "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};
			
			class Flip: ExileAbstractAction
			{
				title="Flip";
				condition="call ExileClient_object_vehicle_interaction_show";
				action="_this call Exileclient_object_vehicle_flip";
			};
			class Loot: ExileAbstractAction       //Crash_Loot
            {
                title = "Loot Vehicle";
                condition = "(!(alive (ExileClientInteractionObject)))";
                action = "_this spawn ExileClient_object_container_pack";
            };
			class Paint: ExileAbstractAction
			{
				title = "Paint";
				condition = "(((ExileClientInteractionObject getVariable ['ExileAlreadyKnownCode','']) != '') && ((locked ExileClientInteractionObject) == 0) && ((locked ExileClientInteractionObject) != 1) || ((local ExileClientInteractionObject) && (locked ExileClientInteractionObject) == 1))";
				action = "_this spawn SM_Paint_Show";
			};
			/*class Push: ExileAbstractAction
			{
				title = "Fus Ro Dah!";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
			*/
			
			class ClaimVehicle: ExileAbstractAction
			{
				title = "Claim Ownership";
				condition = "true";
				action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
			};
			class Refuel: ExileAbstractAction
			{
				title="Refuel";
				condition="call ExileClient_object_vehicle_interaction_show";
				action="_this call ExileClient_object_vehicle_refuel";
			};
			class DrainFuel: ExileAbstractAction
			{
				title="Drain Fuel";
				condition="call ExileClient_object_vehicle_interaction_show";
				action="_this call ExileClient_object_vehicle_drain";
			};
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};
		};
	};
	
	class Car 
	{
		targetType = 2;
		target = "Car";

		class Actions 
		{
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};
			
			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};
			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			
			class Scrap: ExileAbstractAction
			{
				title = "Recover Parts";
				condition = "true";
				action = "_this call fnc_bike_scrap";
			};
			class Paint: ExileAbstractAction
			{
				title = "Paint";
				condition = "(((ExileClientInteractionObject getVariable ['ExileAlreadyKnownCode','']) != '') && ((locked ExileClientInteractionObject) == 0) && ((locked ExileClientInteractionObject) != 1) || ((local ExileClientInteractionObject) && (locked ExileClientInteractionObject) == 1))";
				action = "_this spawn SM_Paint_Show";
			};
			class Loot: ExileAbstractAction       //Crash_Loot
            {
                title = "Loot Vehicle";
                condition = "(!(alive (ExileClientInteractionObject)))";
                action = "_this spawn ExileClient_object_container_pack";
            };
			/*			
			class Push: ExileAbstractAction
			{
				title = "Fus Ro Dah!";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
			*/
			
			class ClaimVehicle: ExileAbstractAction
			{
				title = "Claim Ownership";
				condition = "true";
				action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
			};
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};
			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
		};
	};

	class Air
	{
		target = "Air";
		targetType = 2;

		class Actions
		{
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};
			
			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			class RotateLeft: ExileAbstractAction
			{
				title = "Rotate Left";	
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
			};

			class RotateRight: ExileAbstractAction
			{
				title = "Rotate Right";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
			};
			class Paint: ExileAbstractAction
			{
				title = "Paint";
				condition = "(((ExileClientInteractionObject getVariable ['ExileAlreadyKnownCode','']) != '') && ((locked ExileClientInteractionObject) == 0) && ((locked ExileClientInteractionObject) != 1) || ((local ExileClientInteractionObject) && (locked ExileClientInteractionObject) == 1))";
				action = "_this spawn SM_Paint_Show";
			};
			class Loot: ExileAbstractAction       //Crash_Loot
            {
                title = "Loot Vehicle";
                condition = "(!(alive (ExileClientInteractionObject)))";
                action = "_this spawn ExileClient_object_container_pack";
            };
			class Scrap: ExileAbstractAction
			{
				title = "Recover Parts";
				condition = "true";
				action = "_this call fnc_bike_scrap";
			};
			
			class ClaimVehicle: ExileAbstractAction
			{
				title = "Claim Ownership";
				condition = "true";
				action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
			};
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && ((locked ExileClientInteractionObject) != 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
			
			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
			
			
			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};
			/*
			class Push: ExileAbstractAction
			{
				title = "Fus Ro Dah!";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
			*/
		};
	};

	class Safe
	{
		targetType = 2;
		target = "Exile_Container_Abstract_Safe";

		class Actions 
		{
			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Pack : ExileAbstractAction
			{
				title = "Pack";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_container_pack";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};
			class HackLock: ExileAbstractAction
			{
				title = "Hack Lock";
				condition = "(getNumber(missionConfigFile >> 'CfgHacking' >> 'enableHacking') isEqualTo 1) && ('Exile_Item_Laptop' in (magazines player)) && ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1) && !ExilePlayerInSafezone";
				action = "['HackLock', _this select 0] call ExileClient_action_execute";
			};
			/*class HackSafe : ExileAbstractAction <---- this might fucked up safehacking.
			{
				title = "Hack Safe";
				condition = "call ExAd_fnc_canHackSafe";
				action = "_this spawn ExAd_fnc_startHack";
			};
			class RaidSafe : ExileAbstractAction
			{
				title = "Attempt Lockpicking";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "[ExileClientInteractionObject,'safe'] execVM 'addons\HEG_Xbrm_client\functions\Xbrm_lockpick_init.sqf'";
			};
			
			class TrapSafe : ExileAbstractAction
			{
				title = "Rig With Explosives";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "ExileClientInteractionObject execVM 'addons\HEG_Xbrm_client\functions\addTrap.sqf'";
			};
			
			class ScanSafe : ExileAbstractAction
			{
				title = "Scan For Explosives";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "ExileClientInteractionObject execVM 'addons\HEG_Xbrm_client\functions\scanTrap.sqf'";
			};*/
		};
	};

	class Laptop
	{
		targetType = 2;
		target = "Exile_Construction_Laptop_Static";

		class Actions
		{
			class CameraSystem: ExileAbstractAction
			{
				title = "CCTV Access";
				condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "_this call ExileClient_gui_baseCamera_show";
			};
			class StopHack: ExileAbstractAction
			{
				title = "Interupt Hack";
				condition = "(ExileClientInteractionObject getVariable ['ExAd_HACKING_IN_PROGRESS', false])";
				action = "_this spawn ExAd_fnc_stopHack";
			};
		};
	};

	class SupplyBox
	{
		targetType = 2;
		target = "Exile_Container_SupplyBox";

		class Actions
		{
			/*class Mount: ExileAbstractAction
			{
				title = "Mount";
				condition = "(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_mount";
			};
			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_install";
			};
			class Unmount: ExileAbstractAction
			{
				title = "Unmount";
				condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_unmount";
			};*/
			// Delete the SupplyBox.
			class Delete: ExileAbstractAction
			{
				title = "Delete SupplyBox";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_container_pack";
			};
		};
	};
	
	class Drawbridge
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_DrawBridge";

		class Actions
		{
			class Lower: ExileAbstractAction
			{
				title = "Lower";
				condition = "ExileClientInteractionObject call ExileClient_object_construction_openBridgeShow";
				action = "ExileClientInteractionObject animateSource ['DrawBridge_Source', 0];";
			};
			
			class Raise: ExileAbstractAction
			{
				title = "Raise";
				condition = "((ExileClientInteractionObject animationSourcePhase 'DrawBridge_Source') < 0.5)";
				action = "ExileClientInteractionObject animateSource ['DrawBridge_Source', 2]";
			};
			class Paint: ExileAbstractAction
			{
				title = "Paint";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn SM_Paint_Show";
			};
		};
	};

	class Construction
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_Static";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Picks up the construction so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_move";
			};

			// Removes the construction.
			class Deconstruct: ExileAbstractAction
			{
				title = "Remove";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_deconstruct";
			};

			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};

			class Upgrade : ExileAbstractAction
			{
				title = "Upgrade";
				condition = "call ExileClient_object_construction_upgradeShow";
				action = "_this call ExileClient_object_construction_upgrade";
			};

			class MakeBoom : ExileAbstractAction
			{
				title = "Plant charge";
				condition = "call ExileClient_system_breaching_condition";
				action = "_this call ExileClient_system_breaching_action";
			};
			
			class Repair : ExileAbstractAction
			{
				title = "Repair";
				condition = "(!((ExileClientInteractionObject getVariable ['ExileConstructionDamage',0]) isEqualTo 0)) && (call ExileClient_util_world_isInOwnTerritory)";
				action = "_this call ExileClient_object_construction_repair";
			};
			
			class GrindLock : ExileAbstractAction
			{
				title = "Grind Lock";
				condition = "(getNumber(missionConfigFile >> 'CfgGrinding' >> 'enableGrinding') isEqualTo 1) && ('Exile_Item_Grinder' in (magazines player)) && ('Exile_Magazine_Battery' in (magazines player)) && ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1) && ((ExileClientInteractionObject animationPhase 'DoorRotation') < 0.5)";
				action = "['GrindLock', _this select 0] call ExileClient_action_execute";
			};
			class Paint: ExileAbstractAction
			{
				title = "Paint";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn SM_Paint_Show";
			};
		};
	};

	/*
		Tent, Storage crate etc.
	*/
	class Container
	{
		targetType = 2;
		target = "Exile_Container_Abstract";

		class Actions 
		{
			class Pack 
			{
				title = "Pack";
				condition = "!((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Container_SupplyBox')";
				action = "_this spawn ExileClient_object_container_pack";
			};
			// Picks up the container so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "(getNumber(configFile >> 'CfgVehicles' >> typeOf ExileClientInteractionObject >> 'exileIsLockable') isEqualTo 0) || ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_construction_move";
			};
		};
	};
	
	class Flag
	{
		targetType = 2;
		target = "Exile_Construction_Flag_Static";

		class Actions
		{
			/*
			class Manage : ExileAbstractAction
			{
				title = "Manage";
				condition = "true";
				action = "_this call ExileClient_gui_baseManagement_event_show";
			};
			*/
			class StealFlag: ExileAbstractAction
			{
				title = "Steal Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',1]) isEqualTo 0)";
				action = "['StealFlag', _this select 0] call ExileClient_action_execute";
			};
			
			class RestoreFlag: ExileAbstractAction
			{
				title = "Restore Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',0]) isEqualTo 1)";
				action = "['restoreFlagRequest', [netID ExileClientInteractionObject]] call ExileClient_system_network_send";
			};
			class HackFlag: ExileAbstractAction
            {
                title = "Hack Flag";
                condition = "(getNumber(missionConfigFile >> 'CfgFlagHacking' >> 'enableHacking') isEqualTo 1) && ('Exile_Item_Laptop' in (magazines player)) && !ExilePlayerInSafezone";
                action = "['HackFlag', _this select 0] call ExileClient_action_execute";
            };
           /* class AbandonTerritory: ExileAbstractAction
			{
			  title = "Abandon Territory";
			  condition = "((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Construction_Flag_Static' && (call ExileClient_util_world_isInOwnTerritory) && ((ExileClientInteractionObject getvariable ['ExileFlagStolen',1]) isEqualTo 0))";
			  action = "execVM 'Custom\Abandon_Flag\abandon.sqf';";
			};*/
			class AbandonTerritory: ExileAbstractAction
			{
			  title = "Abandon Territory";
			  condition = "((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Construction_Flag_Static' && (call ExileClient_util_world_isInOwnTerritory) && ((ExileClientInteractionObject getvariable ['ExileFlagStolen',1]) isEqualTo 0))";
			  action = "execVM 'abandon.sqf';";
			};
			class RemoveHeliPad : ExileAbstractAction
			{
				title = "Remove Helipad";
				condition = "(ExileClientInteractionObject call ExileClient_util_world_isInOwnTerritory)";
				action = "[ExileClientInteractionObject,'Land_HelipadCivil_F']execVM 'Custom\RMT\RMT_Remove_One_Near_Flag_Pad.sqf'";
			};
		};
	};

	class Boat 
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
			
			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};
			
			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			// Pushes a boat into look direction to move into water
			class Push: ExileAbstractAction
			{
				title = "Fus Ro Dah!";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
			class Paint: ExileAbstractAction
			{
				title = "Paint";
				condition = "(((ExileClientInteractionObject getVariable ['ExileAlreadyKnownCode','']) != '') && ((locked ExileClientInteractionObject) == 0) && ((locked ExileClientInteractionObject) != 1) || ((local ExileClientInteractionObject) && (locked ExileClientInteractionObject) == 1))";
				action = "_this spawn SM_Paint_Show";
			};
			class Loot: ExileAbstractAction       //Crash_Loot
            {
                title = "Loot Vehicle";
                condition = "(!(alive (ExileClientInteractionObject)))";
                action = "_this spawn ExileClient_object_container_pack";
            };
			class Scrap: ExileAbstractAction
			{
				title = "Scrap";
				condition = "true";
				action = "_this call fnc_bike_scrap";
			};
			class ClaimVehicle: ExileAbstractAction
			{
				title = "Claim Ownership";
				condition = "true";
				action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
			};
		};
	};

	class Bikes
	{
		targetType = 2;
		target = "Bicycle";

		class Actions
		{
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "true";
				action = "_this call ExileClient_object_vehicle_flip";
			};
			class Scrap: ExileAbstractAction
			{
				title = "Scrap";
				condition = "true";
				action = "_this call fnc_bike_scrap";
			};
			class Paint: ExileAbstractAction
			{
				title = "Paint";
				condition = "(((ExileClientInteractionObject getVariable ['ExileAlreadyKnownCode','']) != '') && ((locked ExileClientInteractionObject) == 0) && ((locked ExileClientInteractionObject) != 1) || ((local ExileClientInteractionObject) && (locked ExileClientInteractionObject) == 1))";
				action = "_this spawn SM_Paint_Show";
			};
		};
	};

	class Player 
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions 
		{
			class Free: ExileAbstractAction
			{
				title = "Free";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_free";
			};
			
			class Search: ExileAbstractAction
			{
				title = "Search Gear";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_searchGear";
			};
			class Identify: ExileAbstractAction
			{
				title = "Identify Body";
				condition = "!(alive ExileClientInteractionObject)";
				action = "_this call ExileClient_object_player_identifyBody";
			};
			/*class HideCorpse: ExileAbstractAction
			{
				title = "Hide Body";
				condition = "!(alive ExileClientInteractionObject) && ('DDR_Item_Bloodbag' isEqualTo (magazines player))";
				action = "_this call VNM_fnc_Hidebody";
			};*/
			class Revive: ExileAbstractAction
            {
                title = "Revive";
                condition = "(!(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['EnigmaRevivePermitted', true]) && (magazines player find 'Exile_Item_Defibrillator' >= 0))";
                action = "_this spawn Enigma_RevivePlyr";
            };
			
		};
	};
	
	class Animal
	{
		targetType = 2;
		target = "Exile_Animal_Abstract";

		class Actions 
		{			
			class Gut: ExileAbstractAction
			{
				title = "Gut Animal";
				condition = "!(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['CanBeGutted', false])";
				action = "['GutAnimal', ExileClientInteractionObject] call ExileClient_action_execute";
			};
		};
	};
	class Weed
    {
        targetType = 2;
        target = "DDR_Weed_Plant";

        class Actions 
        {
            class HarvestWeed: ExileAbstractAction
            {
                title = "Harvest the Weed";
                condition = "('Exile_Item_Knife' in (magazines player) && !ExilePlayerInSafezone)";
                action = "_this call DDR_fnc_Weed";
            };
        };
    };
    class Mushrooms
    {
        targetType = 2;
        target = "DDR_Mushrooms";

        class Actions 
        {
            class HarvestMushrooms: ExileAbstractAction
            {
                title = "Harvest the Mushrooms";
                condition = "('Exile_Item_Knife' in (magazines player) && !ExilePlayerInSafezone)";
                action = "_this call DDR_fnc_Mushrooms";
            };
        };
    };
    class Ore_Mining
    {
        targetType = 2;
        target = "DDR_Ore_Rock";

        class Actions 
        {
            class materials1: ExileAbstractAction
            {
                title = "Reduce raw materials";
                condition = "('DDR_Item_Pickaxe' in (magazines player) && !ExilePlayerInSafezone)";
                action = "_this call DDR_fnc_Ore_Mining";
            };
        };
    };
    class Crystal_Mining
    {
        targetType = 2;
        target = "DDR_Crystal_Rock";

        class Actions 
        {
            class materials2: ExileAbstractAction
            {
                title = "Reduce raw materials";
                condition = "('DDR_Item_Pickaxe' in (magazines player) && !ExilePlayerInSafezone)";
                action = "_this call DDR_fnc_Crystal_Mining";
            };
        };
    };
	class SM_LoadoutTrader
	{
		targetType = 2;
		target = "Exile_Trader_Equipment";
		class actions
		{
			class LoadoutTrader: ExileAbstractAction
			{
				title = "<img image='\exile_assets\texture\arsenal\backpack_ca.paa' size='1' shadow='false' />Access Loadout Trader";
				condition = "true";
				action = "[] call SM_LoadoutTrader_show";
			};
		};
	};