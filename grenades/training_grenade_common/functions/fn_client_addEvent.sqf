params ["_unit"];

if (_unit isEqualTo player) exitWith {

    private _index = _unit addEventHandler ["Fired", 
    {
        params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

        private _isTrainingGrenade = [_magazine] call training_grenade_fnc_client_isTrainingGrenade;
        if !(_isTrainingGrenade) exitWith {nil};
        
        [_projectile, _magazine] spawn training_grenade_fnc_client_explodeGrenade;
    }];

    _unit setVariable ["training_mag_var_firedEHIndex", _index];

    if (call training_core_fnc_client_hasACE) then {
        diag_log format ["ACE Was detected, adding event handler for ace"];
        ["ace_firedPlayer",
        {
            private _magazine = _this select 5;
            private _projectile = _this select 6;
            
            private _isTrainingGrenade = [_magazine] call training_grenade_fnc_client_isTrainingGrenade;
            if !(_isTrainingGrenade) exitWith {nil};

            [_projectile, _magazine] spawn training_grenade_fnc_client_explodeGrenade;
        }] call CBA_fnc_addEventHandler;
        // ace throwing compatibility
    };

    //diag_log format ["Was unit a player? %1", (_unit isEqualTo player)];

    _index

};