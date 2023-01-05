class cfgPatches
{
	class training_grenade_mk2
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
	class training_grenade_he_base;

	class training_grenade_ammo_mk2: training_grenade_he_base
	{
		model="training_grenade_mk2\grenade_mk2";
	};
};

class cfgMagazines 
{
	class training_grenade_mag_base;

	class training_grenade_mag_mk2: training_grenade_mag_base
	{
		displayName="Mk2 Training Grenade";
		displayNameShort="Mk2 Grenade";
		model="\training_grenade_mk2\grenade_mk2.p3d";
		ammo="training_grenade_ammo_mk2";
	};
};

class cfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[] +=
		{
			"training_grenade_mag_mk2_throw"
		};
		class ThrowMuzzle;
		class training_grenade_mag_mk2_throw : ThrowMuzzle
		{
			magazines[] = {"training_grenade_mag_mk2"};
		};
	};
};

class cfgVehicles
{
    class Static;
    class training_grenade_object_mk2 : Static {
		author="Crow Studios";
        scope = 2;
        model="training_grenade_mk2\grenade_mk2";
        displayName = "Mk2 Training Grenade";
        faction = "Empty";
        vehicleClass = "training_grenade_class";
    };
};