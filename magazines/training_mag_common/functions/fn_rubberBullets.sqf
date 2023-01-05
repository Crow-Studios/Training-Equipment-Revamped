/*
	Execution On: Client

	Purpose: Sets up the rubber bullets

	Made by: Silence/Stevio

*/

// Future Silence here, i'm going to throw up looking at the old code. Here, i'll even comment it out for you so you can see how remarkably dumb we used to be!

/*

hasACE = false; // Why?

allowedMags = [
	"blue_30rnd_rubber_pmag",
	"blue_30rnd_rubber_stanag",
	"yellow_30rnd_rubber_stanag",
	"yellow_40rnd_blank_pmag",
	"yellow_30rnd_rubber_pmag",
	"yellow_british_worn_40rnd_blank_stanag",
	"yellow_british_worn_30rnd_rubber_stanag",
	"yellow_british_40rnd_blank_stanag",
	"yellow_british_30rnd_rubber_stanag"
]; // Move this to config

index = 0; // literally no need

if ( isClass (configFile >> "cfgWeapons" >> "ACE_FakePrimaryWeapon") ) then {
	hasACE = true;
}; // what if they're running ace no medical?

rubberBullet_fnc_ppe = {
    params["_unit"];
    if (player == _unit) then
    {
		private _ppeCA = ppEffectCreate["ChromAberration", 200];
		private _ppeDB = ppEffectCreate["DynamicBlur", 400];


		_ppeCA ppEffectAdjust [.15, .15, true];
		_ppeDB ppEffectAdjust [10];

		_ppeCA ppEffectEnable true;
		_ppeDB ppEffectEnable true;

		[_ppeDB ,_ppeCA] ppEffectCommit 10;
		waitUntil {ppEffectCommitted _ppeCA};
		ppEffectDestroy _ppeCA;
		ppEffectDestroy _ppeDB;
    };
}; // this can die

rubberBullet_fnc_BulletEH = {
	_x addMPEventHandler ["MPHit", {
		params ["_unit", "_causedBy", "_damage", "_instigator"];
		shooter = _instigator;
		shooted = _unit;
		index = index + 1;
		shooted setVariable ["timesHit", index + 1];
		rubbervar1 = player getVariable "RubberBullet1";
		rubbervar2 = player getVariable "RubberBullet2";
		rubbervar3 = player getVariable "RubberBullet3";
		[] spawn {
			if (currentMagazine shooter in allowedMags) then {
				if (shooted getVariable "timesHit" >= random [parseNumber rubbervar1,parseNumber rubbervar2,parseNumber rubbervar3]) then {
					index = 0;
					if (hasACE) then {
						[shooted, true, random [60,120,180], true ] call ace_medical_fnc_setUnconscious;
						//[shooted] call rubberBullet_fnc_ppe;
						//[shooted, 0.6, selectRandom ["leg_r","leg_l"], "bullet"] remoteExec ["ace_medical_fnc_addDamageToUnit",shooted];
						//[shooted, 0.8, "body", "bullet"] remoteExec ["ace_medical_fnc_addDamageToUnit",shooted];
					} else {
						shooted setUnconscious true;
						//shooted setHit ["legs", 1];
						//[shooted] call rubberBullet_fnc_ppe;
						sleep 60,
						shooted setUnconscious false;
					};
				};
			};
		};
	}];
}; // why did we do this??!?!?!

{
	[_x] call rubberBullet_fnc_BulletEH;
} forEach allUnits; // AHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH

addMissionEventHandler ["GroupCreated",
{
	params ["_group"];
    [_group] spawn
    {
        params ["_group"];
        sleep 1;
        {
            [_x] call rubberBullet_fnc_BulletEH;
        } foreach units _group;
    };
}]; // such a waste of resources

*/

// You're welcome!