class cfgPatches
{
	class training_core
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
		requiredAddons[] = {"A3_Data_F_AoW_Loadorder"};
	};
};

#include "cfgEventHandlers.hpp"

class CfgFunctions
{
    class training_core
    { // training_core_fnc
        class functions
        {
            class client_addEvent
            {
				postInit = 0;
                file = "training_core\functions\fn_client_addEvent.sqf";
            };
        };
    };
};

class Extended_Init_EventHandlers {
    class CAManBase {
		class training_core_addEvent {
			init = "[(_this select 0)] call training_core_fnc_client_addEvent";
		};
    };
};