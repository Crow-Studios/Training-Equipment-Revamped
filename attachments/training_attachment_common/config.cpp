// #include "cfgAmmo.hpp"
// #include "cfgEventHandlers.hpp"

class cfgPatches
{
	class training_attachment_common
	{
		units[] =
		{
			""
		};
		weapons[] =
		{
			""
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_core"};
	};
};

class cfgWeapons
{
	class ItemCore;
	class Zasleh2: ItemCore
	{
		scope=2;
		model="A3\weapons_f\data\zaslehsdl_proxy.p3d";
	};
	class InventoryMuzzleItem_Base_F;

	class training_attachment_adapter_base : ItemCore
	{
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		picture = "\training_core\crow_studios_co.paa";

		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex = 0; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)

			class MagazineCoef
			{
				initSpeed = 0.8;
			};

			class AmmoCoef
			{
				hit = 0;
				visibleFire = 0;
				audibleFire = 0.8;
				visibleFireTime = 0;
				audibleFireTime = 1.0;
				cost = 1.0;
				typicalSpeed = 0;
				airFriction = 1.0;
			};

			muzzleEnd = "zaslehPoint";		// memory point in muzzle supressor's model
			alternativeFire = "Zasleh2";	// class in cfgWeapons with model of muzzle flash	
	
			class MuzzleCoef
			{
				dispersionCoef = 1.0;
				artilleryDispersionCoef = 1.0;

				fireLightCoef = 0.1;

				recoilCoef = 1.0;
				recoilProneCoef = 1.0;

				minRangeCoef = 1.0; minRangeProbabCoef = 1.0;
				midRangeCoef = 1.0; midRangeProbabCoef = 1.0;
				maxRangeCoef = 1.0; maxRangeProbabCoef = 1.0;
			};
		};
	};
	class training_attachment_suppressor_base : ItemCore
	{
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		picture = "\training_core\crow_studios_co.paa";

		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)

			class MagazineCoef
			{
				initSpeed = 0.8;
			};

			class AmmoCoef
			{
				hit = 0.8;
				visibleFire = 0.3;
				audibleFire = 0.8;
				visibleFireTime = 0.5;
				audibleFireTime = 1.0;
				cost = 1.0;
				typicalSpeed = 0.8;
				airFriction = 1.0;
			};

			muzzleEnd = "zaslehPoint";		// memory point in muzzle supressor's model
			alternativeFire = "Zasleh2";	// class in cfgWeapons with model of muzzle flash	
	
			class MuzzleCoef
			{
				dispersionCoef = 1.0;
				artilleryDispersionCoef = 1.0;

				fireLightCoef = 0.1;

				recoilCoef = 1.0;
				recoilProneCoef = 1.0;

				minRangeCoef = 1.0; minRangeProbabCoef = 1.0;
				midRangeCoef = 1.0; midRangeProbabCoef = 1.0;
				maxRangeCoef = 1.0; maxRangeProbabCoef = 1.0;
			};
		};
	};
};

// class CfgFunctions
// {
//     class training_mag
//     { // training_mag_fnc
//         class functions
//         {
//             class rubberBullets
//             {
// 				postInit = 1;
//                 file = "training_mag_common\functions\fn_rubberBullets.sqf";
//             };
//         };
//     };
// };
