class cfgPatches
{
	class training_mag_stanag_yellow
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
			"training_stanag_30rnd_blank_yellow",
			"training_stanag_30rnd_rubber_yellow",
			"training_stanag_30rnd_blank_brityellow",
			"training_stanag_30rnd_rubber_brityellow",
			"training_stanag_30rnd_blank_brityellow_worn",
			"training_stanag_30rnd_rubber_brityellow_worn"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_mag_common"};
	};
};

#include "config\cfgTrainingMagazines.hpp"

class CfgMagazines
{
	class training_mag_30rnd_base;

	class training_stanag_30rnd_blank_yellow : training_mag_30rnd_base
	{
		displayname = "30rnd Stanag Blank (Yellow)";
		ammo = "training_mag_blank_bullet";

		model = "training_mag_stanag_yellow\stanag_ground";
		modelSpecial = "training_mag_stanag_yellow\stanag";

		hiddenSelections[]			= {"magazine"};
		hiddenSelectionsTextures[]	= {"training_mag_stanag_yellow\textures\stanag_co.paa"};
	};

	class training_stanag_30rnd_rubber_yellow : training_stanag_30rnd_blank_yellow
	{
		displayname = "30rnd Stanag Rubber (Yellow)";
		ammo = "training_mag_rubber_bullet";
	};

	class training_stanag_30rnd_blank_brityellow : training_stanag_30rnd_blank_yellow
	{
		displayname = "30rnd Stanag Blank (UK Yellow)";
		ammo = "training_mag_blank_bullet";

		model = "training_mag_stanag_yellow\brit_yellow\stanag_ground";
		modelSpecial = "training_mag_stanag_yellow\brit_yellow\stanag";

		hiddenSelections[]			= {"magazine"};
		hiddenSelectionsTextures[]	= {"training_mag_stanag_yellow\brit_yellow\stanag_co.paa"};
	};

	class training_stanag_30rnd_rubber_brityellow : training_stanag_30rnd_blank_brityellow
	{
		displayname = "30rnd Stanag Rubber (UK Yellow)";
		ammo = "training_mag_rubber_bullet";
	};

	class training_stanag_30rnd_blank_brityellow_worn : training_stanag_30rnd_blank_yellow
	{
		displayname = "30rnd Stanag Blank (UK Yellow Worn)";
		ammo = "training_mag_blank_bullet";

		model = "training_mag_stanag_yellow\brit_yellow\worn\stanag_ground";
		modelSpecial = "training_mag_stanag_yellow\brit_yellow\worn\stanag";

		hiddenSelections[]			= {"magazine"};
		hiddenSelectionsTextures[]	= {"training_mag_stanag_yellow\brit_yellow\worn\stanag_co.paa"};
	};

	class training_stanag_30rnd_rubber_brityellow_worn : training_stanag_30rnd_blank_brityellow_worn
	{
		displayname = "30rnd Stanag Rubber (UK Yellow Worn)";
		ammo = "training_mag_rubber_bullet";
	};
};

class CfgMagazineWells
{
	class STANAG_556x45
	{
		training_mag_stanag_yellow[] =
		{
			"training_stanag_30rnd_blank_yellow",
			"training_stanag_30rnd_rubber_yellow",
			"training_stanag_30rnd_blank_brityellow",
			"training_stanag_30rnd_rubber_brityellow",
			"training_stanag_30rnd_blank_brityellow_worn",
			"training_stanag_30rnd_rubber_brityellow_worn"
		};
	};
};