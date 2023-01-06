class cfgPatches
{
	class training_mag_common
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
#include "config\cfgTrainingMagazines.hpp"

class CfgFunctions
{
    class training_mag
    { // training_mag_fnc
        class functions
        {
            class client_addEvent
            {
				postInit = 0;
                file = "training_mag_common\functions\fn_client_addEvent.sqf";
            };
            class client_damage
            {
				postInit = 0;
                file = "training_mag_common\functions\fn_client_damage.sqf";
            };
            class client_handleDamage
            {
				postInit = 0;
                file = "training_mag_common\functions\fn_client_handleDamage.sqf";
            };
            class client_hasACE
            {
				postInit = 0;
                file = "training_mag_common\functions\fn_client_hasACE.sqf";
            };
            class client_init
            {
				postInit = 0;
                file = "training_mag_common\functions\fn_client_init.sqf";
            };
            class client_isTrainingMagazine
            {
				postInit = 0;
                file = "training_mag_common\functions\fn_client_isTrainingMagazine.sqf";
            };
            class client_removeEvent
            {
				postInit = 0;
                file = "training_mag_common\functions\fn_client_removeEvent.sqf";
            };
        };
    };
};

class Extended_InitPost_EventHandlers {
    class CAManBase {
		class training_mag_client_init {
			init = "[(_this select 0)] call training_mag_fnc_client_init";
		};
    };
};

class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class training_mag_30rnd_base : 30Rnd_556x45_Stanag 
	{
		scope = 2;
		count = "30";
		author = "Crow Studios";
		picture = "\training_core\crow_studios_co.paa";

		model = "training_mag_pmag_blue\pmag_ground";
		modelSpecial = "training_mag_pmag_blue\pmag";
		modelSpecialIsProxy = 1;
	};
}