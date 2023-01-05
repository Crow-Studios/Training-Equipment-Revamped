params ["_projectile", "_magazine"];

_projectile setVariable ["_projectile_magazine", _magazine];

_projectile addEventHandler ["Explode",
{
	params ["_projectile", "_pos", "_velocity"];

    private _magazine = _projectile getVariable ["_projectile_magazine",""];

    private _grenade = "#particlesource" createVehicle ASLtoATL _pos;

    private _ace = call training_core_fnc_client_hasACE;

    if !(missionNamespace getVariable ["training_mag_dynamic_unconsciousTime",true]) then {_unconsciousTime = 10};

    private _radius = [(configFile >> "training_grenades" >> _magazine), "radius", 0] call BIS_fnc_returnConfigEntry;

    diag_log format ["A grenade was detonated, radius was %1, magazine was %2",_radius,_magazine];

    private _nearGrenade = nearestObjects [_grenade, ["CAManBase"], _radius];

    hint str _nearGrenade;

    {
        private _collides = lineIntersects [eyePos _x, getPosATL _grenade];
        if !(_collides) then {
            if (_ace) then {
                private _unconsciousTime = [(configFile >> "training_grenades" >> _magazine), "ace_unconsciousTime", 0] call BIS_fnc_returnConfigEntry;
                [_x, true, _unconsciousTime, true] call ace_medical_fnc_setUnconscious;
            } else {
                private _unconsciousTime = [(configFile >> "training_grenades" >> _magazine), "unconsciousTime", 0] call BIS_fnc_returnConfigEntry;
                _x setUnconscious true;
                uiSleep _unconsciousTime;
                _x setUnconscious false;
            };
        };
    } forEach _nearGrenade;
}];