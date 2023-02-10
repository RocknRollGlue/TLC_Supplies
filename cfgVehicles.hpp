/// Todo List:
/// RSBA_Alive_supplies - TLC_Signs_1

class NATO_Box_Base; //Small box
class Box_NATO_Wps_F; // Medium box
class Box_NATO_WpsSpecial_F; // Large box
class Box_NATO_WpsLaunch_F;
class RSB_Box_Base;
class Land_PlasticCase_01_large_idap_F;
// Medium Crate
class RSB_Box_Medium_Base;
// Large Crate
class RSB_Box_Large_Base;
// Long Crate
class RSB_Box_Long_Base;
class RSB_Box_Ammo_Source;
class RSB_Box_AmmoOrd_Source;
class RSB_Box_Grenade_Source;
class RSB_Box_Support_Source;
class RSB_762_20RND_M80;
class RSB_40mm_Grenades;
// Specific visible items
class RSBA_Grenades: RSB_40mm_Grenades{
	scope = 2;
	displayName = "TLC 40mm Grenades";
	class TransportMagazines{
		
		class SmokeShellGreen{
			magazine = "SmokeShellGreen";
			count = 15;
		};
		class SmokeShellRed{
			magazine = "SmokeShellRed";
			count = 15;
		};
		class SmokeShellPurple{
			magazine = "SmokeShellPurple";
			count = 15;
		};
		class rhs_mag_M433_HEDP{
			magazine = "rhs_mag_M433_HEDP";
			count = 20;
		};
	};
};
class RSBA_Alive_supplies: RSB_Box_Support_Source{
	scope = 2;
	displayName = "ALiVE Supplies";
	hiddenSelectionsTextures[] = {
		"\rocks_Stupid_TLC_box\data\TLC_Signs_1.paa",
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems{
		class ALiVE_Humrat{
				name="ALiVE_Humrat";
				count=15;
		};
		class ALiVE_Waterbottle{
			name="ALiVE_Waterbottle";
			count=15;
		};
	};
};

class RSB_762_20RND_SR25: RSB_762_20RND_M80 {
	scope = 2;
	displayName = "SR-25 20Rnd";

	class TransportMagazines {
		class rhsusf_20Rnd_762x51_SR25_mk316_special_Mag{
			magazine="rhsusf_20Rnd_762x51_SR25_mk316_special_Mag";
			count=20;
		};
		class rhsusf_20Rnd_762x51_SR25_m993_Mag{
			magazine="rhsusf_20Rnd_762x51_SR25_m993_Mag";
			count=20;
		};
		class rhsusf_20Rnd_762x51_SR25_m62_Mag{
			magazine="rhsusf_20Rnd_762x51_SR25_m62_Mag";
			count=20;
		};
		class rhsusf_20Rnd_762x51_SR25_m118_special_Mag{
			magazine="rhsusf_20Rnd_762x51_SR25_m118_special_Mag";
			count=20;
		};
	};
};