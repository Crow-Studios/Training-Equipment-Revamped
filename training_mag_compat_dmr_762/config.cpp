class cfgPatches
{
	class training_mag_compat_dmr_762
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
			"training_mag_stanag_20rnd_blank",
			"training_mag_stanag_20rnd_rubber"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_mag_common"};
	};
};

#include "config\cfgTrainingMagazines.hpp"

class CfgMagazines
{
	class 20Rnd_762x51_Mag;
	class training_mag_20rnd_762_base : 20Rnd_762x51_Mag 
	{
		scope = 2;
		count = "20";
		author = "Crow Studios/C. Eagle";
		picture = "\training_core\crow_studios_co.paa";
	};

	class training_mag_stanag_20rnd_blank : training_mag_20rnd_762_base
	{
		displayname = "20rnd Stanag Blank";
		ammo = "training_mag_blank_bullet";
	};

	class training_mag_stanag_20rnd_rubber : training_mag_20rnd_762_base
	{
		displayname = "20rnd Stanag Rubber";
		ammo = "training_mag_rubber_bullet";
	};
};

#define ALLMAGS762#{"training_mag_stanag_20rnd_blank","training_mag_stanag_20rnd_rubber"}; // nice preprocessor action

class CfgMagazineWells
{
	class M14_762x51
	{
		training_mag_compat_dmr_762[]=ALLMAGS762
	};
	class CBA_762x51_HK417
	{
		training_mag_compat_dmr_762[]=ALLMAGS762
	};
	class CBA_762x51_M14
	{
		training_mag_compat_dmr_762[]=ALLMAGS762
	};
	class CBA_762x51_MkI_EMR
	{
		training_mag_compat_dmr_762[]=ALLMAGS762
	};
	class CBA_762x51_SR25
	{
		training_mag_compat_dmr_762[]=ALLMAGS762
	};
};