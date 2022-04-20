/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 

class CfgClans
{
	/*
		Defines the amount of pop tabs needed to register a new clan

		Default: 20,000
	*/
	registrationFee = 2000;

	/*
		A list of all characters allowed in a clan *name*

		NOTE: 
	*/
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ._-!\\/";

	/*

		Maximum markers per clan

	*/
	maximumIcons = 20;

	/*
		Maximum number of characters on a Marker in a presistent system

		Note: MAX 255!
		
	*/
	maximumIconText = 50;

	/*

		Maximum poly markers per clan

	*/
	maximumPolys = 10;


	/* 

		Maximum points in poly
	*/
	maximumPolyNode = 10;
};
class CfgWeapons
{
	
};
class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
	requiresConcreteMixer = 0; // Check if concrete mixer is nearby
};

class CfgCraftingRecipes
{
	#include "EBM\recipes.hpp"
	#include "CfgCraftingRecipes.cpp"
};
class CfgExileAnimals
{
	/**
	 * Should animals spawn on your server? Y/N?
	 */
	enabled = 0;

	/**
	 * Should vanilla Arma animals (fish, rabbits, bees, etc.) be disabled?
	 * We think it should, since it might confuse players if they cant eat them. *munches on bees*
	 */
	disableVanillaAnimals = 1;

	/**
	 * Which animals to spawn. 
	 * Exile automatically spawns a color variation of that animal, if variations exist.
	 * Each player (client) has a maximum of one animal at a time.
	 * Exile checks which animal type can spawn in front of the player and then
	 * picks a random one. 
	 *
	 * For now it is like this:
	 * 
	 * - Goats spawn on hill tops, but not in forests
	 * - Sheep spawn on meadows, but not next to forests and not on hill tops
	 * - Hens and roosters spawn next to buildings only
	 *
	 * => More animal types will follow in upcoming Exile versions, hopefully.
	 */
	animalTypes[] = 
	{
		"Exile_Animal_Rooster_Abstract",
		"Exile_Animal_Hen_Abstract",
		"Exile_Animal_Goat_Abstract",
		"Exile_Animal_Sheep_Abstract"
	};

	/**
	 * Animals are always spawned in front of the player, but
	 * at least a certain distance away. The radius is applied on top.
	 *
	 * Example:
	 * Distance = 150
	 * Radius = 50
	 *
	 * => Minimum Distance from Player = 150 
	 * => Maximum Distance from Player = 150 + 50 * 2
	 */
	spawnDistance = 150;
	spawnRadius = 50;

	/**
	 * Specifies the minimum time in seconds between spawning animals.
	 * When the animal diededed, this time has to pass before it spawns
	 * a new one.
	 *
	 * It is a min/max setting, so the intervals will be uneven and a bit random.
	 * By default it will take 5 to 10 minutes to respawn a new animal.
	 */
	minimumSpawnDelay = 5 * 60;
	maximumSpawnDelay = 10 * 60;

	/**
	 * Clients will despawn animals if no player is in this radius around the animal
	 * This check is ran every 1 minute, so it is pretty unprecise, but performance-friendly. 
	 */
	keepAliveRadius = 500;

	/**
	 * Defines the minimum lifetime of an animal in seconds. During this time, right after spawning,
	 * it will not despawn. (+-0..1 minute delay)
	 */
	minimumLifetime = 5 * 60;
};
class CfgExileArsenal
{
	#include "EBM\prices.hpp"
	//#include "TRADERS\CustomPrices\TEST.hpp"
	#include "TRADERS\CustomPrices\DLC_Contact.hpp"
	#include "TRADERS\CustomPrices\Ammo.hpp"
	#include "TRADERS\CustomPrices\Attachments.hpp"
	#include "TRADERS\CustomPrices\Backpacks.hpp"
	#include "TRADERS\CustomPrices\Explosives.hpp"
	#include "TRADERS\CustomPrices\Flags.hpp"
	#include "TRADERS\CustomPrices\Headgear.hpp"
	#include "TRADERS\CustomPrices\Items.hpp"
	#include "TRADERS\CustomPrices\Uniforms.hpp"
	#include "TRADERS\CustomPrices\Vehicles.hpp"
	#include "TRADERS\CustomPrices\Vests.hpp"
	#include "TRADERS\CustomPrices\Weapons.hpp"
	class Exile_Uniform_BambiOverall				{ quality = 1; price = 1; sellPrice = 1; };	
};



class CfgExileCustomCode 
{
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the 
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.

		Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon\myfunction.sqf";
	*/
	#include "CfgExileCustomCode.cpp"
};
class CfgNetworkMessages
{
	#include "ExAdClient\Core\CfgNetworkMessages.cpp"
	#include "CfgNetworkMessages.cpp"
};
class CfgExileEnvironment
{
	class cup_chernarus_A3 
	{
		class FireFlies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour fire flies begin to spawn
			startHour = 21;

			// At this hour fire flies stop spawning
			endHour = 4;
		};

		class Anomalies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour anomalies begin to spawn
			startHour = 19;

