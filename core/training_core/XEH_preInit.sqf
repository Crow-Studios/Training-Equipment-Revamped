#include "script_component.hpp"

ADDON = true;

[
    "training_mag_dynamic_unconsciousTime", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "Allow Dynamic Unconscious Time", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Training Magazines", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    true,
    true, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {  
        params ["_value"];
		missionNamespace setVariable ["training_mag_dynamic_unconsciousTime",_value,true];
    }
] call CBA_fnc_addSetting;