params ["_unit"];

diag_log format["event handler was ran on %1", _unit];

private _index = _unit addEventHandler ["Hit", {
    params ["_unit", "_source", "_damage", "_instigator"];

    private _magazine = currentMagazine _instigator; // get this asap

	[_unit, _instigator, _magazine] call training_mag_fnc_client_handleDamage;
}];

_unit setVariable ["training_mag_var_ehIndex", _index];
_unit setVariable ["training_mag_var_canDamage", true, true];

_index