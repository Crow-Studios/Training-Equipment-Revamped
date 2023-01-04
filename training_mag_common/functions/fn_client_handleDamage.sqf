params ["_unit", "_instigator", "_magazine"];

//if !(_projectile isEqualTo "training_mag_rubber_bullet") exitWith {nil};// if a new ammo type is used by compat mod X, it'll break the script

private _isTrainingMag = [_magazine] call training_mag_fnc_client_isTrainingMagazine;
if !(_isTrainingMag) exitWith {nil};

private _unconsciousShots = [(configFile >> "training_magazines" >> _magazine), "unconsciousShots", false] call BIS_fnc_returnConfigEntry;

if (call training_mag_fnc_client_hasACE) then
{
    _unconsciousShots = [(configFile >> "training_magazines" >> _magazine), "ace_unconsciousShots", false] call BIS_fnc_returnConfigEntry;
};

if (_unconsciousShots isEqualTo false) exitWith {nil};

private _timesHit = _unit getVariable ["training_mag_var_timesHit", 0];

private _hitTimes = round (random _unconsciousShots); // make it unique each time

diag_log _timesHit;

if !(_timesHit >= _hitTimes) exitWith {_unit setVariable ["training_mag_var_timesHit", (_timesHit + 1), true]};

if (_timesHit >= _hitTimes) then
{
    _unit setVariable ["training_mag_var_canDamage", false, true];

    diag_log format["%1 was shot by %2 %3 times!",_unit,_instigator,_timesHit];

	[_unit, _instigator, _magazine] spawn training_mag_fnc_client_damage;
};

0