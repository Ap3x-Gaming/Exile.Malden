//Config Activate Scripts:
RMT_Use_DragAndDropBody = 	true;
RMT_Use_BuryBody = 			true;
//End Config

_dragBodyColor = parseText "#ffffff";
_buryBodyColor = parseText "#ffffff";

if (alive player) then
{
	
	
	//for DragAndDropBody
	if (RMT_Use_DragAndDropBody) then
	{
		if (isNil 'RMT_DragBodyActionId') then
		{
			RMT_DragBodyActionId = player addaction[format["<t color='%1'>Drag Body</t>",_dragBodyColor],
			{
				[CursorTarget] call RMT_fnc_Body_DragAction
			},[],3,false,true,"",
			"
			((((typeOf CursorTarget) isEqualTo 'C_man_1') || ((typeOf CursorTarget) isEqualTo 'Exile_Unit_Player')) and
			!(alive CursorTarget) and
			(isNull attachedTo CursorTarget) and 
			((player distance CursorTarget) < 3))
			"];
		};
	};
	
	//for BuryBody
	if (RMT_Use_BuryBody) then
	{
		if (isNil 'RMT_BuryBodyActionId') then
		{
			RMT_BuryBodyActionId = player addaction[format["<t color='%1'>Bury Body</t>",_buryBodyColor],
			{
				[CursorTarget] call RMT_BuryBody
			},[],1,false,true,"",
			"
			(!(alive CursorTarget) and
			(((typeOf CursorTarget) isEqualTo 'C_man_1') || ((typeOf CursorTarget) isEqualTo 'Exile_Unit_Player')) and
			!(CursorTarget call Remeto_util_world_isInWater) and
			(isNull attachedTo CursorTarget) and
			((player distance CursorTarget) < 3))
			"];
		};
	};
};

if !(alive player) then
{
	if (RMT_Use_DragAndDropBody) then
	{
		if !(isNil 'RMT_DragBodyActionId') then
		{
			player removeAction RMT_DragBodyActionId;
			RMT_DragBodyActionId = nil;
		};
	};
	
	if (RMT_Use_BuryBody) then
	{
		if !(isNil 'RMT_BuryBodyActionId') then
		{
			player removeAction RMT_BuryBodyActionId;
			RMT_BuryBodyActionId = nil;
		};
	};
};
