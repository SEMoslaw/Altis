class Life_impound_menu_action
{
	idd = 4300;
	name="Life_impound_menu_action";
	movingEnable = 0;
	enableSimulation = 1;

	class controlsBackground
	{
		class MainBackground: Life_RscText
		{
			colorBackground[] = {0,0,0,0.7};
			idc = -1;
			x = 0.302344 * safezoneW + safezoneX;
			y = 0.348259 * safezoneH + safezoneY;
			w = 0.395312 * safezoneW;
			h = 0.283883 * safezoneH;
		};

		class StoreCar: Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Vehicle_Store";
			onButtonClick = "[1] call life_fnc_storeVehicleAction;closeDialog 0;";
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.581372 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.04 * safezoneH;
		};

		class CloseButton: life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Global_Close";
			colorBackground[] = {0.65,0.01,0,1};
			onButtonClick = "closeDialog 0;";
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.581372 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.04 * safezoneH;
		};

		class CleanCar: life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Vehicle_Clean";
			onButtonClick = "[2] call life_fnc_storeVehicleAction;closeDialog 0;";
			x = 0.440991 * safezoneW + safezoneX;
			y = 0.581372 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.04 * safezoneH;
		};
	};

	class controls
	{
		class TextMessage: Life_RscStructuredText
		{
			idc = 4302;
			text = "$STR_Vehicle_StoreMSG";
			sizeEx = 0.040;
			colorBackground[] = {0,0,0,1};
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.359259 * safezoneH + safezoneY;
			w = 0.381562 * safezoneW;
			h = 0.213453 * safezoneH;
		};
	};
};
