class cfgPatches
{
	class training_mag_compat_knockout
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
			"17rnd_9x21_Mag_Knockout"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_mag_common","training_mag_compat_9mm"};
	};
};

// These compats should *technically* run independently of the main mod (I don't need to add each persons base class), so just slap your new base classes in these instead

#include "config\cfgTrainingMagazines.hpp"

class CfgMagazines
{
	class 17rnd_9x21_Mag_Rubber;
	class 17rnd_9x21_Mag_Knockout : 17rnd_9x21_Mag_Rubber
	{
		displayname = "17Rnd 9mm Knockout";
		ammo = "training_mag_rubber_bullet";
	};
};

class CfgMagazineWells
{
	class Pistol_9x21
	{
		training_mag_compat_pistol_9mm_KO[] = {"17rnd_9x21_Mag_Knockout"};
	};
};