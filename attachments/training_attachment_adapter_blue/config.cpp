class cfgPatches
{
	class training_attachment_adapter_blue
	{
		units[] =
		{
			""
		};
		weapons[] =
		{
			"training_attachment_adapter_blue",
			"training_attachment_adapter_alt_blue"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_attachment_common"};
	};
};

class cfgWeapons
{
	class training_attachment_adapter_base;

	class training_attachment_adapter_blue : training_attachment_adapter_base
	{
		displayName = "5.56 Blank Fire Adapter (Blue)";

		model = "training_attachment_adapter_blue\adapter";
		
		//hiddenSelections[] = {"BlankFireAdapter_Box", "BlankFireAdapter_Rod"};
		//hiddenSelectionsTextures[] = {"blankfireadapter\data\yellow\BlankFireAdapter_Box_co.paa", "blankfireadapter\data\yellow\BlankFireAdapter_Rod_co.paa"};
		// these paths are not correct ^
	};
	class training_attachment_adapter_alt_blue : training_attachment_adapter_blue
	{
		model = "training_attachment_adapter_blue\adapter_up";
	};
};

class asdg_MuzzleSlot;

class asdg_MuzzleSlot_556: asdg_MuzzleSlot 
{
	class compatibleItems
	{
		training_attachment_adapter_blue = 1;
		training_attachment_adapter_alt_blue = 1;
	};
};