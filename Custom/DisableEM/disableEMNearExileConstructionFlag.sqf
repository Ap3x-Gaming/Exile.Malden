private ["_inTerritory"];
_inTerritory = false;

[_inTerritory] spawn {

  _inTerritory  = _this select 0;
    while {alive player} do {

        _getTargetsInXRange = player nearTargets 160; 
        if (count _getTargetsInXRange > 0) then {
              _foo = false;
              {
                  if ("Exile_Construction_Flag_Static" in _x) then {
                    _foo = true;
                  };
              } forEach _getTargetsInXRange;

              if(_foo) then { 
             EM_enable = [false, false]; 
             if (_inTerritory isEqualTo false) then {
   				["ErrorTitleOnly", ["EM is now disabled!"]] call ExileClient_gui_toaster_addTemplateToast; 
              	_inTerritory = true;
             };
            };
        } else {
            if (_inTerritory isEqualTo true) then {
              	["ErrorTitleOnly", ["EM is now active again!"]] call ExileClient_gui_toaster_addTemplateToast; 
                _inTerritory = false;
            };
            EM_enable = [true, true]; 
        };
         uiSleep 2;
    };
};