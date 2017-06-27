/*
	Name: Taliban_fighters
	Author: Yettie
	Date: 25/04/17
	Description: CfgGroups.hpp
*/

class CfgGroups
{
	class East
	{
		class tban_groups
		{
			name = "Taliban";
			class Infantry
			{
				name = "Infantry";
				class Taliban_SQD
				{
					name = "Taliban Squad";
					side = 0;
					faction = "TBan";
					class Unit0
					{
						side = 0;
						vehicle = "TBan_Fighter6";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TBan_Fighter1";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TBan_Fighter2";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TBan_Fighter3";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TBan_Fighter4";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TBan_Fighter5";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
						class Unit6
					{
						side = 0;
						vehicle = "TBan_Fighter6";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
						class Unit7
					{
						side = 0;
						vehicle = "TBan_Fighter3";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
				};
				class Taliban_team
				{
					name = "4 man Team";
					side = 0;
					faction = "TBan";
					class Unit0
					{
						side = 0;
						vehicle = "TBan_Fighter6";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TBan_Fighter2";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TBan_Fighter3";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TBan_Fighter4";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class Taliban_group
				{
					name = "2 man group";
					side = 0;
					faction = "TBan";
					class Unit0
					{
						side = 0;
						vehicle = "TBan_Fighter6";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TBan_Fighter4";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class Taliban_RSQD
				{
					name = "Taliban Reinforcement";
					side = 0;
					faction = "TBan";
					class Unit0
					{
						side = 0;
						vehicle = "TBAN_Truck";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TBan_Fighter1";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TBan_Fighter2";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TBan_Fighter3";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TBan_Fighter4";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TBan_Fighter5";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
						class Unit6
					{
						side = 0;
						vehicle = "TBan_Fighter6";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
						class Unit7
					{
						side = 0;
						vehicle = "TBan_Fighter3";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
				};

			};
		};
	};
};