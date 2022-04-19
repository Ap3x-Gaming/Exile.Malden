/**
 * ExileClient_object_player_bambiStateEnd
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
disableSerialization;
if (ExileClientPlayerIsBambi) then 
{
	if (alive player) then
	{
		["InfoTitleOnly", ["Your Bambi state expired!"]] call ExileClient_gui_toaster_addTemplateToast;
		["endBambiStateRequest"] call ExileClient_system_network_send;	
		 waituntil {sleep 1; alive player};   	
		[] execVM "maverick\talent-tree-modular\fn_init.sqf";
		 waituntil {sleep 1; alive player};   	
		[] execVM "maverick\hello.sqf";

	};
	[ExileClientEndBambiStateThread] call ExileClient_system_thread_removeTask;
	ExileClientPlayerIsBambi = false;
	false call ExileClient_gui_hud_toggleBambiIcon;
	 waituntil {sleep 1; alive player};   	
	[] execVM "maverick\talent-tree-modular\fn_init.sqf";
	 waituntil {sleep 1; alive player};   	
	[] execVM "maverick\hello.sqf";

};
true