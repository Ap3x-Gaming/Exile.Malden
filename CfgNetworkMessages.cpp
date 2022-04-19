	
	//Paintscript
	class updatePaint
    {
        module = "paint";
        parameters[] = {"STRING","SCALAR","ARRAY"};
    };
	//Hack Flag
	 class hackFlagRequest
    {
        module="object_flag";
        parameters[]=
        {
            "STRING"
        };
    };
    class updateFlagHackAttemptRequest
    {
        module="object_flag";
        parameters[]=
        {
            "STRING"
        };
    };
    class startFlagHackRequest
    {
        module="object_flag";
        parameters[]=
        {
            "STRING"
        };
    };
	// playermarket
	class getItemGUIRequest
    {
        module="system_transport";
        parameters[]=
        {
            "STRING"
        };
    };
   
    class getItemGUIResponse
    {
        module="system_transport";
        parameters[]=
        {
            "SCALAR",
            "STRING"
        };
    };
	
	class listItemPlayerMarketRequest
    {
        module="system_transport";
        parameters[]=
        {
            "STRING",
			"STRING",
			"SCALAR",
			"STRING",
			"SCALAR"
        };
    };
	
	class listPlayerMarketResponse 
	{
		module="system_transport";
		parameters[]= { "SCALAR" };
	};
	
	//SM Lockerplus
	class lockerRequestResponse
	{
		module = "SM";
		parameters[] = {"ARRAY","SCALAR"};
	};
	//ESM FLAG HACK
	class flagStealStartedRequest
	{
	    module = "system_territory";
	    parameters[] =
	    {
        "OBJECT"
	    };
	};
	//Dragbody
	class moveBodyResponse
	{
		module = "DragBody";
		parameters[] = {"STRING","BOOL"};
	};
	//Saveloadout
	class requestSavedLoadoutsResponse
	{
		module = "SM";
		parameters[] = {"ARRAY"};
	};
	class purchaseLoadoutResponse
	{
		module = "SM";
		parameters[] = {"ARRAY"};
	};
		class perksLoadRequest
	{
		module = "system_perks";
		parameters[] = {"BOOL"};
	};
	class perksUpdateRequest
	{
		module = "system_perks";
		parameters[] = {"ARRAY"};
	};