class cfgPatches
{
	#if __has_include("\rhsusf\addons\rhsusf_main\config.bin")
	class training_mag_compat_SAW_556
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
			"rhs_200rnd_556x45_B_Training_Blank",
			"rhs_200rnd_556x45_B_Training_Rubber"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_mag_common"};
	};
	#else
	class training_mag_compat_SAW_556
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
			""
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_mag_common"};
	};
	#endif
};

// These compats should *technically* run independently of the main mod (I don't need to add each persons base class), so just slap your new base classes in these instead

#include "config\cfgTrainingMagazines.hpp"

#if __has_include("\rhsusf\addons\rhsusf_main\config.bin")

class CfgMagazines
{
	class rhsusf_200Rnd_556x45_box;
	class rhs_200rnd_556x45_B_Training_base : rhsusf_200Rnd_556x45_box  
	{
		scope = 2;
		count = "200";
		author = "Crow Studios/C. Eagle";
		picture = "\training_core\crow_studios_co.paa";
	};

	class rhs_200rnd_556x45_B_Training_Blank : rhs_200rnd_556x45_B_Training_base
	{
		displayname = "200rnd Stanag (Blank)";
		ammo = "training_mag_blank_bullet";
	};

	class rhs_200rnd_556x45_B_Training_Rubber : rhs_200rnd_556x45_B_Training_base
	{
		displayname = "200rnd Stanag (Rubber)";
		ammo = "training_mag_rubber_bullet";
	};
};

class CfgMagazineWells
{
	class CBA_556x45_MINIMI
	{
		training_mag_compat_SAW_556[] =
		{
			"rhs_200rnd_556x45_B_Training_Blank",
			"rhs_200rnd_556x45_B_Training_Rubber"
		};
	};
};

#endif