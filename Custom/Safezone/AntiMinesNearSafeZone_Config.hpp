class AntiMinesNearSafeZone_Config
{
    /*
        Placing mines will be blocked near all the follwing marker types
        {"MARKER TYPE", Distance in metres to block}
    */
    MarkersToBlockNear[] =
    {
        {"ExileTraderZoneIcon", 250},
        {"ExileAircraftTraderIcon", 250},
        {"ExileBoatTraderIcon", 250},
		{"ExileSpecOpsTraderIcon", 250},
		{"ExileVehicleIcon", 250}
    };
};
