class cfgPatches
{
	class training_40mm_common
	{
		units[] =
		{
			""
		};
		weapons[] =
		{
			""
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_grenade_common"};
	};
};

#include "config\cfgTrainingGrenades.hpp"

class cfgAmmo
{
	class training_40mm_base;

	class training_40mm_he_base: training_40mm_base {};
};

class cfgMagazines 
{
	class training_40mm_mag_base;

	class training_40mm_mag_he: training_40mm_mag_base
	{
		scope = 2;
		displayName="Training 40mm";
		displayNameShort="40mm";
		ammo="training_40mm_he_base";
		picture = "\training_core\crow_studios_co.paa";
	};
};

class CfgMagazineWells
{
	class CBA_40mm_M203
	{
		training_mag_compat_40mm[]=
		{
			"training_40mm_mag_he"
		};
	};
	class VOG_40mm
    {
        training_mag_compat_40mm[]=
        {
            "training_40mm_mag_he"
        };
    };
};