params ["_magazine"];

if ([(configFile >> "training_magazines" >> _magazine), "training_mag", 0] call BIS_fnc_returnConfigEntry isEqualTo 1) then {
    true
} else {
    false
}