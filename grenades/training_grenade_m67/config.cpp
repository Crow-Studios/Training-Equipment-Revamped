class cfgPatches
{
	class training_grenade_m67
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

	class training_grenade_ammo_m67: training_grenade_he_base
	{
		model="training_grenade_m67\grenade_m67";
	};
};

class cfgMagazines 
{
	class training_grenade_mag_base;

	class training_grenade_mag_m67: training_grenade_mag_base
	{
		displayName="M67 Training Grenade";
		displayNameShort="M67 Grenade";
		model="\training_grenade_m67\grenade_m67.p3d";
		ammo="training_grenade_ammo_m67";
		picture="\training_grenade_m67\UI\training_grenade_m67_ca.paa";
	};
};

class cfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[] +=
		{
			"training_grenade_mag_m67_throw"
		};
		class ThrowMuzzle;
		class training_grenade_mag_m67_throw : ThrowMuzzle
		{
			magazines[] = {"training_grenade_mag_m67"};
		};
	};
};

class cfgVehicles
{
    class Static;
    class training_grenade_object_m67 : Static {
		author="Crow Studios";
        scope = 2;
        model="training_grenade_m67\grenade_m67";
        displayName = "M67 Training Grenade";
        faction = "Empty";
        vehicleClass = "training_grenade_class";
    };
};