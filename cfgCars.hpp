/*
	Name: Taliban_fighters
	Author: Yettie
	Date: 25/04/17
	Description: CfgArmour.hpp
*/

class I_G_Offroad_01_armed_F;
class RHS_Ural_Open_Civ_01;

class TBAN_Offroad_arm: I_G_Offroad_01_armed_F
{
	scope=2;
	displayName="Offroad Armed";
	faction="Tban";
	crew="TBan_Fighter6";
	typicalCargo[]=	{"TBan_Fighter1"};
	side=0;
	
};
class TBAN_Truck: RHS_Ural_Open_Civ_01
{
	scope=2;
	displayName="Ural";
	faction="Tban";
	crew="TBan_Fighter6";
	side=0;
	
};