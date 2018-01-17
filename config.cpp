class CfgPatches
{
	class a3cn_scopes
	{
		units[]   = {};
		weapons[] =
		{
			"optic_LRPS_Themal",
			"a3cn_LSMARK4",
			"a3cn_LSMARK4_Delta",
			"a3cn_LSMARK4_Thermal",
			"a3cn_LSMARK4_Sand",
			"a3cn_sb31250",
			"a3cn_ANPVS10",
			"a3cn_ANPVS10_Green",
			"a3cn_anpasl",
			"a3cn_anpasm",
			"a3cn_ANPVS4"
		};
		requiredversion  = 0.1;
		requiredaddons[] = {
			"A3_Weapons_F_Acc",
			"asdg_jointrails"
		};
	};
};

class asdg_OpticRail;
class asdg_FrontSideRail;
class asdg_OpticRail1913: asdg_OpticRail
{
    class compatibleItems
    {
        a3cn_LSMARK4 = 1;
				a3cn_LSMARK4_Thermal = 1;
				a3cn_LSMARK4_Delta = 1;
				a3cn_sb31250 = 1;
				a3cn_anpvs10 = 1;
				a3cn_anpvs10_green = 1;
				a3cn_anpasl = 1;
				a3cn_anpasm = 1;
				a3cn_anpvs4 = 1;
				a3cn_m68cco = 1;
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons
{
    class ItemCore;
		class InventoryOpticsItem_Base_F;
    class optic_tws;
    class optic_Nightstalker;
    class optic_nvs;

	class optic_SOS : ItemCore
	{
		descriptionShort = "Marksman Optical Sights<br />Magnification: 2,5x-5x<br/>NightVision";
		ACE_NightVision_grain = 0.0;
        ACE_NightVision_blur = 0.0;
        ACE_NightVision_radBlur = 0.0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[]={0,1};
				};
				class Iron: Snip
				{
				};
			};
		};
	};
	class optic_DMS : ItemCore {
		descriptionShort = "DMS<br />magnification: 2x-4x<br/>NightVision";
		ACE_NightVision_grain = 0.0;
        ACE_NightVision_blur = 0.0;
        ACE_NightVision_radBlur = 0.0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[]={0,1};
				};
				class Iron: Snip
				{
				};
			};
		};
	};

	class optic_LRPS : ItemCore {
		descriptionShort = "Long-Range Precision Scope<br />Magnification: 6x-25x";
		ACE_NightVision_grain = 0.0;
        ACE_NightVision_blur = 0.0;
        ACE_NightVision_radBlur = 0.0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip{
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[]={0,1};
				};
			};
		};
	};


	class optic_AMS_base : ItemCore {
		descriptionShort = "Advanced Marksman Scope<br />Magnification:3x-10x<br />NightVision";
		DLC = "Mark";
		ACE_NightVision_grain = 0.0;
        ACE_NightVision_blur = 0.0;
        ACE_NightVision_radBlur = 0.0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class AMS
				{
					visionMode[] = {"Normal", "NVG","Ti"};
					thermalMode[]={0,1};
				};
			};
		};
	};

	class optic_KHS_base : ItemCore {
		descriptionShort = "Kahlia<br />Magnification: 5x-11x<br/>NightVision";
		DLC = "Mark";
		ACE_NightVision_grain = 0.0;
        ACE_NightVision_blur = 0.0;
        ACE_NightVision_radBlur = 0.0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class KHS
				{
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[]={0,1};
				};
				class Iron
				{
				};
			};
		};
	};

	class a3cn_LSMARK4: optic_LRPS {
		dlc="A3CN_Scopes";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		mass = 14;
		author = "Hippye";
		displayName = "Leupold Mark 4 LR/T M3";
		picture = "\a3cn_scopes\ui\riflescope.paa";
		model = "a3cn_scopes\Scope_01.p3d";
		descriptionShort = "Leupold Mark 4 LR/T M3";
		weaponinfotype = "RscWeaponZeroing";
		ACE_NightVision_grain = 0.0;
        ACE_NightVision_blur = 0.0;
        ACE_NightVision_radBlur = 0.0;
		class Library
		{
			libtextdesc = "Leupold & Stevens Mark 4 LR/T 10x40mm (30mm) M3";
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 2;
			modeloptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
			optics = 1;
			opticType = 2;
			class OpticsModes
			{
				class rifle_scope
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.01;
					opticsZoomMax = 0.04;
					opticsZoomInit = 0.04;
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 2300;
					discretefov[] = {0.04,0.01};
					discreteInitIndex = 0;
					memoryPointCamera = "eye";
					modelOptics[] = {"\A3\Weapons_F\acc\reticle_LRPS_F","\A3\Weapons_F\acc\reticle_LRPS_z_F"};
					visionMode[] = {"Normal","NVG"};
					opticsFlare = "true";
					opticsDisablePeripherialVision = "true";
					cameraDir = "";
				};
				class rifle_scope_Top
				{
					distancezoommax = 100;
					distancezoommin = 100;
					discreteInitIndex = 0;
					discretedistance[] = {100};
					discretedistanceinitindex = 0;
					discretefov[] = {};
					memorypointcamera = "eye2";
					opticsdisableperipherialvision = 0;
					opticsdisplayname = "";
					opticsflare = 0;
					opticsid = 2;
					opticszoominit = 0.75;
					opticszoommax = 1.1;
					opticszoommin = 0.375;
					usemodeloptics = 0;
					visionmode[] = {};
					opticsppeffects[] = {};
				};
			};
		};
	};

	class a3cn_LSMARK4_Thermal: optic_LRPS {
		dlc="A3CN_Scopes";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		mass = 14;
		author = "Hippye";
		displayName = "Leupold Mark 4 LR/T M3 with Thermal";
		picture = "\a3cn_scopes\ui\riflescope.paa";
		model = "a3cn_scopes\Scope_01.p3d";
		descriptionShort = "Leupold Mark 4 LR/T M3 w/ Thermal";
		weaponinfotype = "RscWeaponZeroing";
		ACE_NightVision_grain = 0.0;
        ACE_NightVision_blur = 0.0;
        ACE_NightVision_radBlur = 0.0;
		class Library
		{
			libtextdesc = "Leupold & Stevens Mark 4 LR/T 10x40mm (30mm) M3 with Thermal";
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 2;
			modeloptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
			optics = 1;
			opticType = 2;
			class OpticsModes
			{
				class rifle_scope
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.01;
					opticsZoomMax = 0.04;
					opticsZoomInit = 0.04;
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 2300;
					discretefov[] = {0.04,0.01};
					discreteInitIndex = 0;
					memoryPointCamera = "eye";
					modelOptics[] = {"\A3\Weapons_F\acc\reticle_LRPS_F","\A3\Weapons_F\acc\reticle_LRPS_z_F"};
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[]={0,1};
					opticsFlare = "true";
					opticsDisablePeripherialVision = "true";
					cameraDir = "";
				};
				class rifle_scope_Top
				{
					distancezoommax = 100;
					distancezoommin = 100;
					discreteInitIndex = 0;
					discretedistance[] = {100};
					discretedistanceinitindex = 0;
					discretefov[] = {};
					memorypointcamera = "eye2";
					opticsdisableperipherialvision = 0;
					opticsdisplayname = "";
					opticsflare = 0;
					opticsid = 2;
					opticszoominit = 0.75;
					opticszoommax = 1.1;
					opticszoommin = 0.375;
					usemodeloptics = 0;
					visionmode[] = {};
					opticsppeffects[] = {};
				};
			};
		};
	};

	class a3cn_LSMARK4_Delta: a3cn_LSMARK4
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		mass = 14;
		author = "Hippye";
		displayName = "Leupold Mark 4 LR/T M3 w/ DeltaPoint";
		picture = "\a3cn_scopes\ui\m3delta.paa";
		model = "a3cn_scopes\Scope_07.p3d";
		descriptionShort = "Leupold Mark 4 LR/T M3 w/ DeltaPoint";
		weaponinfotype = "RscWeaponZeroing";
		class Library
		{
			libtextdesc = "Leupold & Stevens Mark 4 LR/T 10x40mm (30mm) M3 w/ DeltaPoint Reflex";
		};
	};

	class a3cn_LSMARK4_Sand: a3cn_LSMARK4
	{
		scope = 2;
scopeCurator = 2;
scopeArsenal = 2;
		mass = 14;
		author = "Hippye";
		displayName = "Leupold Mark 4 LR/T M3 Sand";
		picture = "\a3cn_scopes\ui\riflescope.paa";
		model = "a3cn_scopes\Scope_09.p3d";
		descriptionShort = "Leupold Mark 4 LR/T M3 Sand";
		weaponinfotype = "RscWeaponZeroing";
		class Library
		{
			libtextdesc = "Leupold & Stevens Mark 4 LR/T 10x40mm (30mm) M3 Sand Painting";
		};
	};

	class a3cn_SB31250: optic_LRPS
	{
		scope = 2;
scopeCurator = 2;
scopeArsenal = 2;
		mass = 19;
		author = "Hippye";
		displayName = "SB 3-12x50 PM II/LP";
		picture = "\a3cn_scopes\ui\sb31250.paa";
		model = "a3cn_scopes\Scope_02.p3d";
		descriptionShort = "S&B 3-12x50 PM II/LP w/ Camo Net";
		weaponinfotype = "RscWeaponZeroing";
		ACE_NightVision_grain = 0.0;
        ACE_NightVision_blur = 0.0;
        ACE_NightVision_radBlur = 0.0;
		class Library
		{
			libtextdesc = "Schmidt & Bender 3-12x50 PM II/LP";
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 2;
			modeloptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
			optics = 1;
			opticType = 2;
			class OpticsModes
			{
				class rifle_scope
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.01;
					opticsZoomMax = 0.04;
					opticsZoomInit = 0.04;
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 2300;
					discretefov[] = {0.04,0.01};
					discreteInitIndex = 0;
					memoryPointCamera = "eye";
					modelOptics[] = {"\A3\Weapons_F\acc\reticle_LRPS_F","\A3\Weapons_F\acc\reticle_LRPS_z_F"};
					visionMode[] = {"Normal","NVG"};
					opticsFlare = "true";
					opticsDisablePeripherialVision = "true";
					cameraDir = "";
				};
				class rifle_scope_Top
				{
					distancezoommax = 100;
					distancezoommin = 100;
					discreteInitIndex = 0;
					discretedistance[] = {100};
					discretedistanceinitindex = 0;
					discretefov[] = {};
					memorypointcamera = "eye2";
					opticsdisableperipherialvision = 0;
					opticsdisplayname = "";
					opticsflare = 0;
					opticsid = 2;
					opticszoominit = 0.75;
					opticszoommax = 1.1;
					opticszoommin = 0.375;
					usemodeloptics = 0;
					visionmode[] = {};
					opticsppeffects[] = {};
				};
			};
		};
	};
	class a3cn_ANPVS10: optic_Nightstalker
	{
		author = "Hippye";
		mass = 49;
		scope = 2;
scopeCurator = 2;
scopeArsenal = 2;
		displayName = "AN/PVS-10 (Black)";
		picture = "\a3cn_scopes\UI\anpvs10black.paa";
		model = "\a3cn_scopes\scope_03.p3d";
		descriptionShort = "AN/PVS-10 (Black)";
		weaponInfoType = "RscOptics_nightstalker";
		ACE_NightVision_grain = 0.0;
        ACE_NightVision_blur = 0.0;
        ACE_NightVision_radBlur = 0.0;
		class Library
		{
			libtextdesc = "AN/PVS-10 (Black)";
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 12;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_f\acc\reticle_nightstalker_F";
			class OpticsModes
			{
				class ANPVS10
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.03;
					opticsZoomMax = 0.15;
					opticsZoomInit = 0.15;
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					memoryPointCamera = "eye";
					visionMode[] = {"Normal","NVG"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
	};
	class a3cn_ANPVS10_Green: a3cn_ANPVS10
	{
		author = "Hippye";
		mass = 49;
		scope = 2;
scopeCurator = 2;
scopeArsenal = 2;
		displayName = "AN/PVS-10 (Green)";
		picture = "\a3cn_scopes\UI\anpvs10green.paa";
		model = "\a3cn_scopes\scope_03_green.p3d";
	};
	class a3cn_ANPASM: optic_tws
	{
		author = "Hippye";
		mass = 50;
		scope = 2;
scopeCurator = 2;
scopeArsenal = 2;
		displayName = "AN/PAS-13CV2 MWTS";
		picture = "\a3cn_scopes\UI\anpas13m.paa";
		model = "\a3cn_scopes\scope_04.p3d";
		descriptionShort = "AN/PAS-13CV1 MWTS Thermal Sight";
		weaponInfoType = "RscOptics_tws";
		ACE_NightVision_grain = 0.0;
        ACE_NightVision_blur = 0.0;
        ACE_NightVision_radBlur = 0.0;
		class Library
		{
			libtextdesc = "The AN/PAS-13 Thermal Weapon Sight (TWS) is an infrared sight developed for the United States military by Raytheon. The sight is designed for use on small arms in the U.S. military's inventory, but it can also be used as a standalone observation device. The AN/PAS-13B uses thermal imaging so that it can be used day or night. Thermal imaging also allows the sight to see through smoke or fog, things that may normally obscure other night vision devices. The AN/PAS-13 first became operationally capable with the U.S. Army in 1998 and has reached a total production of 33,400 units.";
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 12;
			optics = 1;
			eaponInfoType = "RscWeaponRangeZeroingModeFOV";
			modelOptics = "\A3\Weapons_f\acc\reticle_tws";
			class OpticsModes
			{
				class TWS
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.032;
					opticsZoomMax = 0.0755;
					opticsZoomInit = 0.0755;
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1200,1400,1600};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 1200;
					discretefov[] = {0.0755,0.032};
					discreteInitIndex = 0;
					memoryPointCamera = "eye";
					visionMode[] = {"Ti","Normal"};
					thermalMode[] = {0,1};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
	};
	class a3cn_ANPASL: optic_tws
	{
		author = "Hippye";
		mass = 40;
		scope = 2;
scopeCurator = 2;
scopeArsenal = 2;
		displayName = "AN/PAS-13CV1 LWTS";
		picture = "\a3cn_scopes\UI\anpas13l.paa";
		model = "\a3cn_scopes\scope_05.p3d";
		descriptionShort = "AN/PAS-13CV1 LWTS Thermal Sight";
		weaponInfoType = "RscOptics_tws";
		ACE_NightVision_grain = 0.0;
        ACE_NightVision_blur = 0.0;
        ACE_NightVision_radBlur = 0.0;
		class Library
		{
			libtextdesc = "The AN/PAS-13 Thermal Weapon Sight (TWS) is an infrared sight developed for the United States military by Raytheon. The sight is designed for use on small arms in the U.S. military's inventory, but it can also be used as a standalone observation device. The AN/PAS-13B uses thermal imaging so that it can be used day or night. Thermal imaging also allows the sight to see through smoke or fog, things that may normally obscure other night vision devices. The AN/PAS-13 first became operationally capable with the U.S. Army in 1998 and has reached a total production of 33,400 units.";
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 12;
			optics = 1;
			eaponInfoType = "RscWeaponRangeZeroingModeFOV";
			modelOptics = "\A3\Weapons_f\acc\reticle_tws";
			class OpticsModes
			{
				class TWS
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.032;
					opticsZoomMax = 0.0755;
					opticsZoomInit = 0.0755;
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1200,1400,1600};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 1200;
					discretefov[] = {0.0755,0.032};
					discreteInitIndex = 0;
					memoryPointCamera = "eye";
					visionMode[] = {"Ti","Normal"};
					thermalMode[] = {0,1};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
	};
	class a3cn_ANPVS4: optic_Nightstalker
	{
		author = "Hippye";
		mass = 49;
		scope = 2;
scopeCurator = 2;
scopeArsenal = 2;
		displayName = "AN/PVS-4";
		picture = "\a3cn_scopes\UI\anpvs4.paa";
		model = "\a3cn_scopes\scope_06.p3d";
		descriptionShort = "AN/PVS-4";
		weaponinfotype = "RscWeaponZeroing";
		ACE_NightVision_grain = 0.0;
        ACE_NightVision_blur = 0.0;
        ACE_NightVision_radBlur = 0.0;
		class Library
		{
			libtextdesc = "AN/PVS-4 (more formally Night Vision Sight, Individual Served Weapon, AN/PVS-4) is the U.S. military designation for a specification of the first second generation passive Night vision device. The AN/PVS-4 first saw widespread use during the Gulf War and later some deployment in the Iraq War and has since been replaced by modern third-generation weaponsights.";
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 12;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_f\acc\reticle_nvs_F";
			class OpticsModes
			{
				class ANPVS4
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.03;
					opticsZoomMax = 0.15;
					opticsZoomInit = 0.15;
					discreteDistance[] = {100,200,300,400,500,600,700,800};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 800;
					memoryPointCamera = "eye";
					visionMode[] = {"NVG"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
	};
	class a3cn_M68CCO: ItemCore
	{
		scope = 2;
scopeCurator = 2;
scopeArsenal = 2;
		author = "Hippye";
		displayName = "M68 CCO";
		picture = "\a3cn_scopes\UI\aimpoint.paa";
		model = "a3cn_scopes\Scope_08.p3d";
		descriptionShort = "M68 Close Combat Optic";
		weaponinfotype = "RscWeaponZeroing";
		class Library
		{
			libtextdesc = "M68 Close Combat Optic";
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 2;
			modeloptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class a3cn_Aimpoint
				{
					cameradir = "";
					distancezoommax = 200;
					distancezoommin = 200;
					memorypointcamera = "eye";
					opticsdisableperipherialvision = 0;
					opticsflare = 0;
					opticsid = 1;
					opticsppeffects[] = {""};
					opticszoominit = 0.75;
					opticszoommax = 1.1;
					opticszoommin = 0.375;
					usemodeloptics = 0;
					visionmode[] = {};
				};
			};
		};
	};
	class Zasleh2: ItemCore
	{
		scope = 2;
scopeCurator = 2;
scopeArsenal = 2;
		model = "A3\weapons_f\data\zaslehsdl_proxy.p3d";
	};
};
