class cfgAmmo
{
	class BulletBase;
	class BulletCore;

	class training_mag_bullet_base : BulletCore 
	{
		indirectHit = 0;
		aiAmmoUsageFlags = "64 + 128";
		typicalSpeed = 8200;
		caliber = 0.7;
		cartridge = "FxCartridge_556";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";

		class CamShakeFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
	};

	class training_mag_blank_bullet : training_mag_bullet_base
	{
		hit = 0;
	};
	
	class Paintball_Blank : training_mag_blank_bullet {};

	class training_mag_rubber_bullet : training_mag_bullet_base
	{
		hit = 1; // has to have some damage in order to register as a hit
	};

	class Rubber_Bullet : training_mag_rubber_bullet {}; // I'll try not to break older training mag compat mods
};