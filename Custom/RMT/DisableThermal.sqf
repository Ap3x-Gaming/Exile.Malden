thermalsOffline = 
{ 
	if (currentVisionMode player == 2) then
	{
		_layer = 85125; 
		_launchers =["launch_O_Vorona_brown_F","launch_O_Vorona_green_F","launch_I_Titan_short_F","launch_O_Titan_short_F","launch_B_Titan_short_F","launch_Titan_short_F","launch_Titan_F","launch_O_Titan_F","launch_I_Titan_F","launch_B_Titan_F","HMG_static"];		
		if (currentweapon player in _launchers) then
		{
			["ErrorTitleOnly", ["Thermal Imaging OFFLINE"]] call ExileClient_gui_toaster_addTemplateToast;
			_layer	cutText ["FLIR Mode Disabled. Please Turn off Thermals.","BLACK FADED",999];
			waituntil {currentVisionMode player != 2};
			_layer cutText ["", "PLAIN"];
		}
		else
		{
			if (alive (getConnectedUAV player)) then		
			{
				["ErrorTitleOnly", ["Thermal Imaging OFFLINE"]] call ExileClient_gui_toaster_addTemplateToast;
				_layer cutText ["FLIR Mode Disabled. Please Turn off Thermals.","BLACK FADED",999];
				waituntil {currentVisionMode player != 2};
				_layer cutText ["", "PLAIN"];
			}
			else
			{
				vehicle player disableTIEquipment true;
			};
		};	
	};
};
[
	0.1,
	thermalsOffline,
	[],
	true,
	false
]
call ExileClient_system_thread_addTask;﻿﻿﻿