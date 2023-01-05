class cfgPatches
{
	class training_attachment_suppressor_yellow
	{
		units[] =
		{
			""
		};
		weapons[] =
		{
			"training_attachment_suppressor_yellow",
			"training_attachment_suppressor_alt_yellow"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_attachment_common"};
	};
};

class cfgWeapons
{
	class training_attachment_suppressor_base;
	class InventoryMuzzleItem_Base_F;

	class training_attachment_suppressor_yellow : training_attachment_suppressor_base
	{
		displayName = "5.56 Suppressor (Yellow)";

		model = "training_attachment_suppressor_yellow\silencer";
	};
	class training_attachment_suppressor_alt_yellow : training_attachment_suppressor_yellow
	{
		model = "training_attachment_suppressor_yellow\silenceralt";
	};
};

class asdg_MuzzleSlot;

class asdg_MuzzleSlot_556: asdg_MuzzleSlot 
{
	class compatibleItems
	{
		training_attachment_suppressor_yellow = 1;
		training_attachment_suppressor_alt_yellow = 1;
	};
};