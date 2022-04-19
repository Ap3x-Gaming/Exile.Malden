class CfgRemoteExec
{
	class Functions
	{
		mode = 1;
		jip = 0;
		class fnc_AdminReq { allowedTargets=2; };	// infiSTAR AntiHack
		class fn_xm8apps_server { allowedTargets=2; };	// infiSTAR xm8apps
		class ExileServer_system_network_dispatchIncomingMessage { allowedTargets=2; };	// ExileMod
		class ExAdServer_fnc_clientRequest { allowedTargets=2; };
		class APOC_srv_startAirdrop { allowedTargets=2;	};
		// remote functions use on server
		class cgsrv_fnc_updateStarterKitServer { allowTargets = 2; };
		class cgsrv_fnc_requestStarterKitClient { allowTargets = 2; };
		class RMT_fnc_Body_vehicleAddAction { allowedTargets=0; }; //Server and all Clients
		class RMT_fnc_Body_vehicleRemoveAction { allowedTargets=0; }; //Server and all Clients
		class RMT_fnc_Body_attach { allowedTargets=0; }; //Server and all Clients
		class RMT_fnc_Body_detach { allowedTargets=0; }; //Server and all Clients
		//Scratcies
        class ExileServer_lottery_network_request { allowedTargets = 2; }
		// remote functions use on client

		class cg_fnc_updateRequestClient { allowTargets = 1; };
		class cg_fnc_recieveRequestClient { allowTargets = 1; };
		class ClaimVehicles_Server // Claim Vehicles
    {
        class Bootstrap
        {
            file = "ClaimVehicles_Server\bootstrap";
            class preInit
            {
                preInit = 1;
            };
            class postInit
            {
                postInit = 1;
            };
        };
    };
	};
	class Commands
	{
		mode=0;
		jip=0;
	};
};