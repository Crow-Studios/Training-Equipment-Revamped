class cfgPatches
{
	class training_mag_compat_shotgun_12g
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
			"training_mag_2rnd_12g_rubber",
			"training_mag_4rnd_12g_rubber"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_mag_common"};
	};
};

// These compats should *technically* run independently of the main mod (I don't need to add each persons base class), so just slap your new base classes in these instead

#include "config\cfgTrainingMagazines.hpp"

class CfgMagazines
{
	class 2Rnd_12Gauge_Slug;
	class training_mag_2rnd_12g_base : 2Rnd_12Gauge_Slug 
	{
		scope = 2;
		count = "2";
		author = "Crow Studios";
		picture = "\training_core\crow_studios_co.paa";
		model = "";
		modelSpecial = "";
	};

	class 6Rnd_12Gauge_Slug;
	class training_mag_6rnd_12g_base : 6Rnd_12Gauge_Slug
	{
		scope = 2;
		count = "6";
		author = "Crow Studios";
		picture = "\training_core\crow_studios_co.paa";
		ammo = "training_mag_rubber_bullet";
	};

	class training_mag_2rnd_12g_rubber : training_mag_2rnd_12g_base
	{
		displayname = "2rnd Shotgun Beanbag";
		ammo = "training_mag_rubber_bullet";
	};

	class training_mag_4rnd_12g_rubber : training_mag_2rnd_12g_base
	{
		displayname = "4rnd Shotgun Beanbag";
		ammo = "training_mag_rubber_bullet";
		count = "4";
	};

	class training_40mm_6rnd_12g_rubber : training_mag_6rnd_12g_base
	{
		displayname = "6rnd Shotgun Beanbag";
		ammo = "training_mag_rubber_bullet";
		count = "6";
	};
};

#define ALLSHOTGUNMAGS#{"training_mag_2rnd_12g_rubber", "training_mag_4rnd_12g_rubber"};

class CfgMagazineWells
{
	class CBA_12g_2rnds
	{
		training_mag_compat_shotgun_12g[] = ALLSHOTGUNMAGS
	};
	class HunterShotgun_01_12GA
	{
		training_mag_compat_shotgun_12g[] =
		{
			"training_mag_2rnd_12g_rubber"
		};
	};
	class UBS_12GA
	{
		training_mag_compat_40mm_12g[]=
		{
			"training_40mm_6rnd_12g_rubber"
		};
	};
};