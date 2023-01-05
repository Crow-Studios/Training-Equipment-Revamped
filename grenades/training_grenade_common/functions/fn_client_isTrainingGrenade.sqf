params ["_grenade"];

if ([(configFile >> "training_grenades" >> _grenade), "training_grenade", 0] call BIS_fnc_returnConfigEntry isEqualTo 1) then {
    true
} else {
    false
}