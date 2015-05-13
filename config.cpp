#include "basicdefines_A3.hpp"

class CfgPatches
{
	class A3M_CP
	{
		units[] = {"A3M_H_Stretcher","A3M_H_Table","A3M_SmallServerRack","A3M_Sofa","A3M_SatDish","A3M_CocaineBrick","A3M_WaterCooler","A3M_Dildo","A3M_WeapLocker"};
		requiredAddons[] = {"A3_Structures_F_Civ_Lamps"}; 
		weapons[] = {};
		requiredVersion = 1.00;
	};
};

class CfgVehicleClasses
{
	class A3M_Obj
	{
		displayName = "A3M Objects";
		priority = -1;
	};
	
	class A3M_Med
	{
		displayName = "A3M Medical Objects";
		priority = -1;
	};
	
	class A3M_Mari
	{
		displayName = "A3M Maritime";
		priority = -1;
	};
	
};

class cfgVehicles
{
	class Static;
	
	
		class A3M_H_Stretcher : Static {
		scope = 2;
		scopeCurator= public;
		icon = "iconStaticObject";
		picture = "pictureStaticObject";
		model="\A3M_Objects\Models\A3M_Stretcher.p3d";
		placement = "vertical";
		vehicleClass =  "A3M_Med";
		displayName = "Hospital Bed";
		mapSize = 0.2;
		animated = False;
		armor = 20;
		damageResistance = 0.004;
		attendant = true;
		canBeShot = true;
		ace_dragging_canDrag = 1; // can this object be dragged?; 1 yes, 0 no (0 default)
        ace_dragging_dragPosition[] = {0,1.2,0}; // Offset of the model from the body while dragging, comparable to the offset in attachTo (It's the same actually)
        ace_dragging_dragDirection = 0;  // how much degrees is the model rotatated after dragging it (a global setDir after attachTo)

        ace_dragging_canCarry = 1; // can this object be carried?; 1 yes, 0 no (0 default)
        ace_dragging_carryPosition[] = {0,1.2,0}; // Same as drag, but for carrying objects
        ace_dragging_carryDirection = 0; // Same as drag, but for carrying objects

		};
		
		class A3M_H_Table : Static {
		scope = 2;
		scopeCurator= public;
		icon = "iconStaticObject";
		picture = "pictureStaticObject";
		model="\A3M_Objects\Models\A3M_HTable_Small.p3d";
		placement = "vertical";
		vehicleClass =  "A3M_Med";
		displayName = "Small Hospital Table";
		mapSize = 0.1;
		animated = False;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = true;
		ace_dragging_canDrag = 1; // can this object be dragged?; 1 yes, 0 no (0 default)
        ace_dragging_dragPosition[] = {0,1.2,0}; // Offset of the model from the body while dragging, comparable to the offset in attachTo (It's the same actually)
        ace_dragging_dragDirection = 0;  // how much degrees is the model rotatated after dragging it (a global setDir after attachTo)

        ace_dragging_canCarry = 1; // can this object be carried?; 1 yes, 0 no (0 default)
        ace_dragging_carryPosition[] = {0,1.2,0}; // Same as drag, but for carrying objects
        ace_dragging_carryDirection = 0; // Same as drag, but for carrying objects
		};
	
		class A3M_SmallServerRack : Static {
		scope = 2;
		scopeCurator= public;
		icon = "iconStaticObject";
		picture = "pictureStaticObject";
		model="\A3M_Objects\Models\A3M_Server_Rack_1.p3d";
		placement = "vertical";
		vehicleClass =  "A3M_Obj";
		displayName = "Server Console";
		mapSize = 0.1;
		animated = False;
		armor = 5;
		damageResistance = 0.004;
		canBeShot = true;
		destrType = "DestructEngine";	// smoke only
		ace_dragging_canDrag = 1; // can this object be dragged?; 1 yes, 0 no (0 default)
        ace_dragging_dragPosition[] = {0,1.2,0}; // Offset of the model from the body while dragging, comparable to the offset in attachTo (It's the same actually)
        ace_dragging_dragDirection = 0;  // how much degrees is the model rotatated after dragging it (a global setDir after attachTo)

