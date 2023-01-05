// This file is used for the scripts associated with the mags, not to actually define and create the mags
class training_magazines
{
    class training_mag_9mm_base;
    class training_mag_9mm_knockout: training_mag_9mm_base
    {
        unconsciousShots[] = {1,1,1};
        ace_unconsciousShots[] = {1,1,1};
    };
    class 17rnd_9x21_Mag_Knockout : training_mag_9mm_knockout {};
};