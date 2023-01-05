class cfgPatches
{
	class training_attachment_adapter_yellow
	{
		units[] =
		{
			""
		};
		weapons[] =
		{
			"training_attachment_adapter_yellow",
			"training_attachment_adapter_alt_yellow"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_attachment_common"};
	};
};

class cfgWeapons
{
	class training_attachment_adapter_base;

	class training_attachment_adapter_yellow : training_attachment_adapter_base
	{
		displayName = "5.56 Blank Fire Adapter (Yellow)";

		model = "training_attachment_adapter_yellow\adapter";
	};
	class training_attachment_adapter_alt_yellow : training_attachment_adapter_yellow
	{
		model = "training_attachment_adapter_yellow\adapter_up";
	};
};

class asdg_MuzzleSlot;

class asdg_MuzzleSlot_556: asdg_MuzzleSlot 
{
	class compatibleItems
	{
		training_attachment_adapter_yellow = 1;
		training_attachment_adapter_alt_yellow = 1;
	};
};