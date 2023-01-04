class cfgPatches
{
	class training_attachment_suppressor_blue
	{
		units[] =
		{
			""
		};
		weapons[] =
		{
			"training_attachment_suppressor_blue",
			"training_attachment_suppressor_alt_blue"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_attachment_common"};
	};
};

class cfgWeapons
{
	class training_attachment_suppressor_base;
	class InventoryMuzzleItem_Base_F;

	class training_attachment_suppressor_blue : training_attachment_suppressor_base
	{
		displayName = "5.56 Suppressor (Blue)";

		model = "training_attachment_suppressor_blue\silencer";
	};
	class training_attachment_suppressor_alt_blue : training_attachment_suppressor_blue
	{
		model = "training_attachment_suppressor_blue\silenceralt";
	};
};

class asdg_MuzzleSlot;

class asdg_MuzzleSlot_556: asdg_MuzzleSlot 
{
	class compatibleItems
	{
		training_attachment_suppressor_blue = 1;
		training_attachment_suppressor_alt_blue = 1;
	};
};