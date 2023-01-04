class cfgPatches
{
	class training_mag_compat_lmg_556
	{
		units[] =
		{
			""
		};
		weapons[] =
		{
			""
		};
		magazines[] =
		{
			"training_mag_556_200rnd_blank",
			"training_mag_556_200rnd_rubber"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_mag_common"};
	};
};

// These compats should *technically* run independently of the main mod (I don't need to add each persons base class), so just slap your new base classes in these instead

#include "config\cfgTrainingMagazines.hpp"

class CfgMagazines
{
	#if __has_include("\rhsusf\addons\rhsusf_main\config.bin") // rhs uses special models only on their lmg, this should fix it
		class rhsusf_200Rnd_556x45_box;
		class training_mag_200rnd_556_base : rhsusf_200Rnd_556x45_box 
		{
			scope = 2;
			count = "200";
			author = "Crow Studios/C. Eagle";
			picture = "\training_core\crow_studios_co.paa";
		};
	#else
		class 200Rnd_556x45_Box_Tracer_Red_F;
		class training_mag_200rnd_556_base : 200Rnd_556x45_Box_Tracer_Red_F 
		{
			scope = 2;
			count = "200";
			author = "Crow Studios/C. Eagle";
			picture = "\training_core\crow_studios_co.paa";
		};
	#endif

	class training_mag_556_200rnd_blank : training_mag_200rnd_556_base
	{
		displayname = "200rnd LMG Blank (Blue)";
		ammo = "training_mag_blank_bullet";
	};

	class training_mag_556_200rnd_rubber : training_mag_200rnd_556_base
	{
		displayname = "200rnd LMG Rubber (Blue)";
		ammo = "training_mag_rubber_bullet";
	};
};

// class cfgWeapons
// {
// 	class LMG_03_base_F; // you can find this by equipping the gun you want to add the magazine to into your hands, then running this: "configname (inheritsFrom (configfile >> "cfgweapons" >> (currentWeapon player)));" and pasting the debug result here
// 	class LMG_03_F : LMG_03_base_F
// 	{ // the gun classname that you want to add the magazine to, followed by the class you got above after the colon. You can run: "_weapon = copyToClipboard currentWeapon player" whilst holding it in your hands to get this
// 		scope = 2;
// 		magazines[] =
// 		{
// 			"training_pmag_200rnd_blank_blue",
// 			"training_pmag_200rnd_rubber_blue"
// 		};
// 	};
// };

class CfgMagazineWells
{
	class CBA_556x45_MINIMI
	{
		training_mag_compat_lmg_556[] =
		{
			"training_mag_556_200rnd_blank",
			"training_mag_556_200rnd_rubber"
		};
	};
};