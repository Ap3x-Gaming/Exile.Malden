/*Turn APEX Buildings on by removing the "//" at the beginning of the line.
But be careful! People who don't have the APEX DLC can not see the Buildings! They can walk through them!!!!*/

//#define USE_APEX_Buildings 1

#ifdef USE_APEX_Buildings

#endif
class EBM_ATM: Exile_AbstractCraftingRecipe
{
	name = "EBM ATM";
	pictureItem = "EBM_ATM_Kit";
	requiredInteractionModelGroup = "Workbench";
	returnedItems[] = 
	{
		{1,"EBM_ATM_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"},
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalWire"},
		{2, "Exile_Item_DuctTape"},
		{10,"Exile_Item_MobilePhone"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "ATM";
};
class Land_Cargo_Tower_V2_F_Kit: Exile_AbstractCraftingRecipe
{
	name = "Gargo Tower";
	pictureItem = "Land_Cargo_Tower_V2_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_Cargo_Tower_V2_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{4,"Exile_Item_MobilePhone"}
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Grinder"
	};
	requiresConcreteMixer = 1;
	category = "MAX_2_ea_BASE";
};
class H_HelmetO_ViperSP_hex_F: Exile_AbstractCraftingRecipe
{
	name = "Thermal Helmet hex";
	pictureItem = "H_HelmetO_ViperSP_hex_F";
	returnedItems[] = 
	{
		{1, "H_HelmetO_ViperSP_hex_F"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalWire"},
		{4, "DDR_Item_Crystal_Purple"},
		{2, "DDR_Item_Diamond_Purple"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Laptop"
	};
	category = "Electronics";
};
class DDR_Item_Gold_Bar: Exile_AbstractCraftingRecipe
{
	name = "Gold Bar";
	pictureItem = "DDR_Item_Gold_Bar";
	returnedItems[] = 
	{
		{1, "DDR_Item_Gold_Bar"}
	};
	requiresFire = 1;
	components[] = 
	{
		{10, "DDR_Item_Gold_Ore"}
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	category = "Items";
};
class DDR_Item_Silver_Bar: Exile_AbstractCraftingRecipe
{
	name = "Silver Bar";
	pictureItem = "DDR_Item_Silver_Bar";
	returnedItems[] = 
	{
		{1, "DDR_Item_Silver_Bar"}
	};
	requiresFire = 1;
	components[] = 
	{
		{10, "DDR_Item_Silver_Ore"}
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	category = "Items";
};
class Exile_Item_MetalPole: Exile_AbstractCraftingRecipe
{
	name = "Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};
	requiresFire = 1;
	components[] = 
	{
		{4, "DDR_Item_Iron_Ore"}
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	category = "Items";
};
class Exile_Item_MetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalBoard"}
	};
	requiresFire = 1;
	components[] = 
	{
		{4, "DDR_Item_Iron_Ore"}
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	category = "Items";
};
class Exile_Item_JunkMetal: Exile_AbstractCraftingRecipe
{
	name = "Junk Metal";
	pictureItem = "Exile_Item_JunkMetal";
	returnedItems[] = 
	{
		{1, "Exile_Item_JunkMetal"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "DDR_Item_Iron_Ore"}
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	category = "Items";
};
class H_HelmetO_ViperSP_ghex_F: Exile_AbstractCraftingRecipe
{
	name = "Thermal Helmet ghex";
	pictureItem = "H_HelmetO_ViperSP_ghex_F";
	returnedItems[] = 
	{
		{1, "H_HelmetO_ViperSP_ghex_F"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalWire"},
		{4, "DDR_Item_Crystal_Purple"},
		{2, "DDR_Item_Diamond_Purple"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Laptop"
	};
	category = "Electronics";
};
class EBM_helipad2_Kit: Exile_AbstractCraftingRecipe
{
	name = "Helipad version2";
	pictureItem = "EBM_helipad2_Kit";
	returnedItems[] = 
	{
		{1,"EBM_helipad2_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "DDR_Item_Crystal_Purple"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{4, "Exile_Item_JunkMetal"},
		{4,"Exile_Item_MobilePhone"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};

class EBM_pollard: Exile_AbstractCraftingRecipe
{
	name = "Pollard";
	pictureItem = "EBM_pollard_Kit";
	returnedItems[] = 
	{
		{1,"EBM_pollard_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_ExtensionCord"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Hammer"
	};
	category = "EBM Doors";
};


class EBM_Medikit: Exile_AbstractCraftingRecipe
{
	name = "Medikit";
	pictureItem = "EBM_Medikit_Kit";
	requiredInteractionModelGroup = "Workbench";
	returnedItems[] = 
	{
		{1,"EBM_Medikit_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{10, "Exile_Item_PlasticBottleEmpty"},
		{4, "Exile_Item_MetalScrews"},
		{4, "DDR_Item_Bloodbag"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Hammer"
	};
	category = "Medical";
};

class EBM_Parksign: Exile_AbstractCraftingRecipe
{
	name = "Parksign";
	pictureItem = "EBM_Parksign_Kit";
	returnedItems[] = 
	{
		{1, "EBM_Parksign_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Signs";
};

class EBM_door_frame_Kit: Exile_AbstractCraftingRecipe
{
	name = "Doorframe";
	pictureItem = "EBM_door_frame_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "EBM_door_frame_Kit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class RwG_Furnace_Kit: Exile_AbstractCraftingRecipe
{
	name = "Fire Place";
	pictureItem = "RwG_Furnace_Kit";
	returnedItems[] = 
	{
		{1,"RwG_Furnace_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_WoodLog"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	requiresConcreteMixer = 1;
	category = "EBM Doors";
};
class RwG_Overhead_Light_Kit: Exile_AbstractCraftingRecipe
{
	name = "Overhead light";
	pictureItem = "RwG_Overhead_Light_Kit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "RwG_Overhead_Light_Kit"}
	};
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"}
	};
	category = "Lights";
};
class RwG_Anvil_Kit: Exile_AbstractCraftingRecipe
{
	name = "Anvil";
	pictureItem = "RwG_Anvil_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "RwG_Anvil_Kit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_JunkMetal"}
	};
	category = "Anvil";
};
class RwG_Elevator_Kit: Exile_AbstractCraftingRecipe
{
	name = "Elevator";
	pictureItem = "RwG_Elevator_Kit";
	returnedItems[] = 
	{
		{1,"RwG_Elevator_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "DDR_Item_Crystal_Purple"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_ConcreteFloorKit"},
		{4, "Exile_Item_ConcreteSupportKit"},
		{4, "Exile_Item_JunkMetal"},
		{4,"Exile_Item_MobilePhone"}
	};
	tools[] =
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	requiresConcreteMixer = 1;
	category = "Elevator";
};
class RwG_Workbench_Kit: Exile_AbstractCraftingRecipe
{
	name = "Show Workbench";
	pictureItem = "RwG_Workbench_Kit";
	returnedItems[] = 
	{
		{1,"RwG_Workbench_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalPole"},
		{4, "Exile_Item_JunkMetal"},
		{2,"Exile_Item_MobilePhone"}
	};
	tools[] =
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	requiresConcreteMixer = 1;
	category = "Workbench";
};
class Generator: Exile_AbstractCraftingRecipe
{
	name = "Generator";
	pictureItem = "Land_PortableGenerator_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_PortableGenerator_01_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	category = "Generator";
};

class Projector: Exile_AbstractCraftingRecipe
{
	name = "Projector";
	pictureItem = "Land_Projector_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Projector_01_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Electronics";
};

class SatelliteAntenna: Exile_AbstractCraftingRecipe
{
	name = "Satellite Antenna";
	pictureItem = "Land_SatelliteAntenna_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_SatelliteAntenna_01_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	category = "Electronics";
};

class SimpleTarget: Exile_AbstractCraftingRecipe
{
	name = "Simple Target";
	pictureItem = "Target_F_Kit";
	returnedItems[] = 
	{
		{1, "Target_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Targets";
};

class HumanTarget: Exile_AbstractCraftingRecipe
{
	name = "Human Target";
	pictureItem = "TargetBootcampHuman_F_Kit";
	returnedItems[] = 
	{
		{1, "TargetBootcampHuman_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Targets";
};

class InfAccTarget: Exile_AbstractCraftingRecipe
{
	name = "Infantry Accuracy Target";
	pictureItem = "TargetP_Inf_Acc2_F_Kit";
	returnedItems[] = 
	{
		{1, "TargetP_Inf_Acc2_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Targets";
};

class Tripodscreen_v1: Exile_AbstractCraftingRecipe
{
	name = "Tripodscreen Vertical 1";
	pictureItem = "Land_TripodScreen_01_dual_v1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TripodScreen_01_dual_v1_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_LightBulb"},
		{3, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	category = "Electronics";
};

class Tripodscreen_v2: Exile_AbstractCraftingRecipe
{
	name = "Tripodscreen Vertical 2";
	pictureItem = "Land_TripodScreen_01_dual_v2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TripodScreen_01_dual_v2_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_LightBulb"},
		{3, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	category = "Electronics";
};

class Tripodscreen_large: Exile_AbstractCraftingRecipe
{
	name = "Tripodscreen Large";
	pictureItem = "Land_TripodScreen_01_large_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TripodScreen_01_large_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	category = "Electronics";
};

class WaterpumpForest: Exile_AbstractCraftingRecipe
{
	name = "Waterpump Forest";
	pictureItem = "WaterPump_01_forest_F_Kit";
	returnedItems[] = 
	{
		{1, "WaterPump_01_forest_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	category = "Supply";
};

class ZboxCamera: Exile_AbstractCraftingRecipe
{
	name = "Zbox Camera";
	pictureItem = "Land_GamingSet_01_camera_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_GamingSet_01_camera_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Electronics";
};

class ZboxPSU: Exile_AbstractCraftingRecipe
{
	name = "Zbox Powersupply";
	pictureItem = "Land_GamingSet_01_powerSupply_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_GamingSet_01_powerSupply_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Electronics";
};

class PortableHeliLight_Yellow: Exile_AbstractCraftingRecipe
{
	name = "Portable Heli Light Yellow";
	pictureItem = "PortableHelipadLight_01_yellow_F_Kit";
	returnedItems[] = 
	{
		{1, "PortableHelipadLight_01_yellow_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Lights";
};

class PortableHeliLight_white: Exile_AbstractCraftingRecipe
{
	name = "Portable Heli Light White";
	pictureItem = "PortableHelipadLight_01_white_F_Kit";
	returnedItems[] = 
	{
		{1, "PortableHelipadLight_01_white_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Lights";
};

class PortableHeliLight_red: Exile_AbstractCraftingRecipe
{
	name = "Portable Heli Light Red";
	pictureItem = "PortableHelipadLight_01_red_F_Kit";
	returnedItems[] = 
	{
		{1, "PortableHelipadLight_01_red_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Lights";
};

class PortableHeliLight_green: Exile_AbstractCraftingRecipe
{
	name = "Portable Heli Light Green";
	pictureItem = "PortableHelipadLight_01_green_F_Kit";
	returnedItems[] = 
	{
		{1, "PortableHelipadLight_01_green_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Lights";
};

class PortableHeliLight_blue: Exile_AbstractCraftingRecipe
{
	name = "Portable Heli Light Blue";
	pictureItem = "PortableHelipadLight_01_blue_F_Kit";
	returnedItems[] = 
	{
		{1, "PortableHelipadLight_01_blue_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Lights";
};

class PortableHeliLight: Exile_AbstractCraftingRecipe
{
	name = "Portable Heli Light";
	pictureItem = "Land_PortableHelipadLight_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_PortableHelipadLight_01_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Lights";
};

class MineSign: Exile_AbstractCraftingRecipe
{
	name = "Mine Sign";
	pictureItem = "Land_Sign_Mines_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sign_Mines_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	category = "Signs";
};

class ToolTrolley2: Exile_AbstractCraftingRecipe
{
	name = "Tool Trolley 2";
	pictureItem = "Land_ToolTrolley_02_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ToolTrolley_02_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Storages";
};

class ToolTrolley1: Exile_AbstractCraftingRecipe
{
	name = "Tool Trolley 1";
	pictureItem = "Land_ToolTrolley_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ToolTrolley_01_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Storages";
};

class WoodenShelves_Khaki: Exile_AbstractCraftingRecipe
{
	name = "Wooden Shelves Khaki";
	pictureItem = "Land_ShelvesWooden_khaki_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ShelvesWooden_khaki_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_WoodLog"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	category = "Storages";
};

class WoodenShelves_blue: Exile_AbstractCraftingRecipe
{
	name = "Wooden Shelves Blue";
	pictureItem = "Land_ShelvesWooden_blue_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ShelvesWooden_blue_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_WoodLog"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	category = "Storages";
};

class WoodenShelves: Exile_AbstractCraftingRecipe
{
	name = "Wooden Shelves";
	pictureItem = "Land_ShelvesWooden_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ShelvesWooden_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_WoodLog"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	category = "Storages";
};

class Microwave: Exile_AbstractCraftingRecipe
{
	name = "Microwave";
	pictureItem = "Land_Microwave_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Microwave_01_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Electronics";
};

class MetalCase: Exile_AbstractCraftingRecipe
{
	name = "Metal Case";
	pictureItem = "Land_MetalCase_01_large_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_MetalCase_01_large_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Storages";
};

class Fridge: Exile_AbstractCraftingRecipe
{
	name = "Fridge";
	pictureItem = "Fridge_01_closed_F_Kit";
	returnedItems[] = 
	{
		{1, "Fridge_01_closed_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Storages";
};

class InfTarget: Exile_AbstractCraftingRecipe
{
	name = "Infantry Target";
	pictureItem = "TargetP_Inf_F_Kit";
	returnedItems[] = 
	{
		{1, "TargetP_Inf_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Targets";
};


class DuelingTarget: Exile_AbstractCraftingRecipe
{
	name = "Dueling Target";
	pictureItem = "Land_Target_Dueling_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Target_Dueling_01_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Targets";
};

class TapeSign: Exile_AbstractCraftingRecipe
{
	name = "Tape Sign";
	pictureItem = "TapeSign_F_Kit";
	returnedItems[] = 
	{
		{1, "TapeSign_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalPole"}
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	category = "Signs";
};
/*
class RoadCone2: Exile_AbstractCraftingRecipe
{
	name = "Road Cone 2";
	pictureItem = "RoadCone_L_F_Kit";
	returnedItems[] = 
	{
		{1, "RoadCone_L_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_WaterCanisterEmpty"}
	};
	tools[] =
	{
		"Exile_Item_Hammer"
	};
	category = "Street Stuff";
};

class RoadCone1: Exile_AbstractCraftingRecipe
{
	name = "Road Cone 1";
	pictureItem = "RoadCone_F_Kit";
	returnedItems[] = 
	{
		{1, "RoadCone_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_WaterCanisterEmpty"}
	};
	tools[] =
	{
		"Exile_Item_Hammer"
	};
	category = "Street Stuff";
};
*/
class RoadBarrier2: Exile_AbstractCraftingRecipe
{
	name = "Road Barrier 2";
	pictureItem = "RoadBarrier_small_F_Kit";
	returnedItems[] = 
	{
		{1, "RoadBarrier_small_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_WoodLog"},
		{1, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_LightBulb"}
	};
	tools[] =
	{
		"Exile_Item_Hammer"
	};
	category = "Street Stuff";
};

class RoadBarrier1: Exile_AbstractCraftingRecipe
{
	name = "Road Barrier 1";
	pictureItem = "RoadBarrier_F_Kit";
	returnedItems[] = 
	{
		{1, "RoadBarrier_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_WoodLog"},
		{1, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Hammer"
	};
	category = "Street Stuff";
};

class PlasticBarrierOrange: Exile_AbstractCraftingRecipe
{
	name = "Plastic Barrier Orange";
	pictureItem = "PlasticBarrier_03_orange_F_Kit";
	returnedItems[] = 
	{
		{1, "PlasticBarrier_03_orange_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{5, "Exile_Item_WaterCanisterEmpty"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "Street Stuff";
};

class PlasticBarrierBlue: Exile_AbstractCraftingRecipe
{
	name = "Plastic Barrier Blue";
	pictureItem = "PlasticBarrier_03_blue_F_Kit";
	returnedItems[] = 
	{
		{1, "PlasticBarrier_03_blue_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{5, "Exile_Item_WaterCanisterEmpty"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "Street Stuff";
};

class PlasticBarrierYellow: Exile_AbstractCraftingRecipe
{
	name = "Plastic Barrier Yellow";
	pictureItem = "PlasticBarrier_02_yellow_F_Kit";
	returnedItems[] = 
	{
		{1, "PlasticBarrier_02_yellow_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{5, "Exile_Item_WaterCanisterEmpty"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "Street Stuff";
};

class PlasticBarrierGrey: Exile_AbstractCraftingRecipe
{
	name = "Plastic Barrier Grey";
	pictureItem = "PlasticBarrier_02_grey_F_Kit";
	returnedItems[] = 
	{
		{1, "PlasticBarrier_02_grey_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{5, "Exile_Item_WaterCanisterEmpty"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "Street Stuff";
};

class ArrowDeskL: Exile_AbstractCraftingRecipe
{
	name = "Arrows Left";
	pictureItem = "ArrowDesk_L_F_Kit";
	returnedItems[] = 
	{
		{1, "ArrowDesk_L_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	category = "Street Stuff";
};

class ArrowDeskR: Exile_AbstractCraftingRecipe
{
	name = "Arrows Right";
	pictureItem = "ArrowDesk_R_F_Kit";
	returnedItems[] = 
	{
		{1, "ArrowDesk_R_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	category = "Street Stuff";
};

class Workbench_2_0: Exile_AbstractCraftingRecipe
{
	name = "Workbench 2.0";
	pictureItem = "Land_Workbench_01_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Land_Workbench_01_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};

class WeldingTrolley: Exile_AbstractCraftingRecipe
{
	name = "Welding Trolley";
	pictureItem = "Land_WeldingTrolley_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_WeldingTrolley_01_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"},
		{3, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "Supply";
};

class Pressurewasher: Exile_AbstractCraftingRecipe
{
	name = "Pressure Washer";
	pictureItem = "Land_PressureWasher_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_PressureWasher_01_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{3, "Exile_Item_JunkMetal"},
		{3, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "Supply";
};

class Pallettrolley: Exile_AbstractCraftingRecipe
{
	name = "Pallet Trolley";
	pictureItem = "Land_PalletTrolley_01_yellow_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_PalletTrolley_01_yellow_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{3, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Storages";
};

class EngineCrane: Exile_AbstractCraftingRecipe
{
	name = "Engine Crane";
	pictureItem = "Land_EngineCrane_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_EngineCrane_01_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{3, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Supply";
};

class DieselGroundpowerUnit: Exile_AbstractCraftingRecipe
{
	name = "Diesel Groundpower Unit";
	pictureItem = "Land_DieselGroundPowerUnit_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_DieselGroundPowerUnit_01_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalWire"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "Supply";
};

class OfficeTable: Exile_AbstractCraftingRecipe
{
	name = "Office Table";
	pictureItem = "OfficeTable_01_new_F_Kit";
	returnedItems[] = 
	{
		{1, "OfficeTable_01_new_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"},
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};

class WoodenTableLarge: Exile_AbstractCraftingRecipe
{
	name = "Wooden Table Large";
	pictureItem = "Land_WoodenTable_large_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_WoodenTable_large_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{4, "Exile_Item_WoodLog"},
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};

class WoodenTableSmall: Exile_AbstractCraftingRecipe
{
	name = "Wooden Table Small";
	pictureItem = "Land_WoodenTable_small_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_WoodenTable_small_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_WoodLog"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};

class TablePlastic: Exile_AbstractCraftingRecipe
{
	name = "Plastic Table";
	pictureItem = "Land_TablePlastic_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TablePlastic_01_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_Rope"}
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	category = "Furniture";
};

class Sunshades: Exile_AbstractCraftingRecipe
{
	name = "Sunshades";
	pictureItem = "Land_Sunshade_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sunshade_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_WoodLog"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};

class Sunshade_03: Exile_AbstractCraftingRecipe
{
	name = "Sunshade 03";
	pictureItem = "Land_Sunshade_03_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sunshade_03_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_WoodLog"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};

class Sunshade_02: Exile_AbstractCraftingRecipe
{
	name = "Sunshade 02";
	pictureItem = "Land_Sunshade_02_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sunshade_02_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_WoodLog"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};

class Sunshade_01: Exile_AbstractCraftingRecipe
{
	name = "Sunshade 01";
	pictureItem = "Land_Sunshade_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sunshade_01_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_WoodLog"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};

class Sunchairgreen: Exile_AbstractCraftingRecipe
{
	name = "Sunchair green";
	pictureItem = "Land_Sun_chair_green_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sun_chair_green_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};


class trophy_gold: Exile_AbstractCraftingRecipe
{
	name = "Trophy Gold";
	pictureItem = "Land_Trophy_01_gold_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Trophy_01_gold_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_Metalboard"},
		{4, "Exile_Item_Metalpole"}
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};	
	category = "Trophy";
};

class trophy_silver: Exile_AbstractCraftingRecipe
{
	name = "Trophy Silver";
	pictureItem = "Land_Trophy_01_silver_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Trophy_01_silver_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_Metalpole"}
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};	
	category = "Trophy";
};

class trophy_bronze: Exile_AbstractCraftingRecipe
{
	name = "Trophy Bronze";
	pictureItem = "Land_Trophy_01_bronze_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Trophy_01_bronze_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_Metalpole"}
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};	
	category = "Trophy";
};

class SleepingBag_brown: Exile_AbstractCraftingRecipe
{
	name = "Sleeping Bag Brown";
	pictureItem = "Land_Sleeping_bag_brown_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sleeping_bag_brown_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_Rope"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};	
	category = "Tents";
};

class SleepingBag_blue: Exile_AbstractCraftingRecipe
{
	name = "Sleeping Bag Blue";
	pictureItem = "Land_Sleeping_bag_blue_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sleeping_bag_blue_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_Rope"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};	
	category = "Tents";
};

class RattanTable: Exile_AbstractCraftingRecipe
{
	name = "RattanTable";
	pictureItem = "Land_RattanTable_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_RattanTable_01_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};

class RattanChair: Exile_AbstractCraftingRecipe
{
	name = "RattanChair";
	pictureItem = "Land_RattanChair_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_RattanChair_01_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};

class Printer: Exile_AbstractCraftingRecipe
{
	name = "Printer";
	pictureItem = "Land_Printer_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Printer_01_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalWire"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Electronics";
};

class PCScreen: Exile_AbstractCraftingRecipe
{
	name = "PC Screen";
	pictureItem = "Land_PCSet_01_screen_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_PCSet_01_screen_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalWire"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Electronics";
};

class PCMouse: Exile_AbstractCraftingRecipe
{
	name = "PC Mouse";
	pictureItem = "Land_PCSet_01_mouse_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_PCSet_01_mouse_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "Electronics";
};

class PCKeyboard: Exile_AbstractCraftingRecipe
{
	name = "PC Keyboard";
	pictureItem = "Land_PCSet_01_keyboard_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_PCSet_01_keyboard_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "Electronics";
};

class PCCase: Exile_AbstractCraftingRecipe
{
	name = "PC Case";
	pictureItem = "Land_PCSet_01_case_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_PCSet_01_case_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalWire"},
		{3, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers",
		"Exile_Item_Grinder"
	};
	category = "Electronics";
};

class OfficeChair: Exile_AbstractCraftingRecipe
{
	name = "Office Chair";
	pictureItem = "Land_OfficeChair_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_OfficeChair_01_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};

class OfficeCabinet: Exile_AbstractCraftingRecipe
{
	name = "Office Cabinet";
	pictureItem = "Land_OfficeCabinet_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_OfficeCabinet_01_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};

class GymRack: Exile_AbstractCraftingRecipe
{
	name = "Gym Rack";
	pictureItem = "Land_GymRack_03_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_GymRack_03_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Misc";
};

class GymBench: Exile_AbstractCraftingRecipe
{
	name = "Gym Bench";
	pictureItem = "Land_GymBench_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_GymBench_01_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Misc";
};

class ZboxController: Exile_AbstractCraftingRecipe
{
	name = "Zbox Controller";
	pictureItem = "Land_GamingSet_01_controller_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_GamingSet_01_controller_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalWire"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers",
		"Exile_Item_Grinder"
	};
	category = "Electronics";
};

class ZboxConsole: Exile_AbstractCraftingRecipe
{
	name = "Zbox Console";
	pictureItem = "Land_GamingSet_01_console_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_GamingSet_01_console_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalWire"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers",
		"Exile_Item_Grinder"
	};
	category = "Electronics";
};

class PlasticChair: Exile_AbstractCraftingRecipe
{
	name = "Plastic Chair";
	pictureItem = "Land_ChairPlastic_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ChairPlastic_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};

class FlatTV: Exile_AbstractCraftingRecipe
{
	name = "Flat TV";
	pictureItem = "Land_FlatTV_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_FlatTV_01_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalWire"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers",
		"Exile_Item_Grinder"
	};
	category = "Electronics";
};

class HuronAmmo: Exile_AbstractCraftingRecipe
{
	name = "HuronAmmo";
	pictureItem = "B_Slingload_01_Ammo_F_Kit";
	requiredInteractionModelGroup = "Workbench";
	returnedItems[] = 
	{
		{1, "B_Slingload_01_Ammo_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{4, "Exile_Magazine_Battery"},
		{2, "Land_Pallet_MilBoxes_F_Kit"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Supply";
};

class HuronFuel: Exile_AbstractCraftingRecipe
{
	name = "HuronFuel";
	pictureItem = "B_Slingload_01_fuel_F_Kit";
	requiredInteractionModelGroup = "Workbench";
	returnedItems[] = 
	{
		{1, "B_Slingload_01_fuel_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalScrews"},
		{4, "Exile_Magazine_Battery"},
		{12, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Supply";
};

class Suitcase: Exile_AbstractCraftingRecipe
{
	name = "Suitcase";
	pictureItem = "Land_Suitcase_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Suitcase_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Storages";
};

class AmmoBoxsmall: Exile_AbstractCraftingRecipe
{
	name = "Ammo Box";
	pictureItem = "Land_Ammobox_rounds_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Ammobox_rounds_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_DuctTape"}
	};
	category = "Storages";
};


/*class ResearchSmall: Exile_AbstractCraftingRecipe
{
	name = "Research Small";
	pictureItem = "Land_Research_house_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Research_house_V1_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_DuctTape"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "Buildings";
};

class ResearchBig: Exile_AbstractCraftingRecipe
{
	name = "Research Big";
	pictureItem = "Land_Research_HQ_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Research_HQ_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_DuctTape"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "Buildings";
};
*/
class PlasticCase: Exile_AbstractCraftingRecipe
{
	name = "Plastic Case";
	pictureItem = "Land_PlasticCase_01_medium_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_PlasticCase_01_medium_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{3, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_DuctTape"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "Storages";
};

/*class HouseBig: Exile_AbstractCraftingRecipe
{
	name = "House Big";
	pictureItem = "Land_i_House_Big_01_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_i_House_Big_01_V2_F_Kit"},
		{2,"Exile_Item_WaterCanisterEmpty"},
		{2,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{2, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};

class Bungalow: Exile_AbstractCraftingRecipe
{
	name = "Bungalow";
	pictureItem = "Land_i_House_Small_03_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_i_House_Small_03_V1_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};

class ATM: Exile_AbstractCraftingRecipe
{
	name = "ATM";
	pictureItem = "Land_Atm_02_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Atm_02_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"},
		{3, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalWire"},
		{4, "Exile_Item_Rope"},
		{2, "Exile_Item_DuctTape"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "Electronics";
};*/

class ConcreteMixer: Exile_AbstractCraftingRecipe
{
	name = "Concrete Mixer";
	pictureItem = "Exile_ConcreteMixer_Kit";
	returnedItems[] = 
	{
		{1, "Exile_ConcreteMixer_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"},
		{3, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalWire"},
		{2, "Exile_Item_DuctTape"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "Supply";
};

class FlagCSAT: Exile_AbstractCraftingRecipe
{
	name = "Flag CSAT";
	pictureItem = "Flag_CSAT_F_Kit";
	returnedItems[] = 
	{
		{1, "Flag_CSAT_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_DuctTape"}
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	category = "Signs";
};

class GarbageContainer: Exile_AbstractCraftingRecipe
{
	name = "Garbage Container";
	pictureItem = "Land_GarbageContainer_closed_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_GarbageContainer_closed_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Storages";
};

class MetalRack4Layers: Exile_AbstractCraftingRecipe
{
	name = "Metal Rack 4 Layers";
	pictureItem = "Land_Metal_rack_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Metal_rack_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Storages";
};

class WaterSink: Exile_AbstractCraftingRecipe
{
	name = "Water Sink";
	pictureItem = "Land_Sink_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sink_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Supply";
};
/*
class PavementWideCorner: Exile_AbstractCraftingRecipe
{
	name = "Pavement Wide Corner";
	pictureItem = "Land_Pavement_wide_corner_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pavement_wide_corner_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Street Stuff";
};

class PavementWide: Exile_AbstractCraftingRecipe
{
	name = "Pavement Wide";
	pictureItem = "Land_Pavement_wide_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pavement_wide_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Street Stuff";
};

class PavementNarrowCorner: Exile_AbstractCraftingRecipe
{
	name = "Pavement Narrow Corner";
	pictureItem = "Land_Pavement_narrow_corner_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pavement_narrow_corner_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	
	category = "Street Stuff";
};

class PavementNarrow: Exile_AbstractCraftingRecipe
{
	name = "Pavement Narrow";
	pictureItem = "Land_Pavement_narrow_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pavement_narrow_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Street Stuff";
};
*/
class AltisMap: Exile_AbstractCraftingRecipe
{
	name = "Altis Map";
	pictureItem = "MapBoard_altis_F_Kit";
	returnedItems[] = 
	{
		{1, "MapBoard_altis_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Handsaw"
	};
	category = "Signs";
};

class CampingTable: Exile_AbstractCraftingRecipe
{
	name = "Camping Table";
	pictureItem = "Land_CampingTable_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CampingTable_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};

class CampingLight: Exile_AbstractCraftingRecipe
{
	name = "Campinglight";
	pictureItem = "Land_Camping_Light_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Camping_Light_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Lights";
};

class CampingChairV2: Exile_AbstractCraftingRecipe
{
	name = "Camping Chair V2";
	pictureItem = "Land_CampingChair_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CampingChair_V2_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	
	category = "Furniture";
};

class CampingChairV1: Exile_AbstractCraftingRecipe
{
	name = "Camping Chair V1";
	pictureItem = "Land_CampingChair_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CampingChair_V1_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};
/*
class SmallStone2: Exile_AbstractCraftingRecipe
{
	name = "Small Stone 2";
	pictureItem = "Land_Small_Stone_02_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Small_Stone_02_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	requiresConcreteMixer = 1;
	
	category = "Misc";
};
*/
class SolarPanel2: Exile_AbstractCraftingRecipe
{
	name = "Solar Panel 2";
	pictureItem = "Land_spp_Panel_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_spp_Panel_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};	
	category = "Electronics";
};

class SolarPanel: Exile_AbstractCraftingRecipe
{
	name = "Solar Panel";
	pictureItem = "Land_SolarPanel_2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_SolarPanel_2_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};	
	category = "Electronics";
};

class SleepingBag: Exile_AbstractCraftingRecipe
{
	name = "Sleeping Bag";
	pictureItem = "Land_Sleeping_bag_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sleeping_bag_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_Rope"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};	
	category = "Tents";
};

class SharpStone2: Exile_AbstractCraftingRecipe
{
	name = "Sharp Stone 2";
	pictureItem = "Land_SharpStone_02_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_SharpStone_02_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};	
	requiresConcreteMixer = 1;
	category = "Misc";
};

class Bush: Exile_AbstractCraftingRecipe
{
	name = "Bush";
	pictureItem = "Exile_Plant_GreenBush_Kit";
	returnedItems[] = 
	{
		{1, "Exile_Plant_GreenBush_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{5, "Exile_Item_Woodlog"}
	};
	
	tools[] =
	{
		"Exile_Item_Pliers"
	};	
	category = "Misc";
};

class TransmissionTower: Exile_AbstractCraftingRecipe
{
	name = "Transmission Tower";
	pictureItem = "Land_TTowerSmall_1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TTowerSmall_1_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};	
	category = "Electronics";
};

class SignUnexplodedAmmo: Exile_AbstractCraftingRecipe
{
	name = "Unexploded Ammo Sign";
	pictureItem = "Land_Sign_WarningUnexplodedAmmo_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sign_WarningUnexplodedAmmo_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Screwdriver"
	};	
	category = "Signs";
};

/*class CastleTower: Exile_AbstractCraftingRecipe
{
	name = "Castle Tower";
	pictureItem = "Land_Castle_01_tower_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Castle_01_tower_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};	
	requiresConcreteMixer = 1;
	category = "Buildings";
};
*/
class BeachBooth: Exile_AbstractCraftingRecipe
{
	name = "Beach Booth";
	pictureItem = "Land_BeachBooth_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BeachBooth_01_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_Woodlog"},
		{1, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};	
	category = "Buildings";
};

/*class Barracks: Exile_AbstractCraftingRecipe
{
	name = "Barracks";
	pictureItem = "Land_i_Barracks_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_i_Barracks_V1_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};

class AirportTower: Exile_AbstractCraftingRecipe
{
	name = "Airport Tower";
	pictureItem = "Land_Airport_Tower_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Airport_Tower_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_Woodlog"},
		{2, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};
*/
class Shabbylamp: Exile_AbstractCraftingRecipe
{
	name = "Shabby Lamp";
	pictureItem = "Land_LampShabby_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_LampShabby_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{8, "Exile_Item_Woodlog"},
		{2, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_LightBulb"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Handsaw"
	};
	category = "Lights";
};

class Sunshade: Exile_AbstractCraftingRecipe
{
	name = "Sunshade";
	pictureItem = "Land_Sunshade_04_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sunshade_04_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Woodlog"},
		{1, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};

class Sunchair: Exile_AbstractCraftingRecipe
{
	name = "Sunchair";
	pictureItem = "Land_Sun_chair_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sun_chair_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Woodlog"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};
/*
class MetalShed: Exile_AbstractCraftingRecipe
{
	name = "Metal Shed";
	pictureItem = "Land_Metal_Shed_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Metal_Shed_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_Woodlog"},
		{4, "Exile_Item_MetalWire"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "Buildings";
};

/*class SolarTower: Exile_AbstractCraftingRecipe
{
	name = "Solar Tower";
	pictureItem = "Land_spp_Tower_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_spp_Tower_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_Cement"},
		{4, "Exile_Item_LightBulb"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
		"Exile_Item_Grinder"
	};
	category = "Buildings";
};

class AirplaneHangar: Exile_AbstractCraftingRecipe
{
	name = "Airplane Hangar";
	pictureItem = "Land_Hangar_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Hangar_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalWire"},
		{4, "Exile_Item_DuctTape"}
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Buildings";
};

class BigDome: Exile_AbstractCraftingRecipe
{
	name = "Big Dome";
	pictureItem = "Land_Dome_Big_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Dome_Big_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalWire"},
		{4, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Buildings";
};
*/
class StreetLamp: Exile_AbstractCraftingRecipe
{
	name = "Street Lamp";
	pictureItem = "Land_LampStreet_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_LampStreet_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_LightBulb"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Lights";
};

/*class TavernMiddle: Exile_AbstractCraftingRecipe
{
	name = "Tavern middle";
	pictureItem = "Land_i_Addon_03mid_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_i_Addon_03mid_V1_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{5, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Buildings";
};

class Tavern: Exile_AbstractCraftingRecipe
{
	name = "Tavern";
	pictureItem = "Land_i_Addon_03_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_i_Addon_03_V1_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{5, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	
	category = "Buildings";
};

class SeaWall: Exile_AbstractCraftingRecipe
{
	name = "Sea Wall";
	pictureItem = "Land_Sea_Wall_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sea_Wall_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Misc";
};

class Industryfence3pts: Exile_AbstractCraftingRecipe
{
	name = "Industryfence 3pts";
	pictureItem = "Land_IndFnc_9_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_IndFnc_9_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class Industryfence: Exile_AbstractCraftingRecipe
{
	name = "Industryfence";
	pictureItem = "Land_IndFnc_3_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_IndFnc_3_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};	

class CargoContainerSmall: Exile_AbstractCraftingRecipe
{
	name = "Cargo Container Small";
	pictureItem = "Land_CargoBox_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CargoBox_V1_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Storages";
};	

/*class BlockConcrete: Exile_AbstractCraftingRecipe
{
	name = "Concrete Block";
	pictureItem = "BlockConcrete_F_Kit";
	returnedItems[] = 
	{
		{1, "BlockConcrete_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Misc";
};	
*/
class Chair: Exile_AbstractCraftingRecipe
{
	name = "Chair";
	pictureItem = "Land_ChairWood_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ChairWood_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};	

class Toiletbox: Exile_AbstractCraftingRecipe
{
	name = "Toiletbox";
	pictureItem = "Land_ToiletBox_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ToiletBox_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Misc";
};	
		
class Table: Exile_AbstractCraftingRecipe
{
	name = "Table";
	pictureItem = "Land_TableDesk_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TableDesk_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};			

class Slumplane: Exile_AbstractCraftingRecipe
{
	name = "Slumplane";
	pictureItem = "Land_Cargo_addon02_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo_addon02_V2_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{4, "Exile_Item_Woodlog"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};	
	category = "Tents";
};		

class Floodlightdouble: Exile_AbstractCraftingRecipe
{
	name = "Floodlight double";
	pictureItem = "Land_PortableLight_double_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_PortableLight_double_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{6, "Exile_Item_LightBulb"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};	
	category = "Lights";
};
/*
class CncWallSmall8m: Exile_AbstractCraftingRecipe
{
	name = "Small concrete wall 8m";
	pictureItem = "Land_Concrete_SmallWall_8m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Concrete_SmallWall_8m_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class CncWallSmall4m: Exile_AbstractCraftingRecipe
{
	name = "Small concrete wall 4m";
	pictureItem = "Land_Concrete_SmallWall_4m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Concrete_SmallWall_4m_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};
*/
class MilitaryVehicle: Exile_AbstractCraftingRecipe
{
	name = "Military Vehicle Sign";
	pictureItem = "Land_Sign_WarningMilitaryVehicles_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sign_WarningMilitaryVehicles_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Signs";
};

class MilSignSmall: Exile_AbstractCraftingRecipe
{
	name = "Military Sign Small";
	pictureItem = "Land_Sign_WarningMilAreaSmall_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sign_WarningMilAreaSmall_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Signs";
};

class Watersource: Exile_AbstractCraftingRecipe
{
	name = "Watersource";
	pictureItem = "Land_Water_source_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Water_source_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Supply";
};

class Airportlamp: Exile_AbstractCraftingRecipe
{
	name = "Airportlamp";
	pictureItem = "Land_LampAirport_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_LampAirport_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_ExtensionCord"},
		{4, "Exile_Item_LightBulb"},
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	category = "Lights";
};

class LampHalogen: Exile_AbstractCraftingRecipe
{
	name = "Halogen Base Lamp";
	pictureItem = "Land_LampHalogen_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_LampHalogen_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{10, "Exile_Item_LightBulb"},
		{5, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	category = "Lights";
};

class oven: Exile_AbstractCraftingRecipe
{
	name = "oven";
	pictureItem = "EBM_oven_Kit";
	returnedItems[] = 
	{
		{1, "EBM_oven_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Buildings";
};


/*class CargoHouse: Exile_AbstractCraftingRecipe
{
	name = "Military Cargo House";
	pictureItem = "Land_Cargo_House_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo_House_V2_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_JunkMetal"},
		{6, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Buildings";
};

class BagBunkerBig: Exile_AbstractCraftingRecipe
{
	name = "Bag Bunker Big";
	pictureItem = "Land_BagBunker_Large_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagBunker_Large_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_Sand"},
		{5, "Exile_Item_MetalWire"},
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "Buildings";
};
*/
class Pumpstation: Exile_AbstractCraftingRecipe
{
	name = "Pumpstation";
	pictureItem = "Land_FuelStation_Feed_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_FuelStation_Feed_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_WaterBarrelKit"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Supply";
};

class MetalShelf: Exile_AbstractCraftingRecipe
{
	name = "Metal Shelf";
	pictureItem = "Land_ShelvesMetal_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ShelvesMetal_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_WoodPlank"},
		{5, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Storages";
};

class MilitaryArea: Exile_AbstractCraftingRecipe
{
	name = "Military Area";
	pictureItem = "Land_Sign_WarningMilitaryArea_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sign_WarningMilitaryArea_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Signs";
};


class Icebox: Exile_AbstractCraftingRecipe
{
	name = "Icebox";
	pictureItem = "Land_Icebox_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Icebox_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{10, "Exile_Item_PlasticBottleEmpty"},
		{1, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Storages";
};

class Rack: Exile_AbstractCraftingRecipe
{
	name = "A Shelf";
	pictureItem = "Land_Rack_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Rack_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Storages";
};

class HeliPad: Exile_AbstractCraftingRecipe
{
	name = "Helipad";
	pictureItem = "Land_HelipadCivil_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_HelipadCivil_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_Cement"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	category = "Buildings";
};

class BagBunkerSmall: Exile_AbstractCraftingRecipe
{
	name = "Bag Bunker Small";
	pictureItem = "Land_BagBunker_Small_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagBunker_Small_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_Cement"},
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};

class MetalWoodenRack: Exile_AbstractCraftingRecipe
{
	name = "Metal Wooden Shelf";
	pictureItem = "Land_Metal_wooden_rack_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Metal_wooden_rack_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Storages";
};

class Ammobox: Exile_AbstractCraftingRecipe
{
	name = "Ammobox";
	pictureItem = "Land_Pallet_MilBoxes_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pallet_MilBoxes_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_StorageCrateKit"},
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Foolbox"
	};
	category = "Storages";
};

class Watercooler: Exile_AbstractCraftingRecipe
{
	name = "Water Cooler";
	pictureItem = "Land_WaterCooler_01_new_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_WaterCooler_01_new_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_WaterBarrelKit"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Supply";
};
