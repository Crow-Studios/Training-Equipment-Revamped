class cfgPatches
{
	#if __has_include("\rhsafrf\addons\rhs_main\config.bin")
		#define HASRHSAFRF 1
	class training_mag_compat_762x54
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
			"10Rnd_762x54_Mag_Rubber"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_mag_common"};
	};
	#if HASRHSAFRF
	class training_mag_compat_762x54_rhs
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
			"100Rnd_762x54_Mag_Rubber"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_mag_common"};
	};
	#endif
};

// These compats should *technically* run independently of the main mod (I don't need to add each persons base class), so just slap your new base classes in these instead

#include "config\cfgTrainingMagazines.hpp"

class CfgMagazines
{
	class 10Rnd_762x54_Mag;
	class 10Rnd_762x54_Mag_Base : 10Rnd_762x54_Mag   
	{
		scope = 2;
		count = "10";
		author = "Crow Studios/C. Eagle";
		picture = "\training_core\crow_studios_co.paa";
	};

	class 10Rnd_762x54_Mag_Rubber : 10Rnd_762x54_Mag_Base
	{
		displayname = "10Rnd 7.62mm Rubber";
		ammo = "training_mag_rubber_bullet";
	};

	#if HASRHSAFRF
	class rhs_100Rnd_762x54mmR_7N26;
	class 100Rnd_762x54_Mag_Base : rhs_100Rnd_762x54mmR_7N26   
	{
		scope = 2;
		count = "100";
		author = "Crow Studios/C. Eagle";
		picture = "\training_core\crow_studios_co.paa";

	};

	class 100Rnd_762x54_Mag_Rubber : 100Rnd_762x54_Mag_Base
	{
		displayname = "100Rnd 7.62mm Rubber";
		ammo = "training_mag_rubber_bullet";
	};
	#endif
};

class CfgMagazineWells
{
	class CBA_762x54R_SVD
	{
		training_mag_compat_762x54[] = {"10Rnd_762x54_Mag_Rubber"};
	};
	#if HASRHSAFRF
	class PK_762x54R
	{
		training_mag_compat_762x54[] = {"100Rnd_762x54_Mag_Rubber"};
	};
	#endif
};