        ace_dragging_canCarry = 1; // can this object be carried?; 1 yes, 0 no (0 default)
        ace_dragging_carryPosition[] = {0,1.2,0}; // Same as drag, but for carrying objects
        ace_dragging_carryDirection = 0; // Same as drag, but for carrying objects
		};
		
		class A3M_Sofa : Static {
		scope = 2;
		scopeCurator= public;
		icon = "iconStaticObject";
		picture = "pictureStaticObject";
		model="\A3M_Objects\Models\A3M_Couch.p3d";
		placement = "vertical";
		vehicleClass =  "A3M_Obj";
		displayName = "Sofa";
		mapSize = 0.1;
		animated = False;
		armor = 15;
		damageResistance = 0.004;
		canBeShot = true;
		ace_dragging_canDrag = 1; // can this object be dragged?; 1 yes, 0 no (0 default)
        ace_dragging_dragPosition[] = {0,1.2,0}; // Offset of the model from the body while dragging, comparable to the offset in attachTo (It's the same actually)
        ace_dragging_dragDirection = 0;  // how much degrees is the model rotatated after dragging it (a global setDir after attachTo)

        ace_dragging_canCarry = 1; // can this object be carried?; 1 yes, 0 no (0 default)
        ace_dragging_carryPosition[] = {0,1.2,0}; // Same as drag, but for carrying objects
        ace_dragging_carryDirection = 0; // Same as drag, but for carrying objects
		};
		
		class A3M_SatDish : Static {
		scope = 2;
		scopeCurator= public;
		icon = "iconStaticObject";
		picture = "pictureStaticObject";
		model="\A3M_Objects\Models\A3M_SatDish.p3d";
		placement = "vertical";
		vehicleClass =  "A3M_Obj";
		displayName = "Satellite Dish";
		mapSize = 0.1;
		animated = False;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = true;
		ace_dragging_canDrag = 1; // can this object be dragged?; 1 yes, 0 no (0 default)
        ace_dragging_dragPosition[] = {0,1.2,0}; // Offset of the model from the body while dragging, comparable to the offset in attachTo (It's the same actually)
        ace_dragging_dragDirection = 0;  // how much degrees is the model rotatated after dragging it (a global setDir after attachTo)

        ace_dragging_canCarry = 1; // can this object be carried?; 1 yes, 0 no (0 default)
        ace_dragging_carryPosition[] = {0,1.2,0}; // Same as drag, but for carrying objects
        ace_dragging_carryDirection = 0; // Same as drag, but for carrying objects
		};
		
		class A3M_CocaineBrick : Static {
		scope = 2;
		scopeCurator= public;
		icon = "iconStaticObject";
		picture = "pictureStaticObject";
		model="\A3M_Objects\Models\A3M_Cocaine_Brick.p3d";
		placement = "vertical";
		vehicleClass =  "A3M_Obj";
		displayName = "Cocaine (Kilo Brick)";
		mapSize = 0.1;
		animated = False;
		armor = 3;
		damageResistance = 0.004;
		canBeShot = true;
		ace_dragging_canDrag = 1; // can this object be dragged?; 1 yes, 0 no (0 default)
        ace_dragging_dragPosition[] = {0,1.2,0}; // Offset of the model from the body while dragging, comparable to the offset in attachTo (It's the same actually)
        ace_dragging_dragDirection = 0;  // how much degrees is the model rotatated after dragging it (a global setDir after attachTo)

        ace_dragging_canCarry = 1; // can this object be carried?; 1 yes, 0 no (0 default)
        ace_dragging_carryPosition[] = {0,1.2,0}; // Same as drag, but for carrying objects
        ace_dragging_carryDirection = 0; // Same as drag, but for carrying objects
		};
		
