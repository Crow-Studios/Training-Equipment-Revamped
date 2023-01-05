class cfgPatches
{
	class training_mag_compat_9mm
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
			"17rnd_9x21_Mag_Rubber","30rnd_9x21_Mag_Rubber"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_mag_common"};
	};
};

// These compats should *technically* run independently of the main mod (I don't need to add each persons base class), so just slap your new base classes in these instead

#include "config\cfgTrainingMagazines.hpp"

class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class 17rnd_9x21_Mag_Base : 16Rnd_9x21_Mag 
	{
		scope = 2;
		count = "17";
		author = "Crow Studios/C. Eagle";
		picture = "\training_core\crow_studios_co.paa";

	};

	class 17rnd_9x21_Mag_Rubber : 17rnd_9x21_Mag_Base
	{
		displayname = "17Rnd 9mm Rubber";
		ammo = "training_mag_rubber_bullet";
	};
	class 30Rnd_9x21_Mag;
	class 30rnd_9x21_Mag_Base : 30Rnd_9x21_Mag 
	{
		scope = 2;
		count = "30";
		author = "Crow Studios/C. Eagle";
		picture = "\training_core\crow_studios_co.paa";
	};

	class 30rnd_9x21_Mag_Rubber : 30rnd_9x21_Mag_Base
	{
		displayname = "30Rnd 9mm Rubber";
		ammo = "training_mag_rubber_bullet";
	};
};

class CfgMagazineWells
{
	class Pistol_9x21
	{
		training_mag_compat_pistol_9mm[] = {"17rnd_9x21_Mag_Rubber"};
	};
	class CBA_9x19_ScorpionEvo3
	{
		training_mag_compat_smg_9mm[] = {"30rnd_9x21_Mag_Rubber"};
	};
};