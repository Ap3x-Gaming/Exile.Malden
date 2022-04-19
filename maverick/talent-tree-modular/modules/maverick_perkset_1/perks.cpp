// -- Weapon related perks
class perk_gunsspecialist_lessRecoil_1 {
	displayName = "Recoil Compensation";
	requiredPerkPoints = 250;
	requiredLevel = 15;
	requiredPerk = "";
	subtitle = "Level 15 Required, 250 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>25% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\recoil\functions_recoilCompensation_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_2 {
	displayName = "Recoil Compensation 2";
	requiredPerkPoints = 750;
	requiredLevel = 40;
	requiredPerk = "perk_gunsspecialist_lessRecoil_1";
	subtitle = "Level 40 Required, 1000 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>50% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\recoil\functions_recoilCompensation_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_3 {
	displayName = "Recoil Compensation 3";
	requiredPerkPoints = 1000;
	requiredLevel = 60;
	requiredPerk = "perk_gunsspecialist_lessRecoil_2";
	subtitle = "Level 60 Required, 2000 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>75% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\recoil\functions_recoilCompensation_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};


//Grind
class perk_grinding_lessTime_1 {
	displayName = "Grind Time";
	requiredPerkPoints = 100;
	requiredLevel = 10;
	requiredPerk = "";
	subtitle = "Level 10 Required, 100 Perk Points";
	description = "The ability to Grind faster<br/><br/><t color='#10FF45'>10% less time</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\grind\functions_grind_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_grinding_lessTime_2 {
	displayName = "Grind Time 2";
	requiredPerkPoints = 200;
	requiredLevel = 20;
	requiredPerk = "perk_grinding_lessTime_1";
	subtitle = "Level 20 Required, 200 Perk Points";
	description = "The ability to Grind faster<br/><br/><t color='#10FF45'>20% less time</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\grind\functions_grind_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_grinding_lessTime_3 {
	displayName = "Grind Time 3";
	requiredPerkPoints = 300;
	requiredLevel = 30;
	requiredPerk = "perk_grinding_lessTime_2";
	subtitle = "Level 30 Required, 300 Perk Points";
	description = "The ability to Grind faster<br/><br/><t color='#10FF45'>25% less time</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\grind\functions_grind_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

//Hack
class perk_hacking_lessTime_1 {
	displayName = "Hack Time";
	requiredPerkPoints = 100;
	requiredLevel = 10;
	requiredPerk = "";
	subtitle = "Level 10 Required, 100 Perk Points";
	description = "The ability to Hack faster<br/><br/><t color='#10FF45'>15% less time</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\hack\functions_hack_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_hacking_lessTime_2 {
	displayName = "Hack Time 2";
	requiredPerkPoints = 200;
	requiredLevel = 20;
	requiredPerk = "perk_hacking_lessTime_1";
	subtitle = "Level 20 Required, 200 Perk Points";
	description = "The ability to Hack faster<br/><br/><t color='#10FF45'>20% less time</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\hack\functions_hack_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_hacking_lessTime_3 {
	displayName = "Hack Time 3";
	requiredPerkPoints = 300;
	requiredLevel = 30;
	requiredPerk = "perk_hacking_lessTime_2";
	subtitle = "Level 30 Required, 300 Perk Points";
	description = "The ability to Hack faster<br/><br/><t color='#10FF45'>25% less time</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\hack\functions_hack_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

// Lockpick
class perk_picking_lessTime_1 {
	displayName = "Lockpick Time";
	requiredPerkPoints = 100;
	requiredLevel = 10;
	requiredPerk = "";
	subtitle = "Level 10 Required, 100 Perk Points";
	description = "The ability to Lockpick faster<br/><br/><t color='#10FF45'>5% less time</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\pick\functions_pick_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_picking_lessTime_2 {
	displayName = "Lockpick Time 2";
	requiredPerkPoints = 200;
	requiredLevel = 20;
	requiredPerk = "perk_picking_lessTime_1";
	subtitle = "Level 20 Required, 200 Perk Points";
	description = "The ability to Lockpick faster<br/><br/><t color='#10FF45'>10% less time</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\pick\functions_pick_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_picking_lessTime_3 {
	displayName = "Lockpick Time 3";
	requiredPerkPoints = 300;
	requiredLevel = 30;
	requiredPerk = "perk_picking_lessTime_2";
	subtitle = "Level 30 Required, 300 Perk Points";
	description = "The ability to Lockpick faster<br/><br/><t color='#10FF45'>15% less time</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\pick\functions_pick_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

// Repair
class perk_repairing_lessTime_1 {
	displayName = "Repair Time";
	requiredPerkPoints = 70;
	requiredLevel = 7;
	requiredPerk = "";
	subtitle = "Level 7 Required, 70 Perk Points";
	description = "The ability to Repair faster<br/><br/><t color='#10FF45'>15% less time</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\repair\functions_repair_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_repairing_lessTime_2 {
	displayName = "Repair Time 2";
	requiredPerkPoints = 140;
	requiredLevel = 14;
	requiredPerk = "perk_repairing_lessTime_1";
	subtitle = "Level 14 Required, 140 Perk Points";
	description = "The ability to Repair faster<br/><br/><t color='#10FF45'>25% less time</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\repair\functions_repair_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_repairing_lessTime_3 {
	displayName = "Repair Time 3";
	requiredPerkPoints = 210;
	requiredLevel = 21;
	requiredPerk = "perk_repairing_lessTime_2";
	subtitle = "Level 21 Required, 210 Perk Points";
	description = "The ability to Repair faster<br/><br/><t color='#10FF45'>30% less time</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\repair\functions_repair_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

// FlagStealing
class perk_stealing_lessTime_1 {
	displayName = "Flag Stealing Time";
	requiredPerkPoints = 100;
	requiredLevel = 10;
	requiredPerk = "";
	subtitle = "Level 10 Required, 100 Perk Points";
	description = "The ability to steal flags faster<br/><br/><t color='#10FF45'>10% less time</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\flag\functions_steal_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_stealing_lessTime_2 {
	displayName = "Flag Stealing Time 2";
	requiredPerkPoints = 200;
	requiredLevel = 20;
	requiredPerk = "perk_stealing_lessTime_1";
	subtitle = "Level 20 Required, 200 Perk Points";
	description = "The ability to steal flags faster<br/><br/><t color='#10FF45'>20% less time</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\flag\functions_steal_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_stealing_lessTime_3 {
	displayName = "Flag Stealing Time 3";
	requiredPerkPoints = 300;
	requiredLevel = 30;
	requiredPerk = "perk_stealing_lessTime_2";
	subtitle = "Level 30 Required, 300 Perk Points";
	description = "The ability to steal flags faster<br/><br/><t color='#10FF45'>25% less time</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\flag\functions_steal_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
}; 

//Breaching
class perk_breaching_lessTime_1 {
	displayName = "Breach Time";
	requiredPerkPoints = 50;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Level 5 Required, 50 Perk Points";
	description = "The ability to Breach faster<br/><br/><t color='#10FF45'>25% less time</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\breach\functions_breach_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_breaching_lessTime_2 {
	displayName = "Breach Time 2";
	requiredPerkPoints = 100;
	requiredLevel = 10;
	requiredPerk = "perk_breaching_lessTime_1";
	subtitle = "Level 10 Required, 100 Perk Points";
	description = "The ability to Breach faster<br/><br/><t color='#10FF45'>30% less time</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\breach\functions_breach_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_breaching_lessTime_3 {
	displayName = "Breach Time 3";
	requiredPerkPoints = 150;
	requiredLevel = 15;
	requiredPerk = "perk_breaching_lessTime_2";
	subtitle = "Level 15 Required, 150 Perk Points";
	description = "The ability to Breach faster<br/><br/><t color='#10FF45'>40% less time</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\breach\functions_breach_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

//Locker
class perk_locker_lessTime_1 {
	displayName = "Locker Limit";
	requiredPerkPoints = 200;
	requiredLevel = 10;
	requiredPerk = "";
	subtitle = "Level 10 Required, 200 Perk Points";
	description = "Higher Locker Limit<br/><br/><t color='#10FF45'>25% more space</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\locker\functions_locker_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_locker_lessTime_2 {
	displayName = "Locker Limit 2";
	requiredPerkPoints = 300;
	requiredLevel = 25;
	requiredPerk = "perk_locker_lessTime_1";
	subtitle = "Level 25 Required, 300 Perk Points";
	description = "Higher Locker Limit<br/><br/><t color='#10FF45'>50% more space</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\locker\functions_locker_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_locker_lessTime_3 {
	displayName = "Locker Limit 3";
	requiredPerkPoints = 500;
	requiredLevel = 50;
	requiredPerk = "perk_locker_lessTime_2";
	subtitle = "Level 50 Required, 500 Perk Points";
	description = "Higher Locker Limit<br/><br/><t color='#10FF45'>100% more space</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\locker\functions_locker_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

//Fishing
class perk_fishing_Speed_1 {
	displayName = "Novice Fisherman";
	requiredPerkPoints = 100;
	requiredLevel = 10;
	requiredPerk = "";
	subtitle = "Level 5 Required, 100 Perk Points";
	description = "Novice Fishing Speed<br/><br/><t color='#10FF45'>10% Faster Fishing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\Fishing\functions_Fishing_Speed_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_fishing_Speed_2 {
	displayName = "Expert Fisherman";
	requiredPerkPoints = 300;
	requiredLevel = 20;
	requiredPerk = "perk_fishing_Speed_1";
	subtitle = "Level 20 Required, 300 Perk Points";
	description = "Expert Fishing Speed<br/><br/><t color='#10FF45'>20% Faster Fishing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\Fishing\functions_Fishing_Speed_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_fishing_Speed_3 {
	displayName = "Master Fisherman";
	requiredPerkPoints = 500;
	requiredLevel = 30;
	requiredPerk = "perk_fishing_Speed_2";
	subtitle = "Level 30 Required, 500 Perk Points";
	description = "Masterful Fishing Speed<br/><br/><t color='#10FF45'>30% Faster Fishing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\Fishing\functions_Fishing_Speed_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

//mehmet
class perk_Running_Speed_1 {
	displayName = "Beginner Runner";
	requiredPerkPoints = 100;
	requiredLevel = 10;
	requiredPerk = "";
	subtitle = "Level 10 Required, 100 Perk Points";
	description = "Novice Running Speed<br/><br/><t color='#10FF45'>10% Faster Running</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\Running\functions_Running_Speed_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_Running_Speed_2 {
	displayName = "Expert Runner";
	requiredPerkPoints = 300;
	requiredLevel = 20;
	requiredPerk = "perk_Running_Speed_1";
	subtitle = "Level 20 Required, 300 Perk Points";
	description = "Expert Running Speed<br/><br/><t color='#10FF45'>20% Faster Running</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\Running\functions_Running_Speed_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_Running_Speed_3 {
	displayName = "Master Runner";
	requiredPerkPoints =800;
	requiredLevel = 60;
	requiredPerk = "perk_Running_Speed_2";
	subtitle = "Level 60 Required, 800 Perk Points";
	description = "Masterful Running Speed<br/><br/><t color='#10FF45'>30% Faster Running</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\Running\functions_Running_Speed_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_reload_1 {
	displayName = "No reload 1";
	requiredPerkPoints = 2000;
	requiredLevel = 60;
	requiredPerk = "";
	subtitle = "Level 60 Required, 2000 Perk Points";
	description = "No Reload <br/><br/><t color='#10FF45'>Shoot without Reload</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\recoil\functions_recoilCompensation_4.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};
