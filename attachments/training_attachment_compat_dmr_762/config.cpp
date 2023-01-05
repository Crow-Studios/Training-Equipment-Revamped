class cfgPatches
{
	class training_attachment_compat_dmr_762
	{
		units[] =
		{
			""
		};
		weapons[] =
		{
			"training_attachment_suppressor_762_blue",
			"training_attachment_suppressor_762_alt_blue",
			"training_attachment_suppressor_762_yellow",
			"training_attachment_suppressor_762_alt_yellow"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_attachment_common"};
	};
};

class cfgWeapons
{
	class training_attachment_suppressor_base;
	class InventoryMuzzleItem_Base_F;

	class training_attachment_suppressor_762_blue : training_attachment_suppressor_base
	{
		displayName = "7.62 Suppressor (Blue)";

		author="Crow Studios/C. Eagle";

		model = "training_attachment_suppressor_blue\silencer";
	};

	class training_attachment_suppressor_762_alt_blue : training_attachment_suppressor_762_blue
	{
		model = "training_attachment_suppressor_blue\silenceralt";
	};

	class training_attachment_suppressor_762_yellow : training_attachment_suppressor_762_blue
	{
		displayName = "7.62 Suppressor (Yellow)";

		model = "training_attachment_suppressor_yellow\silencer";
	};

	class training_attachment_suppressor_762_alt_yellow : training_attachment_suppressor_762_yellow
	{
		model = "training_attachment_suppressor_yellow\silenceralt";
	};
};

class asdg_MuzzleSlot;
class MuzzleSlot;

class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
	class compatibleItems
	{
		training_attachment_suppressor_762_blue=1;
		training_attachment_suppressor_762_alt_blue=1;
		training_attachment_suppressor_762_yellow=1;
		training_attachment_suppressor_762_alt_yellow=1;
	};
};

class asdg_MuzzleSlot_762MG: asdg_MuzzleSlot
{
	class compatibleItems
	{
		training_attachment_suppressor_762_blue=1;
		training_attachment_suppressor_762_alt_blue=1;
		training_attachment_suppressor_762_yellow=1;
		training_attachment_suppressor_762_alt_yellow=1;
	};
};

class MuzzleSlot_762: MuzzleSlot 
{
	class compatibleItems
	{
		training_attachment_suppressor_762_blue=1;
		training_attachment_suppressor_762_alt_blue=1;
		training_attachment_suppressor_762_yellow=1;
		training_attachment_suppressor_762_alt_yellow=1;
	};
};