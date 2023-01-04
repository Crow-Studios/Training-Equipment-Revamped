class cfgPatches
{
	class training_mag_pmag_yellow
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
			"training_pmag_30rnd_blank_yellow",
			"training_pmag_30rnd_rubber_yellow"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_mag_common"};
	};
};

#include "config\cfgTrainingMagazines.hpp"

class CfgMagazines
{
	class training_mag_30rnd_base;

	class training_pmag_30rnd_blank_yellow : training_mag_30rnd_base
	{
		displayname = "30rnd PMAG Blank (Yellow)";
		ammo = "training_mag_blank_bullet";

		model = "training_mag_pmag_yellow\pmag_ground";
		modelSpecial = "training_mag_pmag_yellow\pmag";

		hiddenSelections[]			= {"magazine"};
		hiddenSelectionsTextures[]	= {"training_mag_pmag_yellow\textures\pmag_co.paa"};
	};

	class training_pmag_30rnd_rubber_yellow : training_pmag_30rnd_blank_yellow
	{
		displayname = "30rnd PMAG Rubber (Yellow)";
		ammo = "training_mag_rubber_bullet";

		hiddenSelections[]			= {"magazine"};
		hiddenSelectionsTextures[]	= {"training_mag_pmag_yellow\textures\pmag_co.paa"};
	};
};

class CfgMagazineWells
{
	class STANAG_556x45
	{
		training_mag_yellow[] =
		{
			"training_pmag_30rnd_blank_yellow",
			"training_pmag_30rnd_rubber_yellow"
		};
	};
};