			// At this hour anomalies stop spawning
			endHour = 6;
		};

		class Breathing
		{
			// 1 = enabled, 0 = disabled
			enable = 0;
		};

		class Snow
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// https://community.bistudio.com/wiki/surfaceType
			surfaces[] = {};
		};

		class Radiation 
		{
			// 1 = enabled, 0 = disabled
			enable = 1;

			contaminatedZones[] =
			{
				//{{17471.344,4080.047,0.001},1500,1500},
			};
		};

		class Temperature
		{
			// Temperature in °C for the time of day, per hour
			// Add the first index to the last index, so it is 25 indizes!
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		
			// Temperature change in °C when it is 100% overcast
			overcast = -2;

			// Temperature change in °C when it is 100% raining
			rain = -5;

			// Temperature change in °C when it is 100% windy
			wind = -1;

			// Temperature change per 100m altitude in °C
			altitude = -0.5;

			// Difference from the daytime temperature to the water temperature
			water = -5;
		};
	};	
};
class CfgExileHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};

		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};

		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};

		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};

		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};

		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
				
		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
				
		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};

		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};

		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};

		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};

		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};

		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};

		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};

		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};

		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};

		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExileLootSettings
{
	/**
	 * Lifetime of loot in minutes. Synchronize this with
	 * the garbage collector settings of your server
	 * CfgSettings!
	 */
	lifeTime = 8;

	/**
	 * Interval in seconds when the client searches for
	 * new buildings to spawn loot in
	 */
	spawnInterval = 30;

	/**
	 * This is a percentage value to determine how many loot
	 * positions should contain loot when the system spawns loot.
	 *
	 * If a building has 20 positions defined, Exile will 
	 * spawn loot in 10 random positions of them.
	 * 
	 * This means smaller buildings spawn less loot and larger
	 * ones spawn more loot.
	 *
	 * You can also cap it at a maximum value. See below.
	 */
	maximumPositionCoverage = 20;

 	/**
 	 * Limit the number of loot positions per building. If the 
 	 * above percentage value exceeds this value, it will be capped.
 	 *
 	 * Example: Coverage is 50%. Building has 60 loot positions defined.
 	 * This results in 30 loot positions and that is too much. So we
 	 * cap this at 10
 	 */
	maximumNumberOfLootSpotsPerBuilding =14;

	/**
	 * Exile spawns a random number of items per loot spot. This 
	 * is the upper cap for that. So 3 means it could spawn 1, 2 
	 * or 3.
	 */
	maximumNumberOfItemsPerLootSpot = 3;

	/**
	 * Radius in meter to spawn loot AROUND each player.
	 * Do NOT touch this value if you dont know what you do.
	 * The higher the number, the higher the drop rates, the
	 * easier your server will lag.
	 *
	 * 50m  = Minimum
	 * 200m = Maximum
	 */
	spawnRadius = 100;

	/**
	 * Defines the radius around trader cities where the system should
	 * not spawn loot. Set this to 0 if you want to have loot spawning
	 * in trader citites, ugh.
	 */
	minimumDistanceToTraderZones = 500;

	/**
	 * Defines the radius around territories where no loot spawns.
	 * This does not regard the actual size of a territory. So do not
	 * set this to a lower value than the maximum radius of a territory,
	 * which is 150m by default.
	 */
	minimumDistanceToTerritories = 20;
};
class CfgExileMobileXM8
{
	/**
	 * Add the 4 digit permission code here, so players can authorize
	 * your server to send them messages to their Mobile XM8 app.
	 */
	code = "NONO";
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgExileParty 
{
	showESP = 1;
	allow3DMarkers = 1;
};
class CfgExileRussianRoulette
{
	/*
		Minimum amount to join a session of 
		russian roulette
	*/
	buyInAmount = 100;
};
class CfgBaseSpawn 
{
	/*
		How long a player must wait before they can spawn at the same flag again
		
		Default: 900 seconds - 15 minutes
	*/
	ExileBaseRespawnTimeLimit = 1200;
	/*
		Required Flag Level for Base Spawn 
		
		Default: 1
	*/
	ExileBaseSpawnLevelRequired = 3;
	/*
		Allow everyone with Build Rights to Spawn at the Flag. Turn off for Flag Owner Spawn ONLY
		1 = On 0 = Off
		
		Default: 1
	*/
	ExileBaseSpawnBuildRights = 1;
	/*
		Allow Halo Spawn option for Base Spawn
		1 = On 0 = Off
		
		Default: 0
	*/
	ExileBaseSpawnHalo = 1;
	/*
		Allow Ground Spawn option for Base Spawn 
		1 = On  = Off
		
		Default: 1
	*/
	ExileBaseSpawnGround = 1;
};
class CfgFlags 
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uids[] = {};
	};
	class UNO
	{
		name = "UNO";
		texture = "\A3\Data_F\Flags\Flag_uno_CO.paa";
		uids[] = {};
	};
	class WhiteDamage
	{
		name = "White damage";
		texture = "\A3\Data_F\Flags\flag_white_dmg_co.paa";
		uids[] = {};
	};
	class IDAP
	{
		name = "IDAP";
		texture = "\A3\Data_F_Orange\Flags\flag_IDAP_CO.paa";
		uids[] = {};
	};
	class Syndikat
	{
		name = "Syndikat";
		texture = "\A3\Data_F_Exp\Flags\flag_SYND_CO.paa";
		uids[] = {};
	};
	class ddr
	{
		name = "DDR";
		texture = "\ddr_markers\flag\flag_ddr_co.paa";
		uids[] = {};
	};
	class Spanien
	{
		name = "Spanien";
		texture = "\ddr_markers\flag\flag_spanisch_co.paa";
		uids[] = {};
	};
	class Sachsen
	{
		name = "Sachsen";
		texture = "\ddr_markers\flag\flag_sachsen_co.paa";
		uids[] = {};
	};
	class Bayern
	{
		name = "Bayern";
		texture = "\ddr_markers\flag\flag_bayern_co.paa";
		uids[] = {};
	};
	class Baden_wuerttemberg
	{
		name = "Baden Württemberg";
		texture = "\ddr_markers\flag\flag_baden_wuerttemberg_co.paa";
		uids[] = {};
	};
	class Rheinland_pfalz
	{
		name = "Rheinland Pfalz";
		texture = "\ddr_markers\flag\flag_rheinland_pfalz_co.paa";
		uids[] = {};
	};
	class ALEXFlagStark
	{
		name = "Last PORN Exile";
		texture = "\ALEX_FLAGS\Texture\Stark.paa";
		uids[] = {};
	};
	class Bremen
	{
		name = "Bremen";
		texture = "\ddr_markers\flag\flag_bremen_co.paa";
		uids[] = {};
	};
	class Schleswig_holstein
	{
		name = "Schleswig Holstein";
		texture = "\ddr_markers\flag\flag_schleswig_holstein_co.paa";
		uids[] = {};
	};
	class Berlin
	{
		name = "Berlin";
		texture = "\ddr_markers\flag\flag_berlin_co.paa";
		uids[] = {};
	};
	class Nordrhein_westfalen
	{
		name = "Nordrhein Westfalen";
		texture = "\ddr_markers\flag\flag_nordrhein_westfalen_co.paa";
		uids[] = {};
	};
	class Brandenburg
	{
		name = "Brandenburg";
		texture = "\ddr_markers\flag\flag_brandenburg_co.paa";
		uids[] = {};
	};
	class Sachsen_anhalt
	{
		name = "Sachsen Anhalt";
		texture = "\ddr_markers\flag\flag_sachsen_anhalt_co.paa";
		uids[] = {};
	};
	class Thueringen
	{
		name = "Thüringen";
		texture = "\ddr_markers\flag\flag_thueringen_co.paa";
		uids[] = {};
	};
	class Hamburg
	{
		name = "Hamburg";
		texture = "\ddr_markers\flag\flag_hamburg_co.paa";
		uids[] = {};
	};
	class Niedersachsen
	{
		name = "Niedersachsen";
		texture = "\ddr_markers\flag\flag_niedersachsen_co.paa";
		uids[] = {};
	};
	class Saarland
	{
		name = "Saarland";
		texture = "\ddr_markers\flag\flag_saarland_co.paa";
		uids[] = {};
	};
	class Hessen
	{
		name = "Hessen";
		texture = "\ddr_markers\flag\flag_hessen_co.paa";
		uids[] = {};
	};
	class Mecklenburg_vorpommern
	{
		name = "Mecklenburg Vorpommern";
		texture = "\ddr_markers\flag\flag_mecklenburg_vorpommern_co.paa";
		uids[] = {};
	};
};
class CfgExileDelayedActions
{
	class Abstract
	{
		duration=10;
		abortInCombatMode=0;//wass 1
		durationFunction="";
		animation="";
		animationType="switchMove";
		failChance=0;
		conditionFunction="";
		completedFunction="";
		abortedFunction="";
		failedFunction="";
		repeatingCheckFunction="";
	};
	class HackFlag: Abstract
	{
		animationType="switchMove";
		animation="Acts_TerminalOpen";
		abortInCombatMode=0;
		failChanceFunction="ExileClient_action_hackFlag_failChance";
		durationFunction="ExileClient_action_hackFlag_duration";
		conditionFunction="ExileClient_action_hackFlag_condition";
		completedFunction="ExileClient_action_hackFlag_completed";
		failedFunction="ExileClient_action_hackFlag_failed";
		abortedFunction="ExileClient_action_hackFlag_aborted";
	};
};

