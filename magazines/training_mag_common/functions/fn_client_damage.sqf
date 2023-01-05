params ["_unit", "_instigator", "_magazine"];

diag_log format["%1 was damaged by %2", _unit, _instigator];

private _unconsciousTime = [(configFile >> "training_magazines" >> _magazine), "unconsciousTime", 0] call BIS_fnc_returnConfigEntry;

if !(missionNamespace getVariable ["training_mag_dynamic_unconsciousTime",true]) then {_unconsciousTime = 10};

private _ace = call training_core_fnc_client_hasACE;

private _veh = vehicle _unit;

if (_veh != _unit) then {
	private _vehType = typeOf _veh;
	if !("Quadbike" in _vehType || "Kart" in _vehType) exitWith {};
	moveOut _unit;
    _unit setVariable ["training_mag_var_canDamage", true];
};

if (_ace) then 
{
    private _unconsciousTime = [(configFile >> "training_magazines" >> _magazine), "ace_unconsciousTime", 0] call BIS_fnc_returnConfigEntry;
    [_unit, true, _unconsciousTime, true] call ace_medical_fnc_setUnconscious;
    _unit setVariable ["training_mag_var_canDamage", true, true];
    _unit setVariable ["training_mag_var_timesHit", 0, true];
} else {
    _unit setUnconscious true;
    uiSleep _unconsciousTime;
    _unit setUnconscious false;
    _unit setVariable ["training_mag_var_canDamage", true, true];
    _unit setVariable ["training_mag_var_timesHit", 0, true];
};