		class A3M_WaterCooler : Static {
		scope = 2;
		scopeCurator= public;
		icon = "iconStaticObject";
		picture = "pictureStaticObject";
		model="\A3M_Objects\Models\A3M_Water_Cooler.p3d";
		placement = "vertical";
		vehicleClass =  "A3M_Obj";
		displayName = "Water Cooler";
		mapSize = 0.1;
		animated = False;
		armor = 3;
		damageResistance = 0.004;
		canBeShot = true;
		ace_dragging_canDrag = 1; // can this object be dragged?; 1 yes, 0 no (0 default)
        ace_dragging_dragPosition[] = {0,1.2,0}; // Offset of the model from the body while dragging, comparable to the offset in attachTo (It's the same actually)
        ace_dragging_dragDirection = 0;  // how much degrees is the model rotatated after dragging it (a global setDir after attachTo)

        ace_dragging_canCarry = 1; // can this object be carried?; 1 yes, 0 no (0 default)
        ace_dragging_carryPosition[] = {0,1.2,0}; // Same as drag, but for carrying objects
        ace_dragging_carryDirection = 0; // Same as drag, but for carrying objects
		};
		
		class A3M_Dildo : Static {
		scope = 2;
		scopeCurator= public;
		icon = "iconStaticObject";
		picture = "pictureStaticObject";
		model="\A3M_Objects\Models\A3M_dildo.p3d";
		placement = "vertical";
		vehicleClass =  "A3M_Obj";
		displayName = "Dildo";
		mapSize = 0.1;
		animated = False;
		armor = 1;
		damageResistance = 0.004;
		canBeShot = true;
		ace_dragging_canDrag = 1; // can this object be dragged?; 1 yes, 0 no (0 default)
        ace_dragging_dragPosition[] = {0,1.2,0}; // Offset of the model from the body while dragging, comparable to the offset in attachTo (It's the same actually)
        ace_dragging_dragDirection = 0;  // how much degrees is the model rotatated after dragging it (a global setDir after attachTo)

        ace_dragging_canCarry = 1; // can this object be carried?; 1 yes, 0 no (0 default)
        ace_dragging_carryPosition[] = {0,1.2,0}; // Same as drag, but for carrying objects
        ace_dragging_carryDirection = 0; // Same as drag, but for carrying objects
		};
		
		class A3M_WeapLocker : Static {
		scope = 2;
		scopeCurator= public;
		icon = "iconStaticObject";
		picture = "pictureStaticObject";
		model="\A3M_Objects\Models\A3M_Weapon_Locker.p3d";
		placement = "vertical";
		vehicleClass =  "A3M_Obj";
		displayName = "Weapon Locker";
		mapSize = 0.1;
		animated = False;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = true;
		ace_dragging_canDrag = 1; // can this object be dragged?; 1 yes, 0 no (0 default)
        ace_dragging_dragPosition[] = {0,1.2,0}; // Offset of the model from the body while dragging, comparable to the offset in attachTo (It's the same actually)
        ace_dragging_dragDirection = 0;  // how much degrees is the model rotatated after dragging it (a global setDir after attachTo)

        ace_dragging_canCarry = 1; // can this object be carried?; 1 yes, 0 no (0 default)
        ace_dragging_carryPosition[] = {0,1.2,0}; // Same as drag, but for carrying objects
        ace_dragging_carryDirection = 0; // Same as drag, but for carrying objects
		};
		
		class A3M_ShipA : Static {
		scope = 2;
		scopeCurator= public;
		icon = "iconStaticObject";
		picture = "pictureStaticObject";
		model="\A3M_Objects\Models\A3M_Ship_A.p3d";
		placement = "vertical";
		vehicleClass =  "A3M_Mari";
		displayName = "Ship A";
		mapSize = 0.1;
		animated = False;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = true;
		ace_dragging_canDrag = 1; // can this object be dragged?; 1 yes, 0 no (0 default)
        ace_dragging_dragPosition[] = {0,1.2,0}; // Offset of the model from the body while dragging, comparable to the offset in attachTo (It's the same actually)
        ace_dragging_dragDirection = 0;  // how much degrees is the model rotatated after dragging it (a global setDir after attachTo)

        ace_dragging_canCarry = 1; // can this object be carried?; 1 yes, 0 no (0 default)
        ace_dragging_carryPosition[] = {0,1.2,0}; // Same as drag, but for carrying objects
        ace_dragging_carryDirection = 0; // Same as drag, but for carrying objects
		};
		
			
	};
		