class CfgFlagHacking
{
	enableHacking = 1;
	failChance = 5;
	hackDuration = 15;
	maxHackAttempts = 5;
	minPlayers = 5;
	maxHacks = 3;
	removeChance = 1;
	showMapIcon = 1;
	notifyServer = 1;
	notificationCooldown = 1;
};
/*class CfgGrinding
{
	// Enables code lock grinding on the server
	enableGrinding = 1;
	
	// Time it takes to grind a fresh lock in minutes
	grindDuration = 10;
	
	// Percentage chance the grinding will fail
	failChance = 65;
	
	// Percentage chance that failing will break your grinder (otherwise it will just remove a battery)
	breakChance = 50;
	
	// Notify the entire server if someone is hacking. 1 == notify, 0 == don't notify
	notifyServer = 1;
	
	// The cooldown time, in minutes, before another server side notification is sent out from a territory. This is on a per territory basis. 
	notificationCooldown = 1;
};*/
// Replace the class CfgGrinding in your config.cpp with the lines below and configure them as you like. 
class CfgGrinding
{
	GrindWoodTypes[] = 
	{
		"Exile_Construction_WoodDoor_Static",
		"Exile_Construction_WoodGate_Static",
		"Exile_Construction_WoodDrawBridge_Static",
		"Exile_Construction_WoodLadderHatch_Static",
		"EBM_door_frame",
		"EBM_Brickwall_floorport_door",
		"EBM_Brickwall_window",
		"EBM_Brickwall_door",
		"EBM_Brickwall_gate"
	};
	
	GrindMetalTypes[] = 
	{
		"Exile_Construction_WoodDoor_Reinforced_Static",
		"Exile_Construction_WoodGate_Reinforced_Static",
		"Exile_Construction_WoodDrawBridge_Reinforced_Static",
		"Exile_Construction_WoodLadderHatch_Reinforced_Static",
		"EBM_pollard",
		"EBM_Metalwall_window",
		"EBM_Metalwall_floorport_door",
		"EBM_Metalwall_door",
		"EBM_Metalwall_gate"
	};
		
	GrindConcreteypes[] = 
	{
		"Exile_Construction_ConcreteDoor_Static",
		"Exile_Construction_ConcreteGate_Static",
		"Exile_Construction_ConcreteWindowHatch_Static",
		"Exile_Construction_ConcreteFloorHatch_Static",
		"Exile_Construction_ConcreteDrawBridge_Static",
		"Exile_Construction_ConcreteLadderHatch_Static"
	};
	
	// Enables code lock grinding on the server.
	enableGrinding = 1;
	
	// Grinding is only possible in third person. (0 = disabled / = 1 enabled).
	FPGrindingOnly = 1;
	
	// Time it takes to grind a fresh lock in minutes.
	grindDurationWood = 8;
	grindDurationMetal = 10; 
	grindDurationConcrete = 12;
	
	//Amount of batteries it takes to grind.
	BatteryAmountRequiredWood = 1;
	BatteryAmountRequiredMetal = 2;
	BatteryAmountRequiredConcrete = 3;
	
	// Percentage chance the grinding will fail
	failChance = 25;
	
	// Percentage chance that failing will break your grinder (otherwise it will just remove a battery)
	breakChance = 25;
	
	// Notify the entire server if someone is hacking. 1 == notify, 0 == don't notify
	notifyServer = 1;
	
	// The cooldown time, in minutes, before another server side notification is sent out from a territory. This is on a per territory basis. 
	notificationCooldown = 10;
};
class CfgHacking 
{
	// Enables safe hacking on the server
	enableHacking = 1;
	
	// Time it takes to hack in minutes
	hackDuration = 10;
	
	// Percentage chance the hacking will fail
	failChance = 60;
	
	// Percentage chance the laptop will be removed on fail
	removeChance = 40;
	
	// Max attepts to hack a safe during one restart
	maxHackAttempts = 6;
	
	// Notify the entire server if someone is hacking. 1 == notify, 0 == don't notify
	notifyServer = 1;
	
	// The cooldown time, in minutes, before another server side notification is sent out from a territory. This is on a per territory basis. 
	notificationCooldown = 1;
	
	// The minimal amount of players on the server required in order to hack a safe (set to 0 to disable)
	minPlayers = 10;
	
	// How many safe hacks are allowed to be going at one time
	maxHacks = 6;
	
	// Show a map icon where the hacking is taking place
	showMapIcon = 1;
};

class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};
/**
 * Sort this by probability of occurence to speed things up a bit
 */
class CfgInteractionMenus
{
	#include "CfgInteractionMenus.cpp"
};

/**
 * Classname is used for reference
 * name is displayed in crafting requirements
 * models is used for crafting and interaction menus
 */
