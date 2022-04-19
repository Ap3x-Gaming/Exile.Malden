scriptName "functions_recoilCompensation_4";

#define __filename "functions_recoilCompensation_4.sqf"


player addEventHandler ["Fired",{   
   
 params ["_unit","_weapon","_muzzle","_mode","_ammo","_magazine"];   
   
 if (count (magazinesAmmoFull _unit select {_x select 0 isEqualTo _magazine}) > 1) then {   
   
  _totalMags = magazinesAmmoFull _unit select {_x select 0 isEqualTo _magazine};   
   
  _totalAmmo = 0;   
  _totalMags apply {_totalAmmo = _totalAmmo + (_x select 1)};   
    
  [ format [ "[ %1 ]", _totalAmmo ], safeZoneX+1.562, safeZoneX+1.855, 1e10, 0, 0, 5 ] spawn BIS_fnc_dynamicText;   
    
  _magAmmoCount = _totalMags select 0 select 1;   
  _magStorage = _totalMags select 0 select 4;   
  _magAmmo = _magAmmoCount - 1;   
   
  _unit removeMagazine _magazine;   
   
  if (_magAmmo > 0) then {   
   
   _unit addMagazine [_magazine, _magAmmo];   
   
  };   
   
  _maxMagAmmoCount = getNumber (configfile >> "CfgMagazines" >> _magazine >> "count");   
   
  _unit setAmmo [_weapon,_maxMagAmmoCount];   
   
 }  
 else  
 {  
 _currentWeaponState = weaponState player;   
 _currentAmmoCount = _currentWeaponState select 4;   
  [ format [ "<t color='#ff0000'>[ %1 ]", _currentAmmoCount ], safeZoneX+1.562, safeZoneX+1.855, 1e10, 0, 0, 5 ] spawn BIS_fnc_dynamicText;   
 };   
   
}];




 