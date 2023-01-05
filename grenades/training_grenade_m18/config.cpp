class cfgPatches
{
	class training_grenade_m18
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
	class SmokeShellBlue;

	class training_grenade_smoke_base;

	class training_grenade_ammo_m18: training_grenade_smoke_base
	{
		model="training_grenade_m18\grenade_m18";
	};
};

class cfgMagazines 
{
	class training_grenade_mag_smoke_base;

	class training_grenade_mag_m18: training_grenade_mag_smoke_base
	{
		displayName="M18 Training Grenade";
		displayNameShort="M18 Grenade";
		model="\training_grenade_m18\grenade_m18.p3d";
		ammo="training_grenade_ammo_m18";
	};
};

class cfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[] +=
		{
			"training_grenade_mag_m18_throw"
		};
		class ThrowMuzzle;
		class training_grenade_mag_m18_throw : ThrowMuzzle
		{
			magazines[] = {"training_grenade_mag_m18"};
		};
	};
};

class cfgVehicles
{
    class Static;
    class training_grenade_object_m18 : Static {
		author="Crow Studios";
        scope = 2;
        model="training_grenade_m18\grenade_m18";
        displayName = "M18 Training Grenade";
        faction = "Empty";
        vehicleClass = "training_grenade_class";
    };
};