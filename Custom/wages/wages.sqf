
while {alive player} do
{
	_wages = (player getVariable ["ExileMoney", 0]);
	if((player call ExileClient_util_world_isInOwnTerritory) or (ExilePlayerInSafezone)) then
	{
		_wage = 0;
		[parseText format["<t size='0.4' shadow='2' color='#3FD4FC' shadowColor='#131718' font='RobotoRegular'>You did not earn poptabs while at base or trader</t>"],0,-0.35,5,1] spawn bis_fnc_dynamictext;
		uiSleep 300;
	}
		else
	{
		_wage = 5000;//awards a player 100 poptabs every 300 seconds whilst not in trader or their territory
		_wages = _wages + _wage;
		[parseText format["<t size='0.4' shadow='2' color='#3FD4FC' shadowColor='#131718' font='RobotoRegular'>You received %1 poptabs, you now have %2 poptabs - Remember to bank it or, gone at restart!</t>",_wage,_wages],0,-0.35,5,1] spawn bis_fnc_dynamictext;
		player setVariable ["ExileMoney",_wages,true];
		uiSleep 300;
	};
};
