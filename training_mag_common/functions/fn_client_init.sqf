params ["_unit"];

diag_log format["init was ran on %1", _unit];

private _index = [_unit] call training_mag_fnc_client_addEvent;

_unit addEventHandler ["Respawn", 
{
	params ["_unit", "_corpse"];
    
	private _index = _unit getVariable ["training_mag_var_ehIndex", -1];

	if (_index != -1) then {[_unit, _index] call training_mag_fnc_client_removeEvent};

	private _index = [_unit] call training_mag_fnc_client_addEvent;
}];