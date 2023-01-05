// This file is used for the scripts associated with the mags, not to actually define and create the mags
class training_magazines
{
    class training_mag_556_base;

    class training_mag_556_200rnd_rubber : training_mag_556_base 
    {
        unconsciousShots[] = {11,12,13};

        // Attempting to balance number of shots required to knock them out, technically it's not realistic but who wants a machinegunner to rule the training session?

        ace_unconsciousShots[] = {20,22,24};
    };
};