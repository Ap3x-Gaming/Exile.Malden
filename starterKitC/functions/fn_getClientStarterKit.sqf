/*
	
 spawn starter kit and call update function for database

*/

params [
	["_pid", "", [""]]
];

_boxClassName = "Exile_Container_SupplyBox";

_starterKitBox = _boxClassName createVehicle position player;

_starterKitBox addItemCargo ["SN_coyote",1];
_starterKitBox addItemCargo ["Exile_Item_Flag",1];
_starterKitBox addItemCargo ["Exile_Item_ConcreteFloorKit",8];
_starterKitBox addItemCargo ["Exile_Item_ConcreteDoorKit",2];
_starterKitBox addItemCargo ["Exile_Item_ConcreteFloorPortKit",1];
_starterKitBox addItemCargo ["Exile_Item_ConcreteDrawBridgeKit",1];
_starterKitBox addItemCargo ["Exile_Item_ConcreteLadderHatchKit",1];
_starterKitBox addItemCargo ["Exile_Item_ConcreteGateKit",2];
_starterKitBox addItemCargo ["Exile_Item_ConcreteWindowKit",4];
_starterKitBox addItemCargo ["Exile_Item_ConcreteStairsKit",2];
_starterKitBox addItemCargo ["Exile_Item_WoodWallHalfKit",4];
_starterKitBox addItemCargo ["Exile_Item_ConcreteWallKit",8];
_starterKitBox addItemCargo ["Exile_Item_WoodWindowKit",2];
_starterKitBox addItemCargo ["Exile_Item_WorkBenchKit",1];
_starterKitBox addItemCargo ["Exile_Item_SafeKit",2];
_starterKitBox addItemCargo ["H_HelmetO_ViperSP_hex_F",1];


["SuccessTitleAndText", ["Success!", format["Starter Box spawned"]]] call ExileClient_gui_toaster_addTemplateToast;

[_pid] call cg_fnc_updateRequestClient;