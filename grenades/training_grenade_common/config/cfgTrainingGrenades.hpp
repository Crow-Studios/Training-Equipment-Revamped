// This file is used for the scripts associated with the mags, not to actually define and create the mags
class training_grenades
{
    class training_grenade_he_base
    {
        unconsciousTime = 7;
        ace_unconsciousTime = 12;

        radius = 13;

        // these currently aren't implemented
        ace_damageAreas[] = {"leg_r", "leg_l"};
        ace_damageTypes[] = {"bullet"};

        training_grenade = 1;
    };
    class training_40mm_he_base
    {
        unconsciousTime = 7;
        ace_unconsciousTime = 12;

        radius = 10; // damage is more concentrated with a 40mm

        // these currently aren't implemented
        ace_damageAreas[] = {"leg_r", "leg_l"};
        ace_damageTypes[] = {"bullet"};

        training_grenade = 1;
    };
};