class CfgInteractionModels
{
	// Start RWG Base Building
	class WorkBench_Metal
	{
		name = "Work Bench (Metal)";
		models[] = 
		{
			"workbench_metal.p3d"
		};
	};
	class Anvil
	{
		name = "Anvil";
		models[] = 
		{
			"anvil.p3d"
		};
	};
	class Furnace
	{
		name = "Furnace";
		models[] = 
		{
			"furnace.p3d"
		};
	};
	//END RWG Base Building
	
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f",

			// Namalsk
			"wellpump",
			"Land_jhad_stand_water",
			"Land_Jbad_Misc_Well_L",
			"Land_jbad_Fridge",
			"Land_jbad_reservoir",
			"Land_jbad_teapot",
			"Land_KBud",
			
			//Tanoa
			"watertank_01_f",
			"watertank_02_f",
			"watertank_03_f",
			"watertank_04_f"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler"
		};
	};

	class WorkBench
	{
		name = "Work Bench";
		models[] = 
		{
			"workstand_f.p3d"
		};
	};

	class ShippingContainerSource
	{
		name = "Shipping Containers";
		models[] = 
		{
			// Arma 3
			//"CargoBox_V1_F",
			"Cargo20_blue_F",
			"Cargo20_brick_red_F",
			"Cargo20_cyan_F",
			"Cargo20_grey_F",
			"Cargo20_light_blue_F",
			//"Cargo20_light_green_F",
			//"Cargo20_military_green_F",
			"Cargo20_military_ruins_F",
			"Cargo20_orange_F",
			"Cargo20_red_F",
			"Cargo20_sand_F",
			"Cargo20_white_F",
			"Cargo20_yellow_F",
			"Cargo40_blue_F",
			"Cargo40_brick_red_F",
			"Cargo40_cyan_F",
			"Cargo40_grey_F",
			"Cargo40_light_blue_F",
			//"Cargo40_light_green_F",
			//"Cargo40_military_green_F",
			"Cargo40_orange_F",
			"Cargo40_red_F",
			"Cargo40_sand_F",
			"Cargo40_white_F",
			"Cargo40_yellow_F",
			// Namalsk
			"nam_container.p3d",
			"misc_cargo1d.p3d",
			"misc_cargo1b.p3d",
			"misc_cargo1bo.p3d",
			"misc_cargo2c.p3d",
			"misc_cargo1ao.p3d",
			//Tanoa
			"Land_ContainerLine_01_F",
			"Land_ContainerLine_02_F",
			"Land_ContainerLine_03_F",
			// Also allow wrecks
			"wreck_bmp2_f.p3d",
			"wreck_brdm2_f.p3d",
			"wreck_car2_f.p3d",
			"wreck_car3_f.p3d",
			"wreck_car_f.p3d",
			"wreck_cardismantled_f.p3d",
			"wreck_hmmwv_f.p3d",
			"wreck_hunter_f.p3d",
			"wreck_offroad2_f.p3d",
			"wreck_offroad_f.p3d",
			"wreck_skodovka_f.p3d",
			"wreck_slammer_f.p3d",
			"wreck_slammer_hull_f.p3d",
			"wreck_slammer_turret_f.p3d",
			"wreck_t72_hull_f.p3d",
			"wreck_t72_turret_f.p3d",
			"wreck_truck_dropside_f.p3d",
			"wreck_truck_f.p3d",
			"wreck_uaz_f.p3d",
			"wreck_ural_f.p3d",
			"wreck_van_f.p3d"
			// TODO: Ask community for CUP/AiA model names	
		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" bo_t_",

			// A2 trees
            " str_",
            " Smrk_",
            " les_",
            " brg_"			
		};
	};

	// TODO: Add https://community.bistudio.com/wikidata/images/thumb/6/60/Arma3_CfgVehicles_Land_Tank_rust_F.jpg/150px-Arma3_CfgVehicles_Land_Tank_rust_F.jpg
	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d",
			//Tanoa
			"fuelstation_01_pump_f.p3d",
			"fuelstation_02_pump_f.p3d",
			"Land_FuelStation_01_pump_F"
		};	
	};
};
class CfgLocker 
{
	numbersOnly = "0123456789";
	
	maxDeposit = 5000000000;
};

class CfgPlayer 
{
	// In minutes ammount of time it takes to go from 100 - 0 if stationary
	hungerDecay = 100;
	thirstDecay = 100;

	// Damage taken from 0 (health||thirst)/sec
	healthDecay = 5.0;

	// Health regen if over BOTH
	thirstRegen = 90;
	hungerRegen = 90;

	// IF above meet recover HP%/MIN
	recoveryPerMinute = 2;

	// Set custom aim precision coefficient for weapon sway
	// https://community.bistudio.com/wiki/Arma_3_Stamina
	// Set to -1 if you want to use Arma 3 default value
	// setCustomAimCoef
	customAimCoefficient = 0.5;

	// 0 or 1
	enableFatigue = 0;
	enableStamina = 0;

	disableMapDrawing = 1;
	
	// Use the current gradient to affect the players movement when autorunning.
	// 0 == default exile auto run
	useGradientAffectedAutoRun = 0;
};
/*
	This config will allow you to override the default poptab storage for vehicles and containers. 
	The current system takes the maxLoad of a vehicle * 10, and that gives you the max poptabs that can be stored.
	This will allow you to override that max with your own value.
	
	To override, just add the vehicle/containers classname to this class, and define its max. Look at Exile_Container_Safe_Small as an example.
*/
class CfgPoptabStorage
{
	class Exile_Container_Safe_Small { max = 5000000; };
	class Exile_Item_SafeKit { max = 10000000; };
	
};
class CfgSimulation
{
	/*
		Use Arma built in Dynamic Simulation. 
		If you have any issues with players unable to get into cars, control vehicles, fly planes, etc. try turning this off
		Options:
			0: Use Exile's built in simulation system (Same system in 1.0.3 and below)
			1: Use Dynamic Simulation
	*/
	enableDynamicSimulation = 0;
	
	/*
		Simulation distance settings
		For more information:
			https://community.bistudio.com/wiki/setDynamicSimulationDistance
			https://community.bistudio.com/wiki/setDynamicSimulationDistanceCoef
	*/
	
	// The distance, in meters, will infantry units be simulated. Default: 500m
	groupSimulationDistance = 500;
	
	// The distance, in meters, will vehicles with crew be simulated. Default: 350m
	vehicleSimulationDistance = 250;
	
	// The distance, in meters, will all vehicles without crew be simulated. Default: 250m
	emptyVehicleSimulationDistance = 250;
	
