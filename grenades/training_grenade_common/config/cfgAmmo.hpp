class cfgAmmo
{
	class GrenadeHand;
	class training_grenade_he_base : GrenadeHand
	{
		// ACE_damageType = "";
		// ace_frag_enabled = 0;

		scope = 2;
		hit=0;
		indirectHit=0; 
		indirectHitRange=0;
		dangerRadiusHit=0;
		suppressionRadiusHit=0;

		CraterEffects="";
		explosionEffects="";
		explosive=0;
		explosionTime = 2;
		soundHit[]=
		{
			"",
			0,
			0
		};
		cost=100;
		whistleDist=0;

		class CamShakeExplode
		{
			power=2;
			duration=1;
			frequency=10;
			distance=1;
		};
		class CamShakeHit
		{
			power=5;
			duration=3;
			frequency=20;
			distance=2;
		};
	};

    class smokeShellBlue;
	class training_grenade_smoke_base: SmokeShellBlue {};

	class G_40mm_HE;
	class training_40mm_base : G_40mm_HE
	{
		// ACE_damageType = "";
		// ace_frag_enabled = 0;

		scope = 2;
		hit=0;
		indirectHit=0; 
		indirectHitRange=0;
		dangerRadiusHit=0;
		suppressionRadiusHit=0;

		CraterEffects="";
		explosionEffects="";
		explosive=0;
		explosionTime = 2;
		soundHit[]=
		{
			"",
			0,
			0
		};
		cost=100;
		whistleDist=0;

		class CamShakeExplode
		{
			power=2;
			duration=1;
			frequency=10;
			distance=1;
		};
		class CamShakeHit
		{
			power=5;
			duration=3;
			frequency=20;
			distance=2;
		};
	};
};