/*
	Name: Taliban_fighters
	Author: Yettie
	Date: 25/04/17
	Description: CfgUniforms.hpp
*/


	class InventoryItem_Base_F;
	class HeadgearItem;
	class UniformItem: InventoryItem_Base_F
	{
		type=801;
	};
	class ItemCore;
	class Uniform_Base;
	class U_Afghan01: Uniform_Base
	{
		author="EricJ";
		scope=2;
		displayName="Afghan Clothes 1";
		picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model="\Taliban_Fighters\Uniforms\Afghan_01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Taliban_Fighters\data\tak_civil01_1_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TBan_Fighter1";
			containerClass="Supply150";
			passThrough=1;
			mass=30;
		};
	};
	class U_Afghan02: Uniform_Base
	{
		author="EricJ";
		scope=2;
		displayName="Afghan Clothes 2";
		picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model="\Taliban_Fighters\Uniforms\Afghan_02.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Taliban_Fighters\data\tak_civil02_1_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TBan_Fighter2";
			containerClass="Supply150";
			passThrough=1;
			mass=30;
		};
	};
	class U_Afghan03: Uniform_Base
	{
		author="EricJ";
		scope=2;
		displayName="Afghan Clothes 3";
		picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model="\Taliban_Fighters\Uniforms\Afghan_03.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Taliban_Fighters\data\tak_civil03_1_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TBan_Fighter3";
			containerClass="Supply150";
			passThrough=1;
			mass=30;
		};
	};
	class U_Afghan04: Uniform_Base
	{
		author="EricJ";
		scope=2;
		displayName="Afghan Clothes 4";
		picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model="\Taliban_Fighters\Uniforms\Afghan_04.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Taliban_Fighters\data\tak_civil04_1_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TBan_Fighter4";
			containerClass="Supply150";
			mass=30;
			passThrough=1;
		};
	};
	class U_Afghan05: Uniform_Base
	{
		author="EricJ";
		scope=2;
		displayName="Afghan Clothes 5";
		picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model="\Taliban_Fighters\Uniforms\Afghan_05.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Taliban_Fighters\data\tak_civil05_1_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TBan_Fighter5";
			containerClass="Supply150";
			mass=30;
			passThrough=1;
		};
	};
	class U_Afghan06: Uniform_Base
	{
		author="EricJ";
		scope=2;
		displayName="Afghan Clothes 6";
		picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model="\Taliban_Fighters\Uniforms\Afghan_06.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Taliban_Fighters\data\tak_civil06_1_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TBan_Fighter6";
			containerClass="Supply150";
			mass=30;
			passThrough=1;
		};
	};
	class U_Afghan01NH: Uniform_Base
	{
		author="EricJ";
		scope=2;
		displayName="Afghan Clothes 1 (No Hat)";
		picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model="\Taliban_Fighters\Uniforms\Afghan_01NH.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Taliban_Fighters\data\tak_civil01_1_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TBan_Fighter1NH";
			containerClass="Supply150";
			mass=30;
			passThrough=1;
		};
	};
	class U_Afghan02NH: Uniform_Base
	{
		author="EricJ";
		scope=2;
		displayName="Afghan Clothes 2 (No Hat)";
		picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model="\Taliban_Fighters\Uniforms\Afghan_02NH.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Taliban_Fighters\data\tak_civil02_1_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TBan_Fighter2NH";
			containerClass="Supply150";
			mass=30;
			passThrough=1;
		};
	};
	class U_Afghan03NH: Uniform_Base
	{
		author="EricJ";
		scope=2;
		displayName="Afghan Clothes 3 (No Hat)";
		picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model="\Taliban_Fighters\Uniforms\Afghan_03NH.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Taliban_Fighters\data\tak_civil03_1_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TBan_Fighter3NH";
			passThrough=1;
			containerClass="Supply150";
			mass=30;
		};
	};
	class U_Afghan06NH: Uniform_Base
	{
		author="EricJ";
		scope=2;
		displayName="Afghan Clothes 6 (No Hat)";
		picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model="\Taliban_Fighters\Uniforms\Afghan_06NH.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Taliban_Fighters\data\tak_civil06_1_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TBan_Fighter6NH";
			armor=0;
			passThrough=1;
			containerClass="Supply150";
			mass=30;
		};
	};
	class H_HelmetB;
	class Afghan_01Hat: H_HelmetB
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Afghan_01Hat";
		displayName="Afghan Hat 1";
		picture="\Taliban_Fighters\data\ui\Afghan_01Hat.paa";
		model="\Taliban_Fighters\gear\Afghan_01Hat";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Taliban_Fighters\data\tak_civil01_1_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=4;
			uniformModel="\Taliban_Fighters\gear\Afghan_01Hat.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			armor=0;
			passThrough=1;
		};
	};
	class Afghan_02Hat: H_HelmetB
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Afghan_01Hat";
		displayName="Afghan Hat 2";
		picture="\Taliban_Fighters\data\ui\Afghan_02Hat.paa";
		model="\Taliban_Fighters\gear\Afghan_02Hat";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Taliban_Fighters\data\tak_civil02_1_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=4;
			uniformModel="\Taliban_Fighters\gear\Afghan_02Hat.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			passThrough=1;
		};
	};
	class Afghan_03Hat: H_HelmetB
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Afghan_01Hat";
		displayName="Afghan Hat 3";
		picture="\Taliban_Fighters\data\ui\Afghan_03Hat.paa";
		model="\Taliban_Fighters\gear\Afghan_03Hat";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Taliban_Fighters\data\tak_civil03_1_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=4;
			uniformModel="\Taliban_Fighters\gear\Afghan_03Hat.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			passThrough=1;
		};
	};
	class Afghan_04Hat: H_HelmetB
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Afghan_01Hat";
		displayName="Afghan Hat 4";
		picture="\Taliban_Fighters\data\UI\Afghan_04Hat.paa";
		model="\Taliban_Fighters\gear\Afghan_04Hat";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Taliban_Fighters\data\tak_civil04_1_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=4;
			uniformModel="\Taliban_Fighters\gear\Afghan_04Hat.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			passThrough=1;
		};
	};
	class Afghan_05Hat: H_HelmetB
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Afghan_01Hat";
		displayName="Afghan Hat 5";
		picture="\Taliban_Fighters\data\UI\Afghan_05Hat.paa";
		model="\Taliban_Fighters\gear\Afghan_05Hat";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Taliban_Fighters\data\tak_civil05_1_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=4;
			uniformModel="\Taliban_Fighters\gear\Afghan_05Hat.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			passThrough=1;
		};
	};
	class Afghan_06Hat: H_HelmetB
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Afghan_01Hat";
		displayName="Afghan Hat 6";
		picture="\Taliban_Fighters\data\ui\Afghan_06Hat.paa";
		model="\Taliban_Fighters\gear\Afghan_06Hat";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Taliban_Fighters\data\tak_civil06_1_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=4;
			uniformModel="\Taliban_Fighters\gear\Afghan_06Hat.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			passThrough=1;
		};
	};
