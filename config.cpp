class CfgPatches {
	class rocks_Stupid_TLC_box {
		name = "Rocks_TLC_box";
		author = "Rockn Roll Glue";
		url = "https://github.com/RocknRollGlue";
		units[] = {
			#include "unitClasses.hpp"
		};
		requiredAddons[] = {
			3DEN,
			"ace_cargo",
			"rhs_main",
			"rhsusf_main",
			"rhsgref_main",
			"ALiVE",
			"rocks_Stupid_box"
		};
		is3DENmod = 1;
	};
	
};

class CfgFactionClasses {
	#include "cfgFactionClasses.hpp"
};
// Main eden category
class CfgEditorCategories{
	class Rocks_Stupid_boxes_editor_category{
		displayName = "Rocks Stupid Supplies"; //Eden Main Category
	};
};
class CfgVehicleClasses {
	#include "cfgVehicleClasses.hpp"
};

class Cfg3DEN {
	#include "cfgEden.hpp"
};


class CfgVehicles {
	#include "cfgVehicles.hpp"
};