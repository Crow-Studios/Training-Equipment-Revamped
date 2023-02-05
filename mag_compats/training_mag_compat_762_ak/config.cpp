class cfgPatches
{
	class training_mag_compat_762_AK
	{
		units[] =
		{
			""
		};
		weapons[] =
		{
			""
		};
		magazines[] =
		{
			"30Rnd_762x39_Mag_Rubber","30Rnd_545x39_Mag_Rubber"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_mag_common"};
	};
};

// These compats should *technically* run independently of the main mod (I don't need to add each persons base class), so just slap your new base classes in these instead

#include "config\cfgTrainingMagazines.hpp"

class CfgMagazines
{
	class 30Rnd_762x39_Mag_F;
	class 30Rnd_762x39_Mag_Base : 30Rnd_762x39_Mag_F  
	{
		scope = 2;
		count = "30";
		author = "Crow Studios/C. Eagle";
		picture = "\training_core\crow_studios_co.paa";

	};
	class 30Rnd_762x39_Mag_Rubber : 30Rnd_762x39_Mag_Base
	{
		displayname = "30Rnd 7.62mm Rubber";
		ammo = "training_mag_rubber_bullet";
	};

	class 30Rnd_545x39_Mag_F ;
	class 30Rnd_545x39_Mag_Base : 30Rnd_545x39_Mag_F  
	{
		scope = 2;
		count = "30";
		author = "Crow Studios/C. Eagle";
		picture = "\training_core\crow_studios_co.paa";

	};
	class 30Rnd_545x39_Mag_Rubber : 30Rnd_545x39_Mag_Base
	{
		displayname = "30Rnd 5.45mm Rubber";
		ammo = "training_mag_rubber_bullet";
	};
};

class CfgMagazineWells
{
	class CBA_762x39_AK
	{
		training_mag_compat_762x39[] = {"30Rnd_762x39_Mag_Rubber"};
	};
	class AK_762x39
	{
		training_mag_compat_762x39[] = {"30Rnd_762x39_Mag_Rubber"};
	};
	class AK_545x39
	{
		training_mag_compat_762x39[] = {"30Rnd_545x39_Mag_Rubber"};
	};
	class CBA_545x39_AK
	{
		training_mag_compat_762x39[] = {"30Rnd_545x39_Mag_Rubber"};
	};	
};