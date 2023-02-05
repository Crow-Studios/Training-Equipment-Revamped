// This file is used for the scripts associated with the mags, not to actually define and create the mags
class training_magazines
{
    class training_mag_9mm_base
    {
        // used if vanilla
        // vanilla settings are generally going to be lower, because ace is much more finicky
        unconsciousTime = 7;
        unconsciousShots[] = {2,3,3}; // 3 elements ideally. It will use the random function so it'll select randomly inbetween the lowest, middle, and highest

        // used if ace, you can still fill them out even if ace is not being used
        ace_unconsciousTime = 12;
        ace_unconsciousShots[] = {4,6,8}; // 3 elements ideally. It will use the random function so it'll select randomly inbetween the lowest, middle, and highest

        // these currently aren't implemented
        ace_damageAreas[] = {"leg_r", "leg_l"};
        ace_damageTypes[] = {"bullet"};

        training_mag = 1;
    };

    class training_mag_556_base
    {
        // used if vanilla
        unconsciousTime = 10;
        unconsciousShots[] = {2,2,2}; // 3 elements ideally. It will use the random function so it'll select randomly inbetween the lowest, middle, and highest

        // used if ace, you can still fill them out even if ace is not being used
        ace_unconsciousTime = 14;
        ace_unconsciousShots[] = {3,5,7}; // 3 elements ideally. It will use the random function so it'll select randomly inbetween the lowest, middle, and highest

        // these currently aren't implemented
        ace_damageAreas[] = {"leg_r", "leg_l"};
        ace_damageTypes[] = {"bullet"};
        
        training_mag = 1;
    };

    class training_mag_762_base
    {
        // used if vanilla
        unconsciousTime = 13;
        unconsciousShots[] = {1,1,2}; // 3 elements ideally. It will use the random function so it'll select randomly inbetween the lowest, middle, and highest

        // used if ace, you can still fill them out even if ace is not being used
        ace_unconsciousTime = 17;
        ace_unconsciousShots[] = {2,4,6}; // 3 elements ideally. It will use the random function so it'll select randomly inbetween the lowest, middle, and highest

        // these currently aren't implemented
        ace_damageAreas[] = {"leg_r", "leg_l"};
        ace_damageTypes[] = {"bullet"};

        training_mag = 1;
    };

    class training_mag_12g_base
    {
        // used if vanilla
        unconsciousTime = 17;
        unconsciousShots[] = {2,2,2}; // 3 elements ideally. It will use the random function so it'll select randomly inbetween the lowest, middle, and highest

        // used if ace, you can still fill them out even if ace is not being used
        ace_unconsciousTime = 23;
        ace_unconsciousShots[] = {1,1,2}; // 3 elements ideally. It will use the random function so it'll select randomly inbetween the lowest, middle, and highest

        // these currently aren't implemented
        ace_damageAreas[] = {"leg_r", "leg_l"};
        ace_damageTypes[] = {"bullet"};

        training_mag = 1;
    };

    // any values changed here should overwrite the normal mod
};