	// The distance, in meters, will static objects be simulated. This includes anything from a small tin can to a building. Default: 50m
	propSimulationDistance = 50;
	
	// Multiplies the entity activation distance by set value if the entity is moving. Default: 2
	isMovingSimulationCoef = 2;
};




class CfgSlothMachine
{
	spinCost = 100;
	Jackpot = 10100;
	
	chances[] = 
	{
		{85, ""}, 					// 85% = Nothing
		{95, "Level1"}, 			// 10% = 1pt
		{96, "Level2"}, 			// 1% = 10pt
		{97, "Level3"}, 			// 1% = 25pt
		{98, "Level4"}, 			// 1% = 50pt
		{99, "Level5"},				// 1% = 100pt
		{100, "Jackpot"} 			// 1% = Jackpot
	};

	class Prizes 
	{
		class Level1
		{
			symbol = "\exile_assets\texture\item\Exile_Item_ToiletPaper.paa";
			prize = 101;
		};

		class Level2
		{
			symbol = "\exile_assets\texture\item\Exile_Item_CockONut.paa";
			prize = 110;
		};

		class Level3
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Beer.paa";
			prize = 125;
		};

		class Level4
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Knife.paa";
			prize = 150;
		};

		class Level5
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Safe.paa";
			prize = 200;
		};
		
		class Jackpot
		{
			symbol = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
		};
	};
};
class CfgTerritories
{
	// Base Cost / Radius
	// Level 1 is allways for Pop Tabs, >= 2 for Respect
	prices[] = 
	{
		// Purchase Price 		Radius 		Number of Objects
		{1000000,					30,			50 				}, // Level 1
		{2000000,					40,			100 				}, // Level 2 
		{3000000,					50,			125 				}, // Level 3
		{4000000,					55,			150					}, // Level 4
		{5000000,					60,			175					}, // Level 5
		{6000000,					65,			200					}, // Level 6
		{7500000,					70,			225					}, // Level 7
		{10000000,					80,			250					}, // Level 8
		{12500000,					90,			275					}, // Level 9
		{20000000,					100,		300					} // Level 10
	};

	// A shortcut of the above maximum radius
	maximumRadius = 100;

	// The above * 2 plus coverving the 20m you can move while placing things
	minimumDistanceToOtherTerritories = 320; 

	// Maximum number of territories a player can own
	maximumNumberOfTerritoriesPerPlayer = 1;

	/**
	 * Defines the minimum distance to safe zones / trader cities where players
	 * cannot build territories
	 */
	minimumDistanceToTraderZones = 1000;

	/**
	 * Defines the minimum distance to spawn zones where players
	 * cannot build territories
	 */
	minimumDistanceToSpawnZones = 500;

	// Amount of pop tabs per object to pay
	popTabAmountPerObject = 25;

	// Amount of minutes building is disabled after a charge has been planted
	// in a territory. This basically prevents people from placing tons of walls
	// or removing walls while their territory is under attack.
	constructionBlockDuration = 30;
};

