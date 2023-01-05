class cfgPatches
{
	class training_mag_stanag_blue
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
			"training_stanag_30rnd_blank_blue",
			"training_stanag_30rnd_rubber_blue"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_mag_common"};
	};
};

#include "config\cfgTrainingMagazines.hpp"

class CfgMagazines
{
	class training_mag_30rnd_base;

	class training_stanag_30rnd_blank_blue : training_mag_30rnd_base
	{
		displayname = "30rnd Stanag Blank (Blue)";
		ammo = "training_mag_blank_bullet";

		model = "training_mag_stanag_blue\stanag_ground";
		modelSpecial = "training_mag_stanag_blue\stanag";

		hiddenSelections[]			= {"magazine"};
		hiddenSelectionsTextures[]	= {"training_mag_stanag_blue\textures\stanag_co.paa"};
	};

	class training_stanag_30rnd_rubber_blue : training_stanag_30rnd_blank_blue
	{
		displayname = "30rnd Stanag Rubber (Blue)";
		ammo = "training_mag_rubber_bullet";

		hiddenSelections[]			= {"magazine"};
		hiddenSelectionsTextures[]	= {"training_mag_stanag_blue\textures\stanag_co.paa"};
	};
};

class CfgMagazineWells
{
	class STANAG_556x45
	{
		training_mag_stanag_blue[] =
		{
			"training_stanag_30rnd_blank_blue",
			"training_stanag_30rnd_rubber_blue"
		};
	};
};