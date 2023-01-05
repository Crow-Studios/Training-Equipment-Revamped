class cfgPatches
{
	class training_mag_pmag_blue
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
			"training_pmag_30rnd_blank_blue",
			"training_pmag_30rnd_rubber_blue"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_mag_common"};
	};
};

#include "config\cfgTrainingMagazines.hpp"

class CfgMagazines
{
	class training_mag_30rnd_base;

	class training_pmag_30rnd_blank_blue : training_mag_30rnd_base
	{
		displayname = "30rnd PMAG Blank (Blue)";
		ammo = "training_mag_blank_bullet";

		hiddenSelections[]			= {"magazine"};
		hiddenSelectionsTextures[]	= {"training_mag_pmag_blue\textures\pmag_co.paa"};
	};

	class training_pmag_30rnd_rubber_blue : training_mag_30rnd_base
	{
		displayname = "30rnd PMAG Rubber (Blue)";
		ammo = "training_mag_rubber_bullet";

		hiddenSelections[]			= {"magazine"};
		hiddenSelectionsTextures[]	= {"training_mag_pmag_blue\textures\pmag_co.paa"};
	};
};

class CfgMagazineWells
{
	class STANAG_556x45
	{
		training_mag_blue[] =
		{
			"training_pmag_30rnd_blank_blue",
			"training_pmag_30rnd_rubber_blue"
		};
	};
};