class CfgTraderCategories
{
	#include "EBM\traders.hpp"
	#include "TRADERS\CustomTrader\Ammo_trader.hpp"
	#include "TRADERS\CustomTrader\Attachments_trader.hpp"
	#include "TRADERS\CustomTrader\Backpacks_trader.hpp"
	#include "TRADERS\CustomTrader\Custom_trader.hpp"
	#include "TRADERS\CustomTrader\Explosives_trader.hpp"
	#include "TRADERS\CustomTrader\Headgear_trader.hpp"
	#include "TRADERS\CustomTrader\Items_trader.hpp"
	#include "TRADERS\CustomTrader\Uniforms_trader.hpp"
	#include "TRADERS\CustomTrader\Vehicles_trader.hpp"
	#include "TRADERS\CustomTrader\Vests_trader.hpp"
	#include "TRADERS\CustomTrader\Weapons_trader.hpp"
	//#include "TRADERS\CustomTrader\DLC.hpp"
	//#include "TRADERS\CustomTrader\CUP_Items_trader.hpp"
	#include "TRADERS\CustomTrader\CUP_Vehicle_trader.hpp"
	class Community
	{
		name = "Community Items";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community2
	{
		name = "Community Items 2";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community3
	{
		name = "Community Items 3";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community4
	{
		name = "Community Items 4";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community5
	{
		name = "Community Items 5";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community6
	{
		name = "Community Items 6";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community7
	{
		name = "Community Items 7";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community8
	{
		name = "Community Items 8";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community9
	{
		name = "Community Items 9";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community10
	{
		name = "Community Items 10";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};
};

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
		name = "Vehicle Trader";
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
			"Vehicle_Ivory",
			"TanksLight",
			"Reammo",
			"bigstorage",
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

class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.5;
	
	rekeyPriceFactor = 0.1;

	class requiredRespect 
	{
		Level1 = 0;
		Level2 = 500000;
		Level3 = 1000000;
		Level4 = 1500000;
		Level5 = 2000000;
		Level6 = 2500000;
	};
};
class CfgVehicleCustoms
{
	#include "CfgVehicleCustoms.cpp"
};

class CfgVehicleTransport 
{
	class Exile_Container_SupplyBox
	{
		vehicles[] = {"Exile_Car_Van_Abstract", "Exile_Car_Offroad_Abstract", "Exile_Car_Zamak_Abstract", "Exile_Car_HEMMT_Abstract", "Exile_Car_Tempest_Abstract"};

		class Exile_Car_Van_Abstract
		{
			attachPosition[] = {0, -1.1, 0.2};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0, -4.4};
		};

		class Exile_Car_Offroad_Abstract
		{
			attachPosition[] = {0, -1.6, 0.4};
			cargoIndizes[] = {1, 2, 3, 4}; 
			detachPosition[] = {0, -4};
		};

		class Exile_Car_Zamak_Abstract
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};

		class Exile_Car_HEMMT_Abstract
		{
			attachPosition[] = {0.05, -0.1, 0.3};
			cargoIndizes[] = {1, 2, 8, 9}; 
			detachPosition[] = {0.05, -6.1};
		};

		class Exile_Car_Tempest_Abstract
		{
			attachPosition[] = {0.08, -0.85, 0.4};
			cargoIndizes[] = {1, 6, 7, 9}; 
			detachPosition[] = {0.08, -6};
		};
	};
};
class CfgVirtualGarage
{
	/*
		Enable or disable virtual garage on the server
		Options:
			0: Disable virtual garage
			1: Enable virtual garage
	*/
	enableVirtualGarage = 1;	
	
	/*
		Enables or disables the ability to access virtual garage while in combat
		Options:
			0: Players cannot access virtual garage while they are in combat
			1: Players can access virtual garage when they are in combat
	*/
	canAccessGarageInCombat = 0;
	
	/*
		When enabled, this will dump any items and money from the vehicle onto the ground where the car was.
		Options:
			0: Do not clear inventory and money
			1: Clear inventory and money
	*/
	clearInventoryOnStore = 1;
	
	/*
		The maximum number of vehicles that can be stored in the VG for that territory.
		Use -1 to disable the ability to store vehicles at that level.
		Make sure to have the same number of levels here as you do in CfgTerritories!
	
		The allowed types of vehicles that can be stored in the garage	
		Available Types: "Car", "Tank", "Plane", "Air", "Ship", "Submarine"
	*/
	allowedVehicleTypes[] = {"Car","Tank","Plane","Air","Ship","Submarine"};
};
class CfgXM8 //"Compass",
{
	extraApps[] = {"ExAd_VG","ExAd_CHVD","BRAmaRecipes","BaseMarker","ExAd_Unit","ExAd_APOC_Airdrop",};
	
	class settings
	{
		controlID = 4070;
		appID = "App01";
		title = "Settings";
	};
	class healthScanner
	{
		controlID = 4120;
		appID = "App02";
		title = "Health Scanner";
	};
	class Compass 
	{
		title = "Compass";
		controlID = 80000;					//IDC:50200 -> 50102 || These need to be unique and out of range from each other
		logo = "ExAdClient\XM8\Apps\compass\compass.paa";
        quickFunction = "ExileClientXM8CurrentSlide = 'apps';closeDialog 0;[] execVM 'ExAdClient\XM8\Apps\compass\voyagerCompass.sqf'";
	};		
	/*
	* Make sure you change the server rules to match your desires.
	* You can find the file at ExAdClient\XM8\apps\info
	* The file you want to change is message.sqf
	*/
	class ExAd_Info
    {
        title = "Server Info";				//IDC:50100 -> 50102 || These need to be unique and out of range from each other
        controlID = 50100;                  
        logo = "PORN\XM8_Icons\plp_icon_information.paa";
        onLoad = "ExAdClient\XM8\Apps\Info\onLoad.sqf";
        onOpen = "ExAdClient\XM8\Apps\Info\onOpen.sqf";
        onClose = "ExAdClient\XM8\Apps\Info\onClose.sqf";
    };
    class ExAd_CHVD
    {
        title = "View Distance Settings";
        controlID = 50200;                  
        config = "ExadClient\XM8\Apps\CHVD\config.sqf";
        logo = "ExadClient\XM8\Apps\CHVD\Icon_CHVD.paa";
        onLoad = "ExAdClient\XM8\Apps\CHVD\onLoad.sqf";
        onOpen = "ExAdClient\XM8\Apps\CHVD\onOpen.sqf";
        onClose = "ExAdClient\XM8\Apps\CHVD\onClose.sqf";
    };
    class ExAd_JX
    {
        title = "Unit Scanner";
        controlID = 85100;                    
        logo = "ExadClient\XM8\Apps\JX\logo.paa";
        onLoad = "ExAdClient\XM8\Apps\JX\onLoad.sqf";
        onOpen = "ExAdClient\XM8\Apps\JX\onOpen.sqf";
        onClose = "ExAdClient\XM8\Apps\JX\onClose.sqf";
    };
	 class ExAd_VG
    {
        title = "Virtual Garage";
        controlID = 50000;                  //IDC:50000 -> 50015 || These need to be unique and out of range from each other
        logo = "ExadClient\XM8\Apps\VG\Icon_VG.paa";
        onLoad = "ExAdClient\XM8\Apps\VG\onLoad.sqf";
        onOpen = "ExAdClient\XM8\Apps\VG\onOpen.sqf";
        onClose = "ExAdClient\XM8\Apps\VG\onClose.sqf";
    };
	class BRAmaRecipes
    {
        controlID = 107000;
        title = "Crafting Recipies";
        logo = "PORN\XM8_Icons\plp_icon_industrial.paa";
        config = "ExAdClient\XM8\Apps\bramarecipes\config.sqf";
        onLoad = "ExAdClient\XM8\Apps\bramarecipes\onLoad.sqf";
        onOpen = "ExAdClient\XM8\Apps\bramarecipes\onOpen.sqf";
    };
	class BaseMarker
	 {
		 title = "Base Marker";
		 controlID = 70001;
		 logo = "PORN\XM8_Icons\Territory.paa";
		 onLoad = "ExAdClient\XM8\Apps\BaseMarker\onLoad.sqf";
	 };
	 class VehicleService
	 {
		 title = "Ductape Repair";
		 logo = "PORN\XM8_Icons\plp_icon_carWorkshop.paa";
		 onLoad = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
	 };
	 class Saveloadout
	 {
		 title = "Save Loadout";
		 logo = "PORN\XM8_Icons\plp_icon_specialforces.paa";
		 onLoad = "[] call SM_LoadoutTrader_show";
	 };
	 class ExAd_SB
    {
        title = "Statsbar Settings";
        controlID = 50400;                  //IDC:50400 -> 50475 || These need to be unique and out of range from each other
        logo = "exile_assets\texture\ui\xm8_app_settings_ca.paa";
        onLoad = "ExAdClient\XM8\Apps\SB_Settings\onLoad.sqf";
    };
	class ExAd_Quad
     {
        title = "Deploy Quad Bike";
        config = "ExAdClient\XM8\Apps\DeployVehicle\config.sqf";
        logo = "ExAdClient\XM8\Apps\DeployVehicle\Quad.paa";
        bambiState = 0;
        vehicleClass = "Exile_Bike_QuadBike_Fia";
        recipe[] = {{"Exile_Item_ExtensionCord",1}};
        packable = 1;
        autoCleanUp = 1;
        quickFunction = "['ExAd_Quad'] call ExAd_XM8_DV_fnc_spawnVehicle";
     };
	
	 class ExAd_Unit
    {
        title = "Recruit Soldier: x2 Thermalscannerpro needed";
        logo = "ExAdClient\XM8\Apps\DeployVehicle\dog.paa";
        bambiState = 0;
        vehicleClass = "Land_AncientStatue_01_F";
        recipe[] = {{"Exile_Item_ThermalScannerPro",2}};
        packable = 0;
        autoCleanUp = 0;
        quickFunction = "['ExAd_Unit'] call ExAd_XM8_DV_fnc_spawnVehicle";
    };
	
	 class ExAd_APOC_Airdrop
	{
		title = "APOC Airdrop";
        controlID = 66000﻿;                    //IDC:66000 -> 66005 || These need to be unique and out of range from each other
        appID = "App07";                     //Make sure this is the same as the button you are using. For example if you next free button is "XM8_App07_Button" then this would be "App07"
        config = "ExadClient\XM8\Apps\APOC_Airdrop\config.sqf";
        onLoad = "ExAdClient\XM8\Apps\APOC_Airdrop\onLoad.sqf";
        onOpen = "ExAdClient\XM8\Apps\APOC_Airdrop\onOpen.sqf";
        onClose = "ExAdClient\XM8\Apps\APOC_Airdrop\onClose.sqf";
	};
	class SM_LockingPlus
	{
		controlID = 51259;
		appID = "App05";
		title = "Remote Gates";
	};
	class cyMachine	{
		controlID = 85150;
		appID = "App05";
		title = "Player Market By Cyunide";
	};

	class cyMachineSell {
		controlID = 85160;
		title = "Player Market By Cyunide Sell";
	};
};
/*
	XM8 Extra apps, the Exile way of doing it
	
	Here is an example app layout:
	class XM8_App01_Button: RscExileXM8AppButton1x1
	{
	    textureNoShortcut = "";  	// Path to picture. This can be via mission file or client side PBO
	    text = "";					// The name of the app to be display on the button
	    onButtonClick = "";			// The code to fire when the app is clicked
	    resource = "";				// The name of the resource to load for the app, leave as an empty string if you just want to run code without a GUI, like BOOM or spawning a bike
	};
*/

class XM8_App01_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "PORN\XM8_Icons\plp_icon_mine.paa";
    text = "BOOM!";
    onButtonClick = "call ExileClient_system_breaching_detonate";
    resource = "";
};

class XM8_App02_Button: RscExileXM8AppButton1x1
{
   // textureNoShortcut = "ExAdClient\XM8\Apps\compass\compass.paa";
   // text = "Compass";
   // onButtonClick = "ExileClientXM8CurrentSlide = 'apps';closeDialog 0;[] execVM 'ExAdClient\XM8\Apps\compass\voyagerCompass.sqf'";
   // resource = "";
	textureNoShortcut = "PORN\XM8_Icons\plp_icon_cross.paa";
    text = "Health Scanner";
    onButtonClick = "['healthScanner', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideHealthScanner";
};

class XM8_App03_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "PORN\XM8_Icons\plp_icon_gearwheel.paa";
    text = "Settings";
    onButtonClick = "['settings', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideSettings";
};

class XM8_App04_Button: RscExileXM8AppButton1x1
{
	textureNoShortcut = "PORN\XM8_Icons\plp_icon_industrial.paa";
    text = "Crafting Recipes";
    onButtonClick = "['BRAmaRecipes', 0] call ExileClient_gui_xm8_slide";
    resource = "";
};

class XM8_App05_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "PORN\XM8_Icons\plp_icon_market.paa";
    text = "Player Market";
    onButtonClick = "['cyMachine', 0] call ExileClient_gui_xm8_slide;";
    resource = "XM8SlideCyunide";
};

class XM8_App06_Button: RscExileXM8AppButton1x1
{
	textureNoShortcut = "PORN\XM8_Icons\Territory.paa";
    text = "Base Marker";
    onButtonClick = "['Basemarker', 0] call ExileClient_gui_xm8_slide";
    resource = ""; 
};

class XM8_App07_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "PORN\XM8_Icons\plp_icon_parachutecargo.paa";
    text = "Airdrop";
    onButtonClick = "['ExAd_APOC_Airdrop', 0] call ExileClient_gui_xm8_slide";
    resource = "";
};

class XM8_App08_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "PORN\XM8_Icons\plp_icon_magnifyingglass.paa";
    text = "View Distance Settings";
    onButtonClick = "['ExAd_CHVD', 0] call ExileClient_gui_xm8_slide";
    resource = "";
};

class XM8_App09_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App10_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App11_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App12_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App13_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App14_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											   BELOW IS WHERE ALL THE XM8 APP RESOURCES CAN GO
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class XM8SlideSettings: RscExileXM8Slide 
{
	idc = 4070;
	class Controls 
	{
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4071;
			text = "GO BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};

		class 8GDropDown: RscExileXM8Combo
		{
			idc = 4072;
			x = (5 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_on8GSelectionChanged";
		};

		class 8GLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Show my device in global 8G network."; 
			x = (13 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class SoundDropDown: RscExileXM8Combo
		{
			idc = 4075;
			x = (5 - 3) * (0.025);
			y = (7 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onSoundSelectionChanged";
		};

		class SoundLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Play a beep sound on notifications."; 
			x = (13 - 3) * (0.025);
			y = (7 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyEspDropDown: RscExileXM8Combo
		{
			idc = 4076;
			x = (5 - 3) * (0.025);
			y = (9 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSelectionChanged";
		};

		class PartyEspLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Color of 3D party icons and name tags."; 
			x = (13 - 3) * (0.025);
			y = (9 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyEspSlider: RscExileXM8XSliderH
		{
			idc = 4078;
			x = (5 - 3) * (0.025);
			y = (11 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onSliderPosChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSliderChanged";
		};

		class PartyEspSliderLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Opacity of 3D party icons and name tags."; 
			x = (13 - 3) * (0.025);
			y = (11 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyMarkerSlider: RscExileXM8XSliderH
		{
			idc = 4079;
			x = (5 - 3) * (0.025);
			y = (13 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onSliderPosChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyMarkerSliderChanged";
		};

		class PartyMarkerSliderLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Opacity of 3D party markers."; 
			x = (13 - 3) * (0.025);
			y = (13 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class StreamModeDropDown: RscExileXM8Combo
		{
			idc = 4077;
			x = (5 - 3) * (0.025);
			y = (15 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onStreamModeSelectionChanged";
		};

		class StreamModeLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Masquerade PIN codes. Perfect for streamers."; 
			x = (13 - 3) * (0.025);
			y = (15 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};
	};
};
class XM8SlideHealthScanner: RscExileXM8Slide
{
	idc = 4120;
	class Controls 
	{
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4122;
			text = "GO BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};

		class HealthInfoControlGroup: RscExileXM8ControlsGroupNoHScrollbars
		{
			idc = -1;
			x = (5 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 30 * (0.025);
			h = 15 * (0.04);
			colorBackground[] = {0,0,0,0.25};

			class controls
			{
				class HealthInfo: RscExileXM8StructuredText
				{
					idc = 4121;
					x = 0;
					y = 0;
					w = 29 * (0.025); // minus 1!
					h = 15 * (0.04);
				};
			};
		};
	};
};
class XM8SlideCyunideSell: RscExileXM8Slide
{
	idc = 85160;
	class Controls {
		class cyLblSellItemTitle: RscExileXM8Text
{
	idc = 85161;
	text = "Sell An Item: (WARNING! Listing an item will remove all attatchments on it! They will be lost!)"; //--- ToDo: Localize;
	x = 2 * GUI_GRID_W + GUI_GRID_X;
	y = 2 * GUI_GRID_H + GUI_GRID_Y;
	w = 31 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class cylstSellInventory: RscExileXM8Listbox
{
	idc = 85162;
	x = 2 * GUI_GRID_W + GUI_GRID_X;
	y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 31 * GUI_GRID_W;
	h = 12 * GUI_GRID_H;
};
class cybtnSellGoBack: RscExileXM8ButtonMenu
{
	idc = 85163;
	text = "Go Back"; //--- ToDo: Localize;
	x = 28.5 * GUI_GRID_W + GUI_GRID_X;
	y = 17 * GUI_GRID_H + GUI_GRID_Y;
	w = 4.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	onButtonClick = "[] execVM 'MarketByCyunide\Functions\onSellGoBack.sqf';";
};
class cylblSellPrice: RscExileXM8Text
{
	idc = 85164;
	text = "Sell Price:"; //--- ToDo: Localize;
	x = 2 * GUI_GRID_W + GUI_GRID_X;
	y = 17 * GUI_GRID_H + GUI_GRID_Y;
	w = 4 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class cytxtSellPrice: RscExileXM8Edit
{
	idc = 85165;
	text = "0"; //--- ToDo: Localize;
	x = 6 * GUI_GRID_W + GUI_GRID_X;
	y = 17 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	tooltip = "Amount of pop tabs to sell your item for."; //--- ToDo: Localize;
};
class cybtnSellNow: RscExileXM8ButtonMenu
{
	idc = 85166;
	text = "List Item For Sale"; //--- ToDo: Localize;
	x = 15 * GUI_GRID_W + GUI_GRID_X;
	y = 17 * GUI_GRID_H + GUI_GRID_Y;
	w = 9.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	onButtonClick = "[] execVM 'MarketByCyunide\Functions\fn_ListItem.sqf';";
};
	};
};

class XM8SlideCyunide: RscExileXM8Slide
{
	idc = 85150;
	class Controls 
	{
		// START PASTE
class cylbl_Title: RscExileXM8Text
{
	idc = 85151;
	text = "Player Market"; //--- ToDo: Localize;
	x = 2 * GUI_GRID_W + GUI_GRID_X;
	y = 2 * GUI_GRID_H + GUI_GRID_Y;
	w = 5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class cybtnRefresh: RscExileXM8ButtonMenu
{
	idc = 85152;
	text = "Refresh"; //--- ToDo: Localize;
	x = 8 * GUI_GRID_W + GUI_GRID_X;
	y = 2 * GUI_GRID_H + GUI_GRID_Y;
	w = 4.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	onButtonClick = "[] execVM 'MarketByCyunide\Functions\onOpen.sqf';";
	
};
class cytxtSearchText: RscExileXM8Edit 
{
	idc = 85153;
	text = "";
	x = 13.5 * GUI_GRID_W + GUI_GRID_X;
	y = 2 * GUI_GRID_H + GUI_GRID_Y;
	w = 14 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class cybtnSearch: RscExileXM8ButtonMenu
{
	idc = 85154;
	text = "Search"; //--- ToDo: Localize;
	x = 28 * GUI_GRID_W + GUI_GRID_X;
	y = 2 * GUI_GRID_H + GUI_GRID_Y;
	w = 4.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	 onButtonClick = [(ctrlText 85153)] call CyFs_fnc_doSearch;
	
};
class cylstItems: RscExileXM8Listbox
{
	idc = 85155;
	x = 2 * GUI_GRID_W + GUI_GRID_X;
	y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 30.5 * GUI_GRID_W;
	h = 12 * GUI_GRID_H;
	//onLBSelChanged = "_sTxt = lbText[1500, lbCurSel 1500]; hint _sTxt; systemChat lbData[1500, lbCurSel 1500];";
};
class cyBtnGoBack: RscExileXM8ButtonMenu
{
	idc = 85156;
	text = "Go Back"; //--- ToDo: Localize;
	x = 28 * GUI_GRID_W + GUI_GRID_X;
	y = 17 * GUI_GRID_H + GUI_GRID_Y;
	w = 4.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
};
class cybtnSellAnItem: RscExileXM8ButtonMenu
{
	idc = 85157;
	text = "Sell An Item"; //--- ToDo: Localize;
	x = 14 * GUI_GRID_W + GUI_GRID_X;
	y = 17 * GUI_GRID_H + GUI_GRID_Y;
	w = 6.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	onButtonClick = "[] execVM 'MarketByCyunide\Functions\onSellOpenFirst.sqf';";
};
class cybtnBuyItNow: RscExileXM8ButtonMenu
{
	idc = 85158;
	text = "Buy Item"; //--- ToDo: Localize;
	x = 2 * GUI_GRID_W + GUI_GRID_X;
	y = 17 * GUI_GRID_H + GUI_GRID_Y;
	w = 5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	onButtonClick = [(lbData[85155, lbCurSel 85155])] call CyFs_fnc_RequestBuy;
};
		// END PASTE
	};
};

class SpawnVehicleItems{
	/**
	* Vehicles in the world
	*/
	class WorldVehicles{
		/*
		* Allow(1) or disable(0) Items in Spawned vehicles
		* kinda self explanitory
		*/
		vehicleItemsAllowed = 1;
		/*
		* Set the maximum Items per Vehicle to
		* kinda self explanitory
		*/
		maximumItemsPerVehicle = 5;
		/*
		* Array of allowedItems
		* kinda self explanitory
		*/
		allowedItems[] = {
			"Exile_Item_ToiletPaper",
			"Exile_Item_PlasticBottleEmpty",
			"Exile_Item_Can_Empty"
		};
	};
};