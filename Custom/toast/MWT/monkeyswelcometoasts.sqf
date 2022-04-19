/*		
	Script name: Monkey's Welcome Toasts
	Author: [GADD] Monkeynutz
	Description: Fully customizable welcome messages.
	Liscence: You are free to edit the script as you please. Steal it from my mission file/download it or what ever,
	just edit what you want and if you have questions, come and ask me on TeamSpeak: ts3.gamingatdeathsdoor.com or 
	www.gamingatdeathsdoor.com on my forums. Don't distribute it to other people under your own name. Send them to
	my download links on the Exile Forums.
*/

private ["_servername","_discordLink","_serverclantag","_website","_donatelink","_generaltitlecolor","_generaltextcolor","_generaltoastcolor","_importanttitlecolor","_importanttextcolor","_importanttoastcolor"];

//	Modify the below variables to what you want to be displayed as messages to players.

_servername = "TRG Chernarus Exile";
_serverclantag = "[TRG]";
_website = "https://discord.gg/bekeDwkv4C";
_discordLink = "https://discord.gg/bekeDwkv4C";
_donatelink = " https://paypal.me/TRGOwner?locale.x=en_US";

//	The colors can be edited below and there is a great tool I recommend you use to get the color codes designed by |GITS|Root here: https://arma3rgb.com
//	^ Website is in beta so dont judge

//General toast colors for normal messages

_generaltitlecolor = "#37e615"; 
_generaltextcolor = "#fffb00"; 
_generaltoastcolor = [0, 1, 0.58, 1];

//Important colors below (used for rules info etc. to stand out)

_importanttitlecolor = "#37e615"; 
_importanttextcolor = "#fffb00"; 
_importanttoastcolor = [1, 0.39, 0.17, 1];

waitUntil{!isNull findDisplay 46 && !isNil 'ExileClientLoadedIn' && getPlayerUID player != ''};  

if ( alive player ) then {

  	uiSleep 15;
	[format ["<t size='30' font='OrbitronMedium' color='%1'>Welcome, %2!</t><br /> 
	<t size='22' font='PuristaMedium' color='%3'>TRG Exile Chernarus %4 %5!</t>",_generaltitlecolor, name player, _generaltextcolor, _servername, worldName], _generaltoastcolor] call ExileClient_gui_toaster_addToast; sleep 15;
	
	[format ["<t size='30' font='OrbitronMedium' color='%1'>Join our Discord! %2!</t><br /> 
	<t size='22' font='PuristaMedium' color='%3'>TRG Exile Chernarus %4 %5!</t>",_generaltitlecolor, name player, _generaltextcolor, _servername, worldName], _generaltoastcolor] call ExileClient_gui_toaster_addToast; sleep 15;
	
	[format ["<t size='30' font='OrbitronMedium' color='%1'>Consider Donating?</t><br />
	<t size='20' font='PuristaMedium' color='%2'>%3<br />Donations will be appreciated!</t>", _generaltitlecolor, _generaltextcolor, _donatelink], _generaltoastcolor] call ExileClient_gui_toaster_addToast; sleep 30;

	[format ["<t size='30' font='OrbitronMedium' color='%1'>Server Rules!</t><br />
	<t size='22' font='PuristaMedium' color='%2'>Read Rules on discord! Ignorance is no excuse!</t>", _importanttitlecolor, _importanttextcolor], _importanttoastcolor] call ExileClient_gui_toaster_addToast; sleep 50;
	
	[format ["<t size='30' font='OrbitronMedium' color='%1'>Server Information!</t><br />
	<t size='22' font='PuristaMedium' color='%2'>All information you might like to know is on our Discord...</t>", _importanttitlecolor, _importanttextcolor], _importanttoastcolor] call ExileClient_gui_toaster_addToast; sleep 55;
	
	[format ["<t size='30' font='OrbitronMedium' color='%1'>Starterkit!</t><br />
	<t size='22' font='PuristaMedium' color='%2'>Claim your starter kit in the XM8</t>", _generaltitlecolor, _generaltextcolor], _generaltoastcolor] call ExileClient_gui_toaster_addToast; sleep 150;

	[format ["<t size='30' font='OrbitronMedium' color='%1'>Enjoy the Server and have a good time!</t><br /> 
	<t size='22' font='PuristaMedium' color='%2'>Thank you for playing %3, %4! We hope to see you more often!</t>", _generaltitlecolor, _generaltextcolor, _serverclantag, name player], _generaltoastcolor] call ExileClient_gui_toaster_addToast;
};
