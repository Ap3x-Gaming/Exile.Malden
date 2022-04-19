class CfgTraders
{
	/**
	 * Weapons, scopes, silencers, ammo
	 */
class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"Pistols",
			"SubMachineGuns",
			"AssaultRifles",
			"Shotguns",
			"Ammunition",
			"PointerAttachments",
			"BipodAttachments",
			//"MuzzleAttachments",
			"OpticAttachments",
			"CUP_Weapons_AMMO_A1",
			"CUP_Weapons_AMMO_S1",
			"CUP_Weapons_AMMO_SMG1",
			"CUP_Weapons_AMMO_LMG1",
			"CUP_Weapons_AMMO_P1",
			"CUP_Weapons_AMMO_SH1",
			//"CUP_Weapons_AMMO_RL1",
			"CUP_Weapons_Attachment_C1",
			"CUP_Weapons_Attachment_S1",
			"CUP_Weapons_Attachment_S3"
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] = 
		{
			"GhillieSuits",
			"VRSuits",
			"Ammunition",
			//"lagoAMMO",
			"Flaressmokes",
			"LightMachineGuns",
			"SniperRifles",
			//"lagoGUN",
			"PointerAttachments",
			"BipodAttachments",
			//"MuzzleAttachments",
			"OpticAttachments",
			"Toolbelt",
			"PilotStuff",
			"SWAT",
			"Diving",
			"Special",
			"Explosives",
			"NVG",
			"Toolbelt",
			"CUP_Weapons_GL1",
			//"CUP_Weapons_RL1",
			"CUP_Weapons_AMMO_A1",
			"CUP_Weapons_AMMO_S1",
			"CUP_Weapons_AMMO_SMG1",
			"CUP_Weapons_AMMO_LMG1",
			"CUP_Weapons_AMMO_P1",
			"CUP_Weapons_AMMO_SH1",
			//"CUP_Weapons_AMMO_RL1",
			"CUP_Weapons_Attachment_C1",
			"CUP_Weapons_Attachment_S1",
			"CUP_Weapons_Attachment_S3"
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{	
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Uniforms",
			"racegear",
			"Vests",
			"Backpacks",
			"Headgear",
			"Glasses",
			"Toolbelt"
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Drinks",
			"FirstAid"
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			"BuildingStuff",
			"Tools",
			"ESPTools",
			"Matches",
			"Toolbelt",
			"CUP_Items_1"
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "Unarmed Vehicle Trader";
		showWeaponFilter = 0;
		categories[] = 
		{
			"CarTrucks",
			"Moter",
			"CUP_UNARM_LADA",
			"CUP_UNARM_SKODA",
			"CUP_UNARM_VOLHA",
			"CUP_UNARM_HILUX",
			//"CUP_UNARM_LR",
			"CUP_UNARM_Quilin",
			"CUP_UNARM_JEEP",
			"CUP_UNARM_FENNEK",
			"CUP_UNARM_VAN",
			"CUP_UNARM_GOLF",
			"CUP_UNARM_Datsun",
			"CUP_UNARM_IKARUS",
			"CUP_UNARM_SUV",
			"CUP_UNARM_TRACTOR",
			"CUP_UNARM_UAZ",
			"CUP_UNARM_Trucks",
			"CUP_UNARM_Military",
			"CUP_UNARM_Refuel",
			"CUP_UNARM_Reammo",
			"CUP_UNARM_Repair",
			"CUP_BIKE",
			"CUP_MED_Vehile",
			"foxtruck",
			"foxvehicle",
			"Vehicle_Ivory"
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "Aicraft Trader";
		showWeaponFilter = 0;
		categories[] = 
		{
			"UnarmPlanes",
			"Armedplanes",
			"UnarmedEC635",
			"Pook",
			"Mozzie",
			"Helicopter1",
			"CUP_UNARM_Helicopter_VIV",
			"CUP_UNARM_Helicopter",
			"CUP_UNARM_LIFT_Helicopter",
			"CUP_MED_Helicopter",
			"CUP_UNARM_Plane",
			"CUP_UNARM_VIV_Plane",
			"CUP_ARM_Plane",
			"Hummingbird",
			"ArmedHeliAT",
			"CUP_ARM_Helicopter",
			"CUP_ARM_Helicopter_VIV"		
		};
	};

	/**
	 * Sells ships and boats
	 */ 
	class Exile_Trader_Boat
	{
		name = "Boat Trader";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats",
			"ArmedBoats",
			"CUP_BOAT_LC",
			"CUP_BOAT",
		};
	};

	class Exile_Trader_Diving
	{
		name = "Scuba Trader";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Diving",
			
		};
	};
	/**
	 * Sells Community Items
	 */ 
	class Exile_Trader_CommunityCustoms
	{
		name = "Armed Vehicle";
		showWeaponFilter = 0;
		categories[] = 
		{
			"TanksLight",
			"Reammo",
			"bigstorage",
			"CarTrucks",
			"Moter",
			"CUP_ARM_MTLB",
			"CUP_ARM_Coyote",
			"CUP_ARM_hilux",
			"CUP_ARM_Jackal",
			"CUP_ARM_Quilin",
			"CUP_ARM_Mastiff",
			"CUP_ARM_Hunter",
			"CUP_ARM_Jeep",
			"CUP_ARM_Ridgback",
			"CUP_ARM_M163_Chaingun",
			"CUP_ARM_Fennek",
			"CUP_ARM_Wolfhound",
			"CUP_ARM_BTR",
			"CUP_ARM_AAVP",
			"CUP_ARM_M113",
			"CUP_ARM_BRDM2",
			"CUP_ARM_Dingo",
			"CUP_ARM_HMMWV",
			"CUP_ARM_LAV",
			"CUP_ARM_Landrover",
			"CUP_ARM_RG31",
			"CUP_ARM_Stryker",
			"CUP_ARM_M1165",
			"CUP_ARM_Vodnik",
			"CUP_ARM_Bulldog",
			"CUP_ARM_Datsun",
			"CUP_ARM_SUV",
			"CUP_ARM_UAZ",
			"CUP_ARM_Ural_ZU23",
			"CUP_TANK"
		};
	};

	class Exile_Trader_CommunityCustoms2
	{
		name = "Unarmed Aircraft Trader";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Pook",
			"Mozzie",
			"Hummingbird"
			
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "Armed Aicraft Trader";
		showWeaponFilter = 0;
		categories[] = 
		{
			"ArmedHeliAT",
			"Pook",
			"Mozzie",
			"Hummingbird"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "Matches Trader";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Matches"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "Super Sport Trader";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Matches"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "Law Enforcement CARS";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Matches"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "WholeSaler";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			"BuildingStuff",
			"Tools",
			"ESPTools",
			"Matches"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "Vehicle Parts Trader";
		showWeaponFilter = 0;
		categories[] = 
		{
			"VehicleParts"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "Medical Supply";
		showWeaponFilter = 0;
		categories[] = 
		{
			"FirstAid"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};
};