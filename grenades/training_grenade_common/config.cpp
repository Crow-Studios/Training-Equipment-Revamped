class cfgPatches
{
	class training_grenade_common
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
		requiredAddons[] = {"training_core"};
	};
};

#include "config\cfgAmmo.hpp"
#include "config\cfgTrainingGrenades.hpp"

class cfgVehicleClasses
{
	class training_grenade_class
	{
		displayName = "Training Grenades";
	};
};

class CfgFunctions
{
    class training_grenade
    { // training_grenade_fnc
        class functions
        {
            class client_addEvent
            {
				postInit = 0;
                file = "training_grenade_common\functions\fn_client_addEvent.sqf";
            };
            class client_removeEvent
            {
				postInit = 0;
                file = "training_grenade_common\functions\fn_client_removeEvent.sqf";
            };
            class client_explodeGrenade
            {
				postInit = 0;
                file = "training_grenade_common\functions\fn_client_explodeGrenade.sqf";
            };
            class client_init
            {
				postInit = 0;
                file = "training_grenade_common\functions\fn_client_init.sqf";
            };
            class client_isTrainingGrenade
            {
				postInit = 0;
                file = "training_grenade_common\functions\fn_client_isTrainingGrenade.sqf";
            };
        };
    };
};

class Extended_InitPost_EventHandlers {
    class CAManBase {
		class training_grenade_client_init {
			init = "[(_this select 0)] call training_grenade_fnc_client_init";
		};
    };
};

class cfgMagazines 
{
	class CA_Magazine;
	class HandGrenade : CA_Magazine {};
	class training_grenade_mag_base : HandGrenade
	{
		scope = 2;
		author="Crow Studios";
		nameSound="handgrenade";
		picture="\training_grenade_mk2\UI\training_grenade_mk2_ca.paa";
		descriptionShort="I hope this is non lethal...";
		mass = 4;
	};
	class SmokeShellBlue;
	class training_grenade_mag_smoke_base: SmokeShellBlue
	{
		author="Crow Studios";
		displayName="";
		displayNameShort="";
		picture="\training_grenade_m18\UI\training_grenade_m18_ca.paa";
		descriptionShort="Signal Flare, Used For Calling In Airdrops";
		mass = 3;
	};
};