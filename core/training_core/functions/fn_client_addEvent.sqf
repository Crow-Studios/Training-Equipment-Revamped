params ["_unit"];

_unit addEventHandler ["Respawn", 
{
	params ["_unit", "_corpse"];
    
	private _index = _unit getVariable ["training_mag_var_ehIndex", -1];
	private _firedIndex = _unit getVariable ["training_mag_var_firedEHIndex", -1];

	if (_index != -1) then {[_unit, _index] call training_mag_fnc_client_removeEvent};

	if (_firedIndex != -1) then {[_unit, _firedIndex] call training_grenade_fnc_client_removeEvent};

	private _index = [_unit] call training_mag_fnc_client_addEvent;

	private _index = [_unit] call training_grenade_fnc_client_addEvent;
}];