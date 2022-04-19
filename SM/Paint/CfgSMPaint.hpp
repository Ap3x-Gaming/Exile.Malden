class CfgSMPaint
{
	class Settings
	{
		//Price it cost for RGB colors
		rgbPrice = 0;

		//Price it cost for HEX color.
		hexPrice = 0;

		//Only people with this UID can access the paint menu...
		UIDS[] = {//"76561198091908580",		// itsDutch
				//"76561198022469126",		// Sp33dM4n
				//"76561199013760939",		// Sp33dman second acount
				//"76561198857960310",		// Heretic 
				//"76561198017759061",		// its eagle
				//"76561198360583340",		// Nathan wood 
				//"76561198035619120",		// Dirty Henk 
				//"76561198060294593",		// StokeMage
				//"76561198352860637",		// Tio_Tino
				//"76561198342670152",		// CPT_M.Swaggers
				//"76561198129129728",		// Mittens
				//"76561198062714561",		// Viper.exe
				//"76561198062859824",		// Jacek
				//"76561197990845645",		// Caino
				//"76561198035118496",		// Rippchen71 
				//"76561197979739637",		// Achelos
				//"76561198093547800",		// Hamof
				//"76561198004308047",		// Pere-Ben
				//"76561198016755765",		// Mr.Brown
				//"76561198108936597",		// Taffy
				//"76561197999334241",		// eetul
				//"76561198151078461",		// Ghost
				//"76561198015423137",		// ciki
				//"76561198865592777",		// toy
				//"76561198074891653"			// RDW TheDuke
				}; //Leave empty for everyone
	};
	class Textures
	{
		/*
			{"Name", Price, {"Layer 1","Layer 2","Layer 3"}, {UID}}
			{"Name", Price, "Texture", {UID}}

			Name = Name of the texture to be displayed.
			Price = Price of poptabs the texture cost.
			Texture = texture to be applied, will be listed on all layers.
			If you supply an array of textures, the textures will be added to the corresponding layer.
			To make it so the Texture does not show up on a layer, make it a empty string ( "" ):
			{"","Layer 2","Layer 3"}
			UID - Only players with this UID are allowed to use it.
		*/
		All[]=
		{
			{"Camo 01", 0, "SM\Paint\textures\camo01_co.paa", {}},
			{"Camo 02", 0, "SM\Paint\textures\camo02_co.paa", {}},
			{"Camo 03", 0, "SM\Paint\textures\camo03_co.paa", {}},
			{"Camo 04", 0, "SM\Paint\textures\camo04_co.paa", {}},
			{"Camo 05", 0, "SM\Paint\textures\camo05_co.paa", {}},
			{"Camo 06", 0, "SM\Paint\textures\camo06_co.paa", {}},
			{"Camo 07", 0, "SM\Paint\textures\camo07_co.paa", {}},
			{"Camo 08", 0, "SM\Paint\textures\camo08_co.paa", {}},
			{"Camo 09", 0, "SM\Paint\textures\camo09_co.paa", {}},
			{"Camo 10", 0, "\ddr_textures\texture\camo\camo1.paa"},
			{"Camo 11", 0, "\ddr_textures\texture\camo\camo2.paa"},
			{"Camo 12", 0, "\ddr_textures\texture\camo\camo3.paa"},
			{"Camo Army 13", 0, "\ddr_textures\texture\camo\bundeswehrcamo1.paa"},
			{"Camo Army 14", 0, "\ddr_textures\texture\camo\bundeswehrcamo2.paa"},
			{"Camo Army 15", 0, "\ddr_textures\texture\camo\bundeswehrcamo3.paa"},
			{"Camo Army 16", 0, "\ddr_textures\texture\camo\bundeswehrcamo4.paa"},
			{"Camo 17", 0, "\ddr_textures\texture\camo\camo.paa"},
			{"Camo camopink 18", 0, "\ddr_textures\texture\camo\camopink.paa"},
			{"Camo desertcamo 19", 0, "\ddr_textures\texture\camo\desertcamo.paa"},
			{"Camo junglecamo 20", 0, "\ddr_textures\texture\camo\junglecamo.paa"},
			{"Camo kryptekcamo 21", 0, "\ddr_textures\texture\camo\kryptekcamo.paa"},
			{"Camo marijuanacamo 22", 0, "\ddr_textures\texture\camo\marijuanacamo.paa"},
			{"Camo multicamo 23", 0, "\ddr_textures\texture\camo\multicamo.paa"},
			{"Camo realtree 24", 0, "\ddr_textures\texture\camo\realtree.paa"},
			{"Camo kryptekcamo1 25", 0, "\ddr_textures\texture\camo\kryptekcamo1.paa"},
			{"Brick 26", 0, "\ddr_textures\texture\bricks\brick1.paa"},
			{"Brick 27", 0, "\ddr_textures\texture\bricks\brick2.paa"},
			{"Brick 28", 0, "\ddr_textures\texture\bricks\brick3.paa"},
			{"Brick 29", 0, "\ddr_textures\texture\bricks\brick4.paa"},
			{"Brick 30", 0, "\ddr_textures\texture\bricks\brick5.paa"},
			{"Brick 31", 0, "\ddr_textures\texture\bricks\brick6.paa"},
			{"Brick 32", 0, "\ddr_textures\texture\bricks\brick7.paa"},
			{"wood 33", 0, "\ddr_textures\texture\wood\wood1.paa"},
			{"wood 34", 0, "\ddr_textures\texture\wood\wood2.paa"},
			{"wood 35", 0, "\ddr_textures\texture\wood\wood3.paa"},
			{"wood 36", 0, "\ddr_textures\texture\wood\wood4.paa"},
			{"circusstripes 37", 0, "\ddr_textures\texture\outer\circusstripes.paa"},
			{"lava 38", 0, "\ddr_textures\texture\outer\lava.paa"},
			{"Ziegel 39", 0, "\ddr_textures\texture\ziegel\dachziegel.paa"},
			{"graffiti 40", 0, "\ddr_textures\texture\graffiti\graffiti1.paa"},
			{"graffiti 41", 0, "\ddr_textures\texture\graffiti\graffiti2.paa"},
			{"outer blue circles 42", 0, "\ddr_textures\texture\outer\bluecircles.paa"},
			{"outer trip 43", 0, "\ddr_textures\texture\outer\trip.paa"},
			{"outer 45", 0, "\ddr_textures\texture\outer\muster1.paa"},
			{"outer 46", 0, "\ddr_textures\texture\outer\muster2.paa"},
			{"outer 47", 0, "\ddr_textures\texture\outer\muster3.paa"},
			{"outer 48", 0, "\ddr_textures\texture\outer\muster4.paa"},
			{"outer 49", 0, "\ddr_textures\texture\outer\muster5.paa"},
			{"outer 50", 0, "\ddr_textures\texture\outer\muster6.paa"},
			{"outer 51", 0, "\ddr_textures\texture\outer\muster7.paa"},
			{"outer 52", 0, "\ddr_textures\texture\outer\muster8.paa"},
			{"outer 53", 0, "\ddr_textures\texture\outer\muster9.paa"},
			{"outer 54", 0, "\ddr_textures\texture\outer\muster10.paa"},
			{"outer 55", 0, "\ddr_textures\texture\outer\muster11.paa"},
			{"outer 56", 0, "\ddr_textures\texture\outer\muster12.paa"},
			{"outer 57", 0, "\ddr_textures\texture\outer\muster13.paa"},
			{"outer 58", 0, "\ddr_textures\texture\outer\muster14.paa"},
			{"outer 59", 0, "\ddr_textures\texture\outer\muster15.paa"},
			{"outer 60", 0, "\ddr_textures\texture\outer\muster16.paa"},
			{"outer 61", 0, "\ddr_textures\texture\outer\muster17.paa"},
			{"floor asphalt 62", 0, "\ddr_textures\texture\floor\floorasphalt1.paa"},
			{"floor asphalt 63", 0, "\ddr_textures\texture\floor\floorasphalt2.paa"},
			{"floor asphalt 64", 0, "\ddr_textures\texture\floor\floorasphalt3.paa"},
			{"floor asphalt 65", 0, "\ddr_textures\texture\floor\floorasphalt4.paa"},
			{"floor asphalt 66", 0, "\ddr_textures\texture\floor\floorasphalt5.paa"},
			{"floor asphalt 67", 0, "\ddr_textures\texture\floor\floorasphalt6.paa"},
			{"floor asphalt 68", 0, "\ddr_textures\texture\floor\floorasphalt7.paa"},
			{"floor asphalt 69", 0, "\ddr_textures\texture\floor\floorasphalt8.paa"},
			{"floor asphalt 70", 0, "\ddr_textures\texture\floor\floorasphalt9.paa"},
			{"floor asphalt 71", 0, "\ddr_textures\texture\floor\floorasphalt10.paa"},
			{"floor asphalt 72", 0, "\ddr_textures\texture\floor\floorasphalt11.paa"},
			{"floor Grass 73", 0, "\ddr_textures\texture\floor\floorgrass1.paa"},
			{"floor Grass 74", 0, "\ddr_textures\texture\floor\floorgrass2.paa"},
			{"floor Grass 75", 0, "\ddr_textures\texture\floor\floorgrass3.paa"},
			{"floor Grass 76", 0, "\ddr_textures\texture\floor\floorgrass4.paa"},
			{"floor Grass 77", 0, "\ddr_textures\texture\floor\floorgrass5.paa"},
			{"floor Grass 78", 0, "\ddr_textures\texture\floor\floorgrass6.paa"},
			{"floor Grass 79", 0, "\ddr_textures\texture\floor\floorgrass7.paa"},
			{"floor Grass 80", 0, "\ddr_textures\texture\floor\floorgrass8.paa"},
			{"floor Grass 81", 0, "\ddr_textures\texture\floor\floorgrass9.paa"},
			{"floor Grass 82", 0, "\ddr_textures\texture\floor\floorgrass10.paa"},
			{"floor metal 83", 0, "\ddr_textures\texture\floor\floormetal1.paa"},
			{"floor sand 84", 0, "\ddr_textures\texture\floor\floorsand1.paa"},
			{"floor sand 85", 0, "\ddr_textures\texture\floor\floorsand2.paa"},
			{"floor sand 86", 0, "\ddr_textures\texture\floor\floorsand3.paa"},
			{"floor sand 87", 0, "\ddr_textures\texture\floor\floorsand4.paa"},
			{"floor wood 88", 0, "\ddr_textures\texture\floor\floorwood1.paa"},
			{"floor wood 89", 0, "\ddr_textures\texture\floor\floorwood2.paa"},
			{"Metal 90", 0, "\ddr_textures\texture\metal\metal1.paa"},
			{"Metal 91", 0, "\ddr_textures\texture\metal\metal2.paa"},
			{"Metal 92", 0, "\ddr_textures\texture\metal\metal3.paa"},
			{"Metal 93", 0, "\ddr_textures\texture\metal\metal4.paa"},
			{"Metal 94", 0, "\ddr_textures\texture\metal\metal5.paa"},
			{"Metal 95", 0, "\ddr_textures\texture\metal\metal6.paa"},
			{"Metal 96", 0, "\ddr_textures\texture\metal\metal7.paa"},
			{"mossystones 97", 0, "\ddr_textures\texture\mossystones\mossystones1.paa"},
			{"mossystones 98", 0, "\ddr_textures\texture\mossystones\mossystones2.paa"},
			{"mossystones 99", 0, "\ddr_textures\texture\mossystones\mossystones3.paa"},
			{"mossystones 100", 0, "\ddr_textures\texture\mossystones\mossystones4.paa"},
			{"mossystones 101", 0, "\ddr_textures\texture\mossystones\mossystones5.paa"},
			{"mossystones 102", 0, "\ddr_textures\texture\mossystones\mossystones6.paa"},
			{"mossystones 103", 0, "\ddr_textures\texture\mossystones\mossystones7.paa"},
			{"mossystones 104", 0, "\ddr_textures\texture\mossystones\mossystones8.paa"},
			{"mossystones 105", 0, "\ddr_textures\texture\mossystones\mossystones9.paa"},
			{"mossystones 106", 0, "\ddr_textures\texture\mossystones\mossystones10.paa"},
			{"mossystones 107", 0, "\ddr_textures\texture\mossystones\mossystones11.paa"},
			{"mossystones 108", 0, "\ddr_textures\texture\mossystones\mossystones12.paa"},
			{"concrete 109", 0, "\ddr_textures\texture\concrete\concrete1.paa"},
			{"concrete 110", 0, "\ddr_textures\texture\concrete\concrete2.paa"},
			{"concrete 111", 0, "\ddr_textures\texture\concrete\concrete3.paa"},
			{"concrete 112", 0, "\ddr_textures\texture\concrete\concrete4.paa"},
			{"concrete 113", 0, "\ddr_textures\texture\concrete\concrete5.paa"},
			{"concrete 114", 0, "\ddr_textures\texture\concrete\concrete6.paa"},
			{"concrete 115", 0, "\ddr_textures\texture\concrete\concrete7.paa"},
			{"concrete 116", 0, "\ddr_textures\texture\concrete\concrete8.paa"},
			{"concrete 117", 0, "\ddr_textures\texture\concrete\concrete9.paa"},
			{"concrete 118", 0, "\ddr_textures\texture\concrete\concrete10.paa"},
			{"concrete 119", 0, "\ddr_textures\texture\concrete\concrete11.paa"},
			{"concrete 120", 0, "\ddr_textures\texture\concrete\concrete12.paa"},
			{"concrete 121", 0, "\ddr_textures\texture\concrete\concrete13.paa"},
			{"concrete 122", 0, "\ddr_textures\texture\concrete\concrete14.paa"},
			{"concrete 123", 0, "\ddr_textures\texture\concrete\concrete15.paa"},
			{"concrete 124", 0, "\ddr_textures\texture\concrete\concrete16.paa"},
			{"concrete 125", 0, "\ddr_textures\texture\concrete\concrete17.paa"},
			{"concrete 126", 0, "\ddr_textures\texture\concrete\concrete18.paa"},
			{"concrete 127", 0, "\ddr_textures\texture\concrete\concrete19.paa"},
			{"concrete 128", 0, "\ddr_textures\texture\concrete\concrete20.paa"},
			{"concrete 129", 0, "\ddr_textures\texture\concrete\concrete21.paa"},
			{"concrete 130", 0, "\ddr_textures\texture\concrete\concrete22.paa"},
			{"concrete 131", 0, "\ddr_textures\texture\concrete\concrete23.paa"},
			{"concrete 132", 0, "\ddr_textures\texture\concrete\concrete24.paa"},
			{"concrete 133", 0, "\ddr_textures\texture\concrete\concrete25.paa"},
			{"concrete 134", 0, "\ddr_textures\texture\concrete\concrete26.paa"},
			{"concrete 135", 0, "\ddr_textures\texture\concrete\concrete27.paa"},
			{"concrete 136", 0, "\ddr_textures\texture\concrete\concrete28.paa"},
			{"concrete 137", 0, "\ddr_textures\texture\concrete\concrete29.paa"},
			{"cardboard 138", 0, "\ddr_textures\texture\cardboard\cardboard1.paa"},
			{"cardboard 139", 0, "\ddr_textures\texture\cardboard\cardboard2.paa"},
			{"cardboard 140", 0, "\ddr_textures\texture\cardboard\cardboard3.paa"},
			{"cardboard 141", 0, "\ddr_textures\texture\cardboard\cardboard4.paa"},
			{"cardboard 142", 0, "\ddr_textures\texture\cardboard\cardboard5.paa"},
			{"cardboard 143", 0, "\ddr_textures\texture\cardboard\cardboard6.paa"},
			{"cardboard 144", 0, "\ddr_textures\texture\cardboard\cardboard7.paa"},
			{"cardboard 145", 0, "\ddr_textures\texture\cardboard\cardboard8.paa"},
			{"cork 146", 0, "\ddr_textures\texture\cork\cork1.paa"},
			{"cork 147", 0, "\ddr_textures\texture\cork\cork2.paa"},
			{"cork 148", 0, "\ddr_textures\texture\cork\cork3.paa"},
			{"cork 149", 0, "\ddr_textures\texture\cork\cork4.paa"},
			{"cork 150", 0, "\ddr_textures\texture\cork\cork5.paa"},
			{"cork 151", 0, "\ddr_textures\texture\cork\cork6.paa"},
			{"cork 152", 0, "\ddr_textures\texture\cork\cork7.paa"},
			{"cork 153", 0, "\ddr_textures\texture\cork\cork8.paa"},
			{"cork 154", 0, "\ddr_textures\texture\cork\cork9.paa"},
			{"plaster 156", 0, "\ddr_textures\texture\plaster\plaster1.paa"},
			{"plaster 157", 0, "\ddr_textures\texture\plaster\plaster2.paa"},
			{"plaster 158", 0, "\ddr_textures\texture\plaster\plaster3.paa"},
			{"plaster 159", 0, "\ddr_textures\texture\plaster\plaster4.paa"},
			{"plaster 160", 0, "\ddr_textures\texture\plaster\plaster5.paa"},
			{"plaster 161", 0, "\ddr_textures\texture\plaster\plaster6.paa"},
			{"plaster 162", 0, "\ddr_textures\texture\plaster\plaster7.paa"},
			{"plaster 163", 0, "\ddr_textures\texture\plaster\plaster8.paa"},
			{"plaster 164", 0, "\ddr_textures\texture\plaster\plaster9.paa"},
			{"plaster 165", 0, "\ddr_textures\texture\plaster\plaster10.paa"},
			{"plaster 166", 0, "\ddr_textures\texture\plaster\plaster11.paa"},
			{"plaster 167", 0, "\ddr_textures\texture\plaster\plaster12.paa"},
			{"plaster 168", 0, "\ddr_textures\texture\plaster\plaster13.paa"},
			{"plaster 169", 0, "\ddr_textures\texture\plaster\plaster14.paa"}
		};

		Exile_Construction_WoodWall_Static[] =
		{

		};
		
		Exile_Construction_WoodDrawBridge_Static[] =
		{

		};

		Exile_Construction_WoodLadder_Static[] =
		{

		};

		Exile_Construction_WoodWindow_Static[] =
		{

		};

		Exile_Construction_WoodFloor_Static[] =
		{
	
		};

		Exile_Construction_WoodFloorPort_Static[] =
		{

		};

		Exile_Construction_WoodSupport_Static[] =
		{

		};

		Exile_Construction_WoodStairs_Static[] =
		{
	
		};

		Exile_Construction_WoodWallHalf_Static[] =
		{
	
		};

		Exile_Construction_WoodDoorway_Static[] =
		{

		};

		Exile_Construction_WoodFloorPortSmall_Static[] =
		{

		};

		Exile_Construction_WoodDoor_Static[] =
		{

		};

		Exile_Construction_WoodGate_Static[] =
		{

		};

		Exile_Construction_ConcreteWall_Static[] =
		{

		};

		Exile_Construction_ConcreteWindow_Static[] =
		{

		};

		Exile_Construction_ConcreteWindowHatch_Static[] =
		{

		};

		Exile_Construction_ConcreteDoor_Static[] =
		{

		};

		Exile_Construction_ConcreteDoorway_Static[] =
		{

		};

		Exile_Construction_ConcreteFloor_Static[] =
		{

		};

		Exile_Construction_ConcreteFloorPort_Static[] =
		{

		};

		Exile_Construction_ConcreteFloorHatch_Static[] =
		{

		};

		Exile_Construction_ConcreteStairs_Static[] =
		{

		};

		Exile_Construction_ConcreteSupport_Static[] =
		{
	
		};

		Exile_Construction_ConcreteGate_Static[] =
		{

		};

		Exile_Construction_WoodWall_Reinforced_Static[] =
		{

		};

		Exile_Construction_WoodDrawBridge_Reinforced_Static[] =
		{

		};

		Exile_Construction_WoodFloorPortSmall_Reinforced_static[] =
		{

		};

		Exile_Construction_WoodWindow_Reinforced_Static[] =
		{

		};

		Exile_Construction_WoodFloor_Reinforced_Static[] =
		{

		};

		Exile_Construction_WoodWallHalf_Reinforced_Static[] =
		{

		};

		Exile_Construction_WoodDoorway_Reinforced_Static[] =
		{

		};

		Exile_Construction_WoodDoor_Reinforced_Static[] =
		{

		};

		Exile_Construction_WoodGate_Reinforced_Static[] =
		{

		};

		Exile_Bike_QuadBike_Abstract[] =
		{

			{"Blue", 0, {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"}, {}},
			{"Red", 0, {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"}, {}},
			{"White", 0, {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"}, {}},
			{"NATO", 0, {"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"}, {}},
			{"CSAT", 0, {"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"}, {}},
			{"FIA", 0, {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"}, {}},
			{"Guerilla 01",	0, {"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"}, {}},
			{"Guerilla 02",	0, {"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"}, {}},
			{"Black", 0, {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"}, {}},
			{"Hex", 0, {"\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_ghex_CO.paa","\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_wheel_ghex_CO.paa"}, {}}
		};

		Exile_Boat_MotorBoat_Abstract[] =
		{
			{"Police", 0, {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"}, {}},
			{"Orange", 0, {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"}, {}},
			{"White", 0, {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"}, {}}
		};

		Exile_Boat_RubberDuck_Abstract[] =
		{
			{"CSAT", 0, "\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa", {}},
			{"Digital", 0, "\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa", {}},
			{"Orange", 0, "\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa", {}},
			{"Blue", 0, "\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa", {}},
			{"Black", 0, "\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa", {}}
		};

		Exile_Boat_SDV_Abstract[] =
		{
			{"CSAT", 0, "\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa", {}},
			{"Digital", 0, "\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa", {}},
			{"Grey", 0, "\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa", {}}
		};

		Exile_Chopper_Hellcat_Abstract[] =
		{
			{"Green", 0, "\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa", {}},
			{"FIA", 0, "\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa", {}}
		};

		Exile_Car_Kart_Abstract[] =
		{
			{"Bluking", 0, {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}, {}},
			{"RedStone", 0, {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}, {}},
			{"Vrana", 0, {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}, {}},
			{"Green", 0, {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}, {}},
			{"Blue", 0, {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}, {}},
			{"Orange", 0, {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}, {}},
			{"White", 0, {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}, {}},
			{"Yellow", 0, {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}, {}},
			{"Black", 0, {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}, {}}
		};

		Exile_Chopper_Hummingbird_Civillian_Abstract[] =
		{
			{"Blue", 0, "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa", {}},
			{"Red", 0, "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa", {}},
			{"ION", 0, "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa", {}},
			{"BlueLine", 0, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa", {}},
			{"Digital", 0, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa", {}},
			{"Elliptical", 0, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa", {}},
			{"Furious", 0, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa", {}},
			{"GrayWatcher", 0, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa", {}},
			{"Jeans", 0, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa", {}},
			{"Light", 0, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa", {}},
			{"Shadow", 0, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa", {}},
			{"Sheriff", 0, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa", {}},
			{"Speedy", 0, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa", {}},
			{"Sunset", 0, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa", {}},
			{"Vrana", 0, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa", {}},
			{"Wasp", 0, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa", {}},
			{"Wave", 0, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa", {}}
		};

		Exile_Chopper_Huron_Abstract[] =
		{
			{"Black", 0, {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"}, {}},
			{"Green", 0, {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"}, {}}
		};

		Exile_Chopper_Orca_Abstract[] =
		{
			{"CSAT", 0, "\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa", {}},
			{"Black", 0, "\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa", {}},
			{"Black Custom", 0, "\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa", {}}
		};

		Exile_Chopper_Taru_Abstract[] =
		{
			{"CSAT", 0, {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"}, {}},
			{"BLACK", 0, {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"}, {}}
		};

		Exile_Chopper_Taru_Transport_Abstract[] =
		{
			{"CSAT", 0, {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"}, {}},
			{"Black", 0, {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"}, {}}
		};

		Exile_Chopper_Taru_Covered_Abstract[] =
		{
			{"CSAT", 0, {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"}, {}},
			{"Black", 0, {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"}, {}}
		};

		Exile_Car_Hatchback_Abstract[] =
		{
			{"Rusty White", 50, "\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa", {}},
			{"Rusty Red", 50, "\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa", {}},
			{"Rusty Yellow", 50, "\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa", {}},
			{"Beige", 0, "\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa", {}},
			{"Green", 0, "\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa", {}},
			{"Blue", 0, "\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa", {}},
			{"Blue Custom", 0, "\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa", {}},
			{"Beige Custom", 0, "\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa", {}},
			{"Yellow", 0, "\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa", {}},
			{"Grey", 0, "\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa", {}},
			{"Black", 0, "\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa", {}},
			{"Dark", 0, "\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa", {}}
		};

		Exile_Car_Hatchback_Sport_Abstract[] =
		{
			{"Red", 0, "\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa", {}},
			{"Blue", 0, "\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa", {}},
			{"Orange", 0, "\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa", {}},
			{"White", 0, "\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa", {}},
			{"Beige", 0, "\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa", {}},
			{"Green", 0, "\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa", {}}
		};

		Exile_Car_Offroad_Abstract[] =
		{
			{"Rusty White", 0, "\exile_assets\model\RTV\Exile_offroad_03_co.paa", {}},
			{"Rusty Red", 0, "\exile_assets\model\RTV\Exile_offroad_01_co.paa", {}},
			{"Rusty Blue", 0, "\exile_assets\model\RTV\Exile_offroad_02_co.paa", {}},
			{"Red", 0, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa", {}},
			{"Beige", 0, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa", {}},
			{"White", 0, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa", {}},
			{"Blue", 0, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa", {}},
			{"Dark Red", 0, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa", {}},
			{"Blue Custom", 0, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa", {}},
			{"Guerilla 01", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa", {}},
			{"Guerilla 02", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa", {}},
			{"Guerilla 03", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa", {}},
			{"Guerilla 04", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa", {}},
			{"Guerilla 05", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa", {}},
			{"Guerilla 06", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa", {}},
			{"Guerilla 07", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa", {}},
			{"Guerilla 08", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa", {}},
			{"Guerilla 09", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa", {}},
			{"Guerilla 10", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa", {}},
			{"Guerilla 11", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa", {}},
			{"Guerilla 12", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa", {}},
			{"Exile Black", 0, "exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa", {}},
			{"Exile Light Blue", 0, "exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa", {}},
			{"Exile Orange", 0, "exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa", {}},
			{"Exile Pink", 0, "exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa", {}},
			{"Exile White", 0, "exile_assets\texture\vehicle\Exile_Offroad_White_co.paa", {}},
			{"Exile Yellow", 0, "exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa", {}}
		};

		Exile_Car_LandRover_Abstract[] =
		{
			{"Red", 0, {"Exile_psycho_LRC\data\r_lr_base_co.paa","Exile_psycho_LRC\data\r_lr_special_co.paa"}, {}},
			{"Urban", 0, {"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa","Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"}, {}},
			{"Green", 0, {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"}, {}},
			{"Sand", 0, {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}, {}},
			{"Desert", 0, {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}, {}}
		};

		Exile_Car_LandRover_Ambulance_Abstract[] =
		{
			{"Green", 0, {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"}, {}},
			{"Desert", 0, {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}, {}},
			{"Sand", 0, {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}, {}}
		};

		Exile_Car_Octavius_Abstract[] =
		{
			{"White", 0, "exile_psycho_Octavia\Data\car_body_co.paa", {}},
			{"Black", 0, "exile_psycho_Octavia\Data\car_body_bl_co.paa", {}}
		};

		Exile_Chopper_Huey_Abstract[] =
		{
			{"Green", 0, {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}, {}},
			{"Desert", 0, {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}, {}}
		};

		Exile_Chopper_Huey_Armed_Abstract[] =
		{
			{"Green", 0, {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}, {}},
			{"Desert", 0, {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}, {}}
		};

		Exile_Car_Offroad_Armed_Abstract[] =
		{
			{"Guerilla 01", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa", {}},
			{"Guerilla 02", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa", {}},
			{"Guerilla 03", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa", {}},
			{"Guerilla 04", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa", {}},
			{"Guerilla 05", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa", {}},
			{"Guerilla 06", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa", {}},
			{"Guerilla 07", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa", {}},
			{"Guerilla 08", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa", {}},
			{"Guerilla 09", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa", {}},
			{"Guerilla 10", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa", {}},
			{"Guerilla 11", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa", {}},
			{"Guerilla 12", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa", {}}
		};

		Exile_Car_Offroad_Repair_Abstract[] =
		{
			{"Civillian", 0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa", {}},
			{"Red", 0, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa", {}},
			{"Beige", 0, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa", {}},
			{"White", 0, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa", {}},
			{"Blue", 0, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa", {}},
			{"DarkRed", 0, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa", {}},
			{"BlueCustom", 0, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa", {}},
			{"Guerilla 01",	0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa", {}},
			{"Guerilla 02",	0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa", {}},
			{"Guerilla 03",	0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa", {}},
			{"Guerilla 04",	0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa", {}},
			{"Guerilla 05",	0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa", {}},
			{"Guerilla 06",	0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa", {}},
			{"Guerilla 07",	0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa", {}},
			{"Guerilla 08",	0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa", {}},
			{"Guerilla 09",	0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa", {}},
			{"Guerilla 10",	0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa", {}},
			{"Guerilla 11",	0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa", {}},
			{"Guerilla 12",	0, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa", {}}
		};

		Exile_Car_SUV_Abstract[] =
		{
			{"Red", 0, "\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa", {}},
			{"Black", 0, "\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa", {}},
			{"Grey", 0, "\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa", {}},
			{"Orange", 0, "\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa", {}},
			{"Snow Camo", 0, "exile_assets\texture\vehicle\Exile_SUV_Snow_co.paa", {}},
			{"Leaf Camo", 0, "exile_assets\texture\vehicle\Exile_SUV_Leaf_Light_co.paa", {}},
			{"Leaf Camo (Dark)", 0, "exile_assets\texture\vehicle\Exile_SUV_Leaf_Dark_co.paa", {}}
		};

        Exile_Car_SUVXL_Abstract[] = 
        {
            {"Black", 0, "\Exile_psycho_SUV_a3\Data\suv_body_co.paa", {}},
            {"Blue White", 0, "\Exile_psycho_SUV_a3\Data\textures\suv_body_bluewhite.paa", {}},
            {"Charcoal", 0, "\Exile_psycho_SUV_a3\Data\textures\suv_body_charcoal_co.paa", {}},
            {"Orange", 0, "\Exile_psycho_SUV_a3\Data\textures\suv_body_orange_co.paa", {}},
            {"Hello Kitty", 0, "\Exile_psycho_SUV_a3\Data\textures\suv_body_Pink_hello_co.paa", {}},
            {"Red", 0, "\Exile_psycho_SUV_a3\Data\textures\suv_body_red_co.paa", {}},
            {"Silver", 0, "\Exile_psycho_SUV_a3\Data\textures\suv_body_silver_co.paa", {}},
            {"White", 0, "\Exile_psycho_SUV_a3\Data\textures\suv_body_white_co.paa", {}},
            {"Yellow", 0, "\Exile_psycho_SUV_a3\Data\textures\suv_body_yellow_co.paa", {}}
        };

		Exile_Car_Van_Abstract[] =
		{
			{"Black", 0, {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}, {}},
			{"White", 0, {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}, {}},
			{"Red", 0, {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}, {}},
			{"Guerilla 01",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"}, {}},
			{"Guerilla 02",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"}, {}},
			{"Guerilla 03",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"}, {}},
			{"Guerilla 04",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"}, {}},
			{"Guerilla 05",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"}, {}},
			{"Guerilla 06",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"}, {}},
			{"Guerilla 07",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"}, {}},
			{"Guerilla 08",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"}, {}},
			{"Brown", 0, {"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"}, {}},
			{"Olive", 0, {"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"}, {}}
		};

		Exile_Car_Van_Box_Abstract[] =
		{
			{"Black", 0, {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}, {}},
			{"White", 0, {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}, {}},
			{"Red", 0, {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}, {}},
			{"Guerilla 01",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"}, {}},
			{"Guerilla 02",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"}, {}},
			{"Guerilla 03",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"}, {}},
			{"Guerilla 04",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"}, {}},
			{"Guerilla 05",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"}, {}},
			{"Guerilla 06",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"}, {}},
			{"Guerilla 07",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"}, {}},
			{"Guerilla 08",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"}, {}}
		};

		Exile_Car_Van_Fuel_Abstract[] =
		{
			{"Black", 0, {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}, {}},
			{"White", 0, {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}, {}},
			{"Red", 0, {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}, {}},
			{"Guerilla 01",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"}, {}},
			{"Guerilla 02",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"}, {}},
			{"Guerilla 03",	0, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"}, {}}
		};

		Exile_Car_Tempest_Abstract[] =
		{
			{"Green Hex", 0, {"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"}, {}}
		};

		Exile_Car_Ikarus_Abstract[] =
		{
			{"Blue", 0, "Exile_psycho_Ikarus\Data\bus_exterior_co.paa", {}},
			{"Red", 0, "Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa", {}},
			{"Party", 0, "Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa", {}}
		};

		Exile_Car_Ural_Open_Abstract[] =
		{
			{"Blue", 0, {"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"}, {}},
			{"Yellow", 0, {"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"}, {}},
			{"Worker", 0, {"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"}, {}},
			{"Military", 0, {"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"}, {}}
		};

		Exile_Car_Ural_Covered_Abstract[] =
		{
			{"Blue", 0, {"Exile_psycho_Ural\data\ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"}, {}},
			{"Yellow", 0, {"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"}, {}},
			{"Worker", 0, {"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"}, {}},
			{"Military", 0, {"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"}, {}}
		};

		Exile_Car_Lada_Abstract[] =
		{
			{"Green", 0, {"exile_psycho_lada\data\lada_eciv1_co.paa","exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"}, {}},
			{"Taxi", 0, "exile_psycho_lada\data\Lada_red_CO.paa", {}},
			{"Red", 0, "exile_psycho_lada\data\Lada_red_CO.paa", {}},
			{"Hipster",	0, {"exile_psycho_lada\data\lada_eciv2_co.paa","exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"}, {}}
		};

		Exile_Car_Volha_Abstract[] =
		{
			{"Blue", 0, "Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa", {}},
			{"White", 0, "Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa", {}},
			{"Black", 0, "Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa", {}}
		};

		Exile_Car_Hunter_Abstract[] =
		{

			{"Exile White Edition", 0, {"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Snow_Back_co.paa"}, {}},
			{"Exile Hex", 0, {"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"}, {}},
			{"Exile Black", 0, {"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"}, {}}
		};

		Exile_Car_Ifrit_Abstract[] =
		{
			{"Green Hex", 0, {"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa","\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"}, {}}
		};

		Exile_Car_HMMWV_M2_Abstract[] =
		{

			{"Green", 0, "Exile_psycho_hmmw\data\hmmwv_body_co.paa", {}},
			{"Desert", 0, "Exile_psycho_hmmw\data\des\hmmwv_body_co.paa", {}}
		};

		Exile_Car_HMMWV_M134_Abstract[] =
		{

			{"Green", 0, "Exile_psycho_hmmw\data\hmmwv_body_co.paa", {}},
			{"Desert", 0, "Exile_psycho_hmmw\data\des\hmmwv_body_co.paa", {}}
		};

		Exile_Car_HMMWV_MEV_Abstract[] =
		{
			{"Green", 0, "Exile_psycho_hmmw\data\hmmwv_body_cm.paa", {}},
			{"Desert",	0, "Exile_psycho_hmmw\data\des\hmmwv_body_cm.paa", {}}
		};

		Exile_Car_HMMWV_UNA_Abstract[] =
		{
			{"Green", 0, "Exile_psycho_hmmw\data\hmmwv_body_co.paa", {}},
			{"Desert", 0, "Exile_psycho_hmmw\data\des\hmmwv_body_co.paa", {}}
		};

		Exile_Car_BTR40_MG_Abstract[] =
		{

			{"Green", 0, "exile_psycho_btr40\data\btr40ext_co.paa", {}},
			{"Camo", 0, "exile_psycho_btr40\data\btr40extcamo_co.paa", {}}
		};

		Exile_Car_BTR40_Abstract[] =
		{

			{"Green", 0, "exile_psycho_btr40\data\btr40ext_co.paa", {}},
			{"Camo", 0, "exile_psycho_btr40\data\btr40extcamo_co.paa", {}}
		};

		Exile_Car_Golf_Abstract[] =
		{

			{"Red", 0, "exile_psycho_VWGolf\data\vwgolf_body_co.paa", {}},
			{"Black", 0, "exile_psycho_VWGolf\data\texture\black_co.paa", {}}
		};

		Exile_Plane_AN2_Abstract[] =
		{
			{"Green", 0, {"Exile_psycho_An2\data\an2_1_co.paa","Exile_psycho_An2\data\an2_2_co.paa","Exile_psycho_An2\data\an2_wings_co.paa"}, {}},
			{"Red, White & Blue", 0, {"Exile_psycho_An2\data\an2_1_a_co.paa","Exile_psycho_An2\data\an2_2_a_co.paa","Exile_psycho_An2\data\an2_wings_a_co.paa"}, {}},
			{"Green Stripe", 0, {"Exile_psycho_An2\data\an2_1_b_co.paa","Exile_psycho_An2\data\an2_2_b_co.paa","Exile_psycho_An2\data\an2_wings_b_co.paa"}, {}}
		};

		B_G_Boat_Transport_02_F[] =
		{
			{"Blue", 0, {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"}, {}}
		};

		Exile_Boat_WaterScooter_Abstract[] =
		{
			{"Blue", 0, {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"}, {}},
			{"Grey", 0, {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"}, {}},
			{"Lime", 0, {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"}, {}},
			{"Red", 0, {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"}, {}},
			{"White", 0, {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"}, {}},
			{"Yellow", 0, {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"}, {}}
		};

		C_Plane_Civil_01_F[] =
		{
			{"Racing (Tan Interior)", 0, {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}, {}},
			{"Racing", 0, {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}, {}},
			{"Red Line (Tan Interior)", 0, {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}, {}},
			{"Tribal (Tan Interior)", 0, {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}, {}},
			{"Tribal", 0, {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}, {}},
			{"Blue Wave (Tan Interior)", 0, {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}, {}},
			{"Blue Wave", 0, {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}, {}}
		};

		B_T_VTOL_01_infantry_F[] =
		{
			{"Blue", 0, {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"}, {}}
		};

		B_T_VTOL_01_vehicle_F[] =
		{
			{"Blue", 0, {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"}, {}}
		};

		B_CTRG_LSV_01_light_F[] =
		{
			{"Black", 0, {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"}, {}},
			{"Dazzle", 0, {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}, {}},
			{"Sand", 0, {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"}, {}}
		};

		B_T_LSV_01_unarmed_black_F[] =
		{
			{"Olive", 0, {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}, {}},
			{"Dazzle", 0, {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}, {}},
			{"Sand", 0, {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"}, {}}
		};

		O_T_LSV_02_unarmed_black_F[] =
		{
			{"Arid", 0, {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"}, {}},
			{"Green Hex", 0, {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"}, {}}
		};

		C_Offroad_02_unarmed_orange_F[] =
		{
			{"Black", 0, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa", {}},
			{"Blue", 0, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa", {}},
			{"Brown", 0, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa", {}},
			{"Green", 0, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa", {}},
			{"Olive", 0, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa", {}},
			{"Red", 0, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa", {}},
			{"White", 0, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa", {}}
		};

		I_C_Offroad_02_unarmed_F[] =
		{
			{"Black", 0, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa", {}},
			{"Blue", 0, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa", {}},
			{"Brown", 0, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa", {}},
			{"Green", 0, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa", {}},
			{"Orange", 0, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa", {}},
			{"Red", 0, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa", {}},
			{"White", 0, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa", {}},
			{"Olive", 0, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa", {}}
		};
	};
};