params ["_unit"];

private _index = _unit addEventHandler ["Fired", 
{
    params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

    private _isTrainingGrenade = [_magazine] call training_grenade_fnc_client_isTrainingGrenade;
    if !(_isTrainingGrenade) exitWith {nil};
    
    if (_isTrainingGrenade) then {
        [_projectile, _magazine] spawn training_grenade_fnc_client_explodeGrenade;
    };

}];

_unit setVariable ["training_mag_var_firedEHIndex", _index];

_index