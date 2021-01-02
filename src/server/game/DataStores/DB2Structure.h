/*
 * Copyright (C) 2008-2019 TrinityCore <https://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TRINITY_DB2STRUCTURE_H
#define TRINITY_DB2STRUCTURE_H

#include "Define.h"
#include "DBCEnums.h"
#include "Util.h"

#pragma pack(push, 1)

struct LocalizedString;

struct AdventureJournalEntry
{
    uint32 ID;
    LocalizedString* Name;
    LocalizedString* Description;
    LocalizedString* ButtonText;
    LocalizedString* RewardDescription;
    LocalizedString* ContinueDescription;
    uint8 Type;
    uint32 PlayerConditionID;
    uint8 Flags;
    uint8 ButtonActionType;
    int32 TextureFileDataID;
    uint16 LfgDungeonID;
    uint16 QuestID;
    uint16 BattleMasterListID;
    uint8 PriorityMin;
    uint8 PriorityMax;
    int32 ItemID;
    uint32 ItemQuantity;
    uint16 CurrencyType;
    uint8 CurrencyQuantity;
    uint16 UIMapID;
    uint32 BonusPlayerConditionID[2];
    uint8 BonusValue[2];
};

struct AdventureMapPOIEntry
{
    uint32 ID;
    LocalizedString* Title;
    LocalizedString* Description;
    DBCPosition2D WorldPosition;
    int8 Type;
    uint32 PlayerConditionID;
    uint32 QuestID;
    uint32 LfgDungeonID;
    int32 RewardItemID;
    uint32 UiTextureAtlasMemberID;
    uint32 UiTextureKitID;
    int32 MapID;
    uint32 AreaTableID;
};

struct AlliedRaceEntry
{
    uint32 ID;
    int32 RaceID;
    uint32 BannerColor;
    int32 CrestTextureID;
    int32 ModelBackgroundTextureID;
    int32 MaleCreatureDisplayID;
    int32 FemaleCreatureDisplayID;
    int32 UiUnlockAchievementID;
};

struct AlliedRaceRacialAbilityEntry
{
    uint32 ID;
    LocalizedString* Name;
    LocalizedString* Description;
    int32 IconFileDataID;
    uint8 OrderIndex;
    int32 AlliedRaceID;
};

struct AnimationDataEntry
{
    uint32 ID;
    uint16 Fallback;
    uint8 BehaviorTier;
    int32 BehaviorID;
    int32 Flags[2];
};

struct AnimKitEntry
{
    uint32 ID;
    uint32 OneShotDuration;
    uint16 OneShotStopAnimKitID;
    uint16 LowDefAnimKitID;
};

struct AnimKitBoneSetEntry
{
    uint32 ID;
    char const* Name;
    int8 BoneDataID;
    int8 ParentAnimKitBoneSetID;
    uint8 ExtraBoneCount;
    int8 AltAnimKitBoneSetID;
};

struct AnimKitBoneSetAliasEntry
{
    uint32 ID;
    uint8 BoneDataID;
    uint8 AnimKitBoneSetID;
};

struct AnimKitConfigEntry
{
    uint32 ID;
    uint32 ConfigFlags;
};

struct AnimKitConfigBoneSetEntry
{
    uint32 ID;
    uint8 AnimKitBoneSetID;
    uint16 AnimKitPriorityID;
    uint16 ParentAnimKitConfigID;
};

struct AnimKitPriorityEntry
{
    uint32 ID;
    uint8 Priority;
};

struct AnimKitReplacementEntry
{
    uint32 ID;
    uint16 SrcAnimKitID;
    uint16 DstAnimKitID;
    uint16 ConditionalFlags;
    uint16 ParentAnimReplacementSetID;
};

struct AnimKitSegmentEntry
{
    uint32 ID;
    uint16 ParentAnimKitID;
    uint8 OrderIndex;
    uint16 AnimID;
    uint32 AnimStartTime;
    uint16 AnimKitConfigID;
    uint8 StartCondition;
    uint8 StartConditionParam;
    uint32 StartConditionDelay;
    uint8 EndCondition;
    uint32 EndConditionParam;
    uint32 EndConditionDelay;
    float Speed;
    uint16 SegmentFlags;
    uint8 ForcedVariation;
    int32 OverrideConfigFlags;
    int8 LoopToSegmentIndex;
    uint16 BlendInTimeMs;
    uint16 BlendOutTimeMs;
};

struct AnimReplacementEntry
{
    uint32 ID;
    uint16 SrcAnimID;
    uint16 DstAnimID;
    uint16 ConditionalFlags;
    uint16 ParentAnimReplacementSetID;
};

struct AnimReplacementSetEntry
{
    uint32 ID;
    uint8 ExecOrder;
};

struct AoiBoxEntry
{
    uint32 ID;
    float Bounds[6];
    int32 Flags;
    int32 EncounterID;
    int32 WorldStateID;
    int32 MapID;
};

struct AreaConditionalDataEntry
{
    LocalizedString* AreaName;
    uint32 ID;
    int32 OrderIndex;
    int32 PlayerConditionID;
    int32 AreaID;
};

struct AreaFarClipOverrideEntry
{
    uint32 ID;
    int32 AreaID;
    float MinFarClip;
    float MinHorizonStart;
    int32 Flags;
};

struct AreaGroupMemberEntry
{
    uint32 ID;
    uint16 AreaID;
    uint16 AreaGroupID;
};

struct AreaPOIEntry
{
    LocalizedString* Name;
    LocalizedString* Description;
    uint32 ID;
    DBCPosition3D Pos;
    int32 PortLocID;
    uint32 PlayerConditionID;
    uint32 UiTextureAtlasMemberID;
    uint32 Flags;
    int32 WMOGroupID;
    int32 PoiDataType;
    int32 PoiData;
    uint16 ContinentID;
    int16 AreaID;
    uint16 WorldStateID;
    uint16 UiWidgetSetID;
    uint8 Importance;
    uint8 Icon;
};

struct AreaPOIStateEntry
{
    uint32 ID;
    LocalizedString* Description;
    uint8 WorldStateValue;
    uint8 IconEnumValue;
    uint32 UiTextureAtlasMemberID;
    uint16 AreaPoiID;
};

struct AreaTableEntry
{
    uint32 ID;
    char const* ZoneName;
    LocalizedString* AreaName;
    uint16 ContinentID;
    uint16 ParentAreaID;
    int16 AreaBit;
    uint8 SoundProviderPref;
    uint8 SoundProviderPrefUnderwater;
    uint16 AmbienceID;
    uint16 UwAmbience;
    uint16 ZoneMusic;
    uint16 UwZoneMusic;
    int8 ExplorationLevel;
    uint16 IntroSound;
    uint32 UwIntroSound;
    uint8 FactionGroupMask;
    float AmbientMultiplier;
    uint8 MountFlags;
    int16 PvpCombatWorldStateID;
    uint8 WildBattlePetLevelMin;
    uint8 WildBattlePetLevelMax;
    uint8 WindSettingsID;
    int32 Flags[2];
    uint16 LiquidTypeID[4];

    // helpers
    bool IsSanctuary() const
    {
        if (ContinentID == 609)
            return true;
        return (Flags[0] & AREA_FLAG_SANCTUARY) != 0;
    }
};

struct AreaTriggerEntry
{
    LocalizedString* Field_1_13_2_30073_000;
    DBCPosition3D Pos;
    uint32 ID;
    int16 ContinentID;
    int8 PhaseUseFlags;
    int16 PhaseID;
    int16 PhaseGroupID;
    float Radius;
    float BoxLength;
    float BoxWidth;
    float BoxHeight;
    float BoxYaw;
    int8 ShapeType;
    int16 ShapeID;
    int16 AreaTriggerActionSetID;
    int8 Flags;
};

struct AreaTriggerActionSetEntry
{
    uint32 ID;
    int16 Flags;
};

struct AreaTriggerBoxEntry
{
    uint32 ID;
    float Extents[3];
};

struct AreaTriggerCreatePropertiesEntry
{
    uint32 ID;
    int8 ShapeType;
    int16 StartShapeID;
};

struct AreaTriggerCylinderEntry
{
    uint32 ID;
    float Radius;
    float Height;
    float ZOffset;
};

struct AreaTriggerSphereEntry
{
    uint32 ID;
    float MaxRadius;
};

struct ArmorLocationEntry
{
    uint32 ID;
    float Clothmodifier;
    float Leathermodifier;
    float Chainmodifier;
    float Platemodifier;
    float Modifier;
};

struct ArtifactEntry
{
    LocalizedString* Name;
    uint32 ID;
    uint16 UiTextureKitID;
    int32 UiNameColor;
    int32 UiBarOverlayColor;
    int32 UiBarBackgroundColor;
    uint16 ChrSpecializationID;
    uint8 Flags;
    uint8 ArtifactCategoryID;
    uint32 UiModelSceneID;
    uint32 SpellVisualKitID;
};

struct ArtifactAppearanceEntry
{
    LocalizedString* Name;
    uint32 ID;
    uint16 ArtifactAppearanceSetID;
    uint8 DisplayIndex;
    uint32 UnlockPlayerConditionID;
    uint8 ItemAppearanceModifierID;
    int32 UiSwatchColor;
    float UiModelSaturation;
    float UiModelOpacity;
    uint8 OverrideShapeshiftFormID;
    uint32 OverrideShapeshiftDisplayID;
    uint32 UiItemAppearanceID;
    uint32 UiAltItemAppearanceID;
    uint8 Flags;
    uint16 UiCameraID;
};

struct ArtifactAppearanceSetEntry
{
    LocalizedString* Name;
    LocalizedString* Description;
    uint32 ID;
    uint8 DisplayIndex;
    uint16 UiCameraID;
    uint16 AltHandUICameraID;
    int8 ForgeAttachmentOverride;
    uint8 Flags;
    uint8 ArtifactID;
};

struct ArtifactCategoryEntry
{
    uint32 ID;
    int16 XpMultCurrencyID;
    int16 XpMultCurveID;
};

struct ArtifactItemToTransmogEntry
{
    uint32 ID;
    int32 ChildItemID;
    int32 ItemID;
    int32 ArtifactID;
};

struct ArtifactPowerEntry
{
    DBCPosition2D DisplayPos;
    uint32 ID;
    uint8 ArtifactID;
    uint8 MaxPurchasableRank;
    int32 Label;
    uint8 Flags;
    uint8 Tier;
};

struct ArtifactPowerLinkEntry
{
    uint32 ID;
    uint16 PowerA;
    uint16 PowerB;
};

struct ArtifactPowerPickerEntry
{
    uint32 ID;
    uint32 PlayerConditionID;
};

struct ArtifactPowerRankEntry
{
    uint32 ID;
    uint8 RankIndex;
    int32 SpellID;
    uint16 ItemBonusListID;
    float AuraPointsOverride;
    uint16 ArtifactPowerID;
};

struct ArtifactQuestXPEntry
{
    uint32 ID;
    uint32 Difficulty[10];
};

struct ArtifactTierEntry
{
    uint32 ID;
    uint32 ArtifactTier;
    uint32 MaxNumTraits;
    uint32 MaxArtifactKnowledge;
    uint32 KnowledgePlayerCondition;
    uint32 MinimumEmpowerKnowledge;
};

struct ArtifactUnlockEntry
{
    uint32 ID;
    uint32 PowerID;
    uint8 PowerRank;
    uint16 ItemBonusListID;
    uint32 PlayerConditionID;
    uint8 ArtifactID;
};

struct AuctionHouseEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint16 FactionID;
    uint8 DepositRate;
    uint8 ConsignmentRate;
};

struct AzeriteEmpoweredItemEntry
{
    uint32 ID;
    int32 ItemID;
    uint32 AzeriteTierUnlockSetID;
    uint32 AzeritePowerSetID;
};

struct AzeriteItemEntry
{
    uint32 ID;
    int32 ItemID;
};

struct AzeriteItemMilestonePowerEntry
{
    uint32 ID;
    uint8 RequiredLevel;
    int16 AzeritePowerID;
};

struct AzeritePowerEntry
{
    uint32 ID;
    int32 SpellID;
    int32 ItemBonusListID;
    int32 SpecSetID;
    int32 Flags;
};

struct AzeritePowerSetMemberEntry
{
    uint32 ID;
    uint16 AzeritePowerID;
    uint8 Class;
    uint8 Tier;
    uint8 OrderIndex;
    uint16 AzeritePowerSetID;
};

struct AzeriteTierUnlockEntry
{
    uint32 ID;
    uint8 ItemCreationContext;
    uint8 Tier;
    uint8 AzeriteLevel;
    uint8 AzeriteTierUnlockSetID;
};

struct BankBagSlotPricesEntry
{
    uint32 ID;
    uint32 Cost;
};

struct BannedAddonsEntry
{
    uint32 ID;
    char const* Name;
    char const* Version;
    uint8 Flags;
};

struct BarberShopStyleEntry
{
    LocalizedString* DisplayName;
    LocalizedString* Description;
    uint32 ID;
    uint8 Type;
    float CostModifier;
    uint8 Race;
    uint8 Sex;
    uint8 Data;
};

struct BattlemasterListEntry
{
    uint32 ID;
    LocalizedString* Name;
    LocalizedString* Gametype;
    LocalizedString* ShortDescription;
    LocalizedString* LongDescription;
    int8 InstanceType;
    int8 Minlevel;
    int8 Maxlevel;
    int8 RatedPlayers;
    int8 MinPlayers;
    int8 MaxPlayers;
    int8 GroupsAllowed;
    int8 MaxGroupSize;
    int16 HolidayWorldState;
    int8 Flags;
    int32 IconFileDataID;
    int32 RequiredPlayerConditionID;
    int16 MapID[16];
};

struct BattlePetAbilityEntry
{
    uint32 ID;
    LocalizedString* Name;
    LocalizedString* Description;
    int32 IconFileDataID;
    int8 PetTypeEnum;
    uint32 Cooldown;
    uint16 BattlePetVisualID;
    uint8 Flags;
};

struct BattlePetAbilityEffectEntry
{
    uint32 ID;
    uint16 BattlePetAbilityTurnID;
    uint8 OrderIndex;
    uint16 BattlePetEffectPropertiesID;
    uint16 AuraBattlePetAbilityID;
    uint16 BattlePetVisualID;
    int16 Param[6];
};

struct BattlePetAbilityStateEntry
{
    uint32 ID;
    uint8 BattlePetStateID;
    int32 Value;
    uint16 BattlePetAbilityID;
};

struct BattlePetAbilityTurnEntry
{
    uint32 ID;
    uint16 BattlePetAbilityID;
    uint8 OrderIndex;
    uint8 TurnTypeEnum;
    int8 EventTypeEnum;
    uint16 BattlePetVisualID;
};

struct BattlePetBreedQualityEntry
{
    uint32 ID;
    float StateMultiplier;
    uint8 QualityEnum;
};

struct BattlePetBreedStateEntry
{
    uint32 ID;
    uint8 BattlePetStateID;
    uint16 Value;
    uint8 BattlePetBreedID;
};

struct BattlePetDisplayOverrideEntry
{
    uint32 ID;
    uint32 BattlePetSpeciesID;
    uint32 PlayerConditionID;
    uint32 CreatureDisplayInfoID;
    uint8 PriorityCategory;
};

struct BattlePetEffectPropertiesEntry
{
    uint32 ID;
    char const* ParamLabel;
    uint16 BattlePetVisualID;
    uint8 ParamTypeEnum[6];
};

struct BattlePetNPCTeamMemberEntry
{
    uint32 ID;
    LocalizedString* Name;
};

struct BattlePetSpeciesEntry
{
    LocalizedString* Description;
    LocalizedString* SourceText;
    uint32 ID;
    int32 CreatureID;
    int32 SummonSpellID;
    int32 IconFileDataID;
    uint8 PetTypeEnum;
    uint16 Flags;
    int8 SourceTypeEnum;
    int32 CardUIModelSceneID;
    int32 LoadoutUIModelSceneID;
};

struct BattlePetSpeciesStateEntry
{
    uint32 ID;
    uint8 BattlePetStateID;
    int32 Value;
    uint16 BattlePetSpeciesID;
};

struct BattlePetSpeciesXAbilityEntry
{
    uint32 ID;
    uint16 BattlePetAbilityID;
    uint8 RequiredLevel;
    int8 SlotEnum;
    uint16 BattlePetSpeciesID;
};

struct BattlePetStateEntry
{
    uint32 ID;
    char const* LuaName;
    uint16 Flags;
    uint16 BattlePetVisualID;
};

struct BattlePetVisualEntry
{
    uint32 ID;
    char const* SceneScriptFunction;
    uint32 SpellVisualID;
    uint16 CastMilliSeconds;
    uint16 ImpactMilliSeconds;
    int8 RangeTypeEnum;
    uint8 Flags;
    uint16 SceneScriptPackageID;
};

struct BeamEffectEntry
{
    uint32 ID;
    int32 BeamID;
    float SourceMinDistance;
    float FixedLength;
    int32 Flags;
    int32 SourceOffset;
    int32 DestOffset;
    int32 SourceAttachID;
    int32 DestAttachID;
    int32 SourcePositionerID;
    int32 DestPositionerID;
};

struct BoneWindModifierModelEntry
{
    uint32 ID;
    int32 FileDataID;
    int32 BoneWindModifierID;
};

struct BoneWindModifiersEntry
{
    uint32 ID;
    float Multiplier[3];
    float PhaseMultiplier;
};

struct BonusRollEntry
{
    uint32 ID;
    uint32 CurrencyTypesID;
    uint32 CurrencyCost;
    uint32 JournalEncounterID;
    uint32 JournalInstanceID;
};

struct BountyEntry
{
    uint32 ID;
    uint16 QuestID;
    uint16 FactionID;
    uint32 IconFileDataID;
    uint32 TurninPlayerConditionID;
    uint8 BountySetID;
};

struct BountySetEntry
{
    uint32 ID;
    uint32 VisiblePlayerConditionID;
    uint16 LockedQuestID;
};

struct CameraEffectEntry
{
    uint32 ID;
    uint8 Flags;
};

struct CameraEffectEntryEntry
{
    uint32 ID;
    uint8 OrderIndex;
    uint16 AmplitudeCurveID;
    float Duration;
    float Delay;
    float Phase;
    float Amplitude;
    float AmplitudeB;
    float Frequency;
    float RadiusMin;
    float RadiusMax;
    uint8 Flags;
    int8 EffectType;
    uint8 DirectionType;
    uint8 MovementType;
    int8 AttenuationType;
    uint16 CameraEffectID;
};

struct CameraModeEntry
{
    uint32 ID;
    DBCPosition3D PositionOffset;
    float TargetOffset[3];
    int8 Type;
    int32 Flags;
    float PositionSmoothing;
    float RotationSmoothing;
    float FieldOfView;
    int8 LockedPositionOffsetBase;
    int8 LockedPositionOffsetDirection;
    int8 LockedTargetOffsetBase;
    int8 LockedTargetOffsetDirection;
};

struct CampaignEntry
{
    LocalizedString* Title;
    char const* InternalTitle;
    LocalizedString* Description;
    uint32 ID;
    uint32 UiTextureKitID;
    uint32 RewardQuestID;
    uint32 Prerequisite;
};

struct CampaignXConditionEntry
{
    uint32 ID;
    uint32 PlayerConditionID;
    uint32 OrderIndex;
    uint32 CampaignID;
};

struct CampaignXQuestLineEntry
{
    uint32 ID;
    uint32 CampaignID;
    uint32 QuestLineID;
    uint32 OrderIndex;
};

struct CastableRaidBuffsEntry
{
    uint32 ID;
    uint32 CastingSpellID;
    int32 SpellID;
};

struct CelestialBodyEntry
{
    DBCPosition3D Position;
    uint32 ID;
    int32 BaseFileDataID;
    float BodyBaseScale;
    int32 AtmosphericMaskFileDataID;
    int32 AtmosphericModifiedFileDataID;
    float RotateRate;
    float AtmosphericMaskScale;
    int16 SkyArrayBand;
    int32 LightMaskFileDataID;
    int32 GlowMaskFileDataID[2];
    float GlowMaskScale[2];
    int32 GlowModifiedFileDataID[2];
    float ScrollURate[2];
    float ScrollVRate[2];
};

struct Cfg_CategoriesEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint16 LocaleMask;
    uint8 CreateCharsetMask;
    uint8 ExistingCharsetMask;
    uint8 Flags;
    int8 Order;
};

struct Cfg_ConfigsEntry
{
    uint32 ID;
    uint8 PlayerKillingAllowed;
    uint8 Roleplaying;
    uint16 PlayerAttackSpeedBase;
    float MaxDamageReductionPctPhysical;
};

struct Cfg_RegionsEntry
{
    uint32 ID;
    char const* Tag;
    uint16 RegionID;
    uint32 Raidorigin;
    uint8 RegionGroupmask;
    uint32 ChallengeOrigin;
};

struct CharacterFaceBoneSetEntry
{
    uint32 ID;
    uint8 SexID;
    int32 ModelFileDataID;
    uint8 FaceVariationIndex;
    int32 BoneSetFileDataID;
    uint8 RaceID;
};

struct CharacterFacialHairStylesEntry
{
    uint32 ID;
    int32 Geoset[5];
    uint8 RaceID;
    uint8 SexID;
    uint8 VariationID;
};

struct CharacterLoadoutEntry
{
    uint32 ID;
    int64 Racemask;
    int8 ChrClassID;
    int8 Purpose;
};

struct CharacterLoadoutItemEntry
{
    uint32 ID;
    uint16 CharacterLoadoutID;
    uint32 ItemID;
};

struct CharacterServiceInfoEntry
{
    uint32 ID;
    LocalizedString* FlowTitle;
    LocalizedString* PopupTitle;
    LocalizedString* PopupDescription;
    int32 BoostType;
    int32 IconFileDataID;
    int32 Priority;
    uint32 Flags;
    int32 ProfessionLevel;
    int32 BoostLevel;
    int32 Expansion;
    int32 PopupUITextureKitID;
};

struct CharBaseInfoEntry
{
    uint32 ID;
    int8 RaceID;
    int8 ClassID;
};

struct CharBaseSectionEntry
{
    uint32 ID;
    uint8 LayoutResType;
    uint8 VariationEnum;
    uint8 ResolutionVariationEnum;
};

struct CharComponentTextureLayoutsEntry
{
    uint32 ID;
    int16 Width;
    int16 Height;
};

struct CharComponentTextureSectionsEntry
{
    uint32 ID;
    int8 CharComponentTextureLayoutID;
    int8 SectionType;
    int16 X;
    int16 Y;
    int16 Width;
    int16 Height;
    uint32 OverlapSectionMask;
};

struct CharHairGeosetsEntry
{
    uint32 ID;
    uint8 RaceID;
    uint8 SexID;
    int8 VariationID;
    uint8 GeosetID;
    uint8 Showscalp;
    int8 VariationType;
    int8 GeosetType;
    int8 ColorIndex;
    int32 CustomGeoFileDataID;
    int32 HdCustomGeoFileDataID;
};

struct CharSectionsEntry
{
    uint32 ID;
    int8 RaceID;
    int8 SexID;
    int8 BaseSection;
    int8 VariationIndex;
    int8 ColorIndex;
    int16 Flags;
    int32 MaterialResourcesID[3];
};

struct CharShipmentEntry
{
    uint32 ID;
    uint16 ContainerID;
    int32 DummyItemID;
    uint32 TreasureID;
    int32 SpellID;
    int32 OnCompleteSpellID;
    uint32 Duration;
    uint8 MaxShipments;
    uint16 GarrFollowerID;
    uint8 Flags;
};

struct CharShipmentContainerEntry
{
    uint32 ID;
    LocalizedString* Description;
    LocalizedString* PendingText;
    uint16 UiTextureKitID;
    uint8 GarrTypeID;
    uint8 GarrBuildingType;
    uint8 BaseCapacity;
    uint16 SmallDisplayInfoID;
    uint16 MediumDisplayInfoID;
    uint16 LargeDisplayInfoID;
    uint16 WorkingDisplayInfoID;
    uint32 WorkingSpellVisualID;
    uint32 CompleteSpellVisualID;
    uint8 MediumThreshold;
    uint8 LargeThreshold;
    int8 Faction;
    uint16 CrossFactionID;
};

struct CharStartOutfitEntry
{
    uint32 ID;
    uint8 ClassID;
    uint8 SexID;
    uint8 OutfitID;
    uint32 PetDisplayID;
    uint8 PetFamilyID;
    int32 ItemID[MAX_OUTFIT_ITEMS];
    uint8 RaceID;
};

struct CharTitlesEntry
{
    uint32 ID;
    LocalizedString* Name;
    LocalizedString* Name1;
    int16 MaskID;
    int8 Flags;
};

struct ChatChannelsEntry
{
    uint32 ID;
    LocalizedString* Name;
    LocalizedString* Shortcut;
    int32 Flags;
    int8 FactionGroup;
};

struct ChatProfanityEntry
{
    uint32 ID;
    char const* Text;
    int8 Language;
};

struct ChrClassesEntry
{
    LocalizedString* Name;
    char const* Filename;
    LocalizedString* NameMale;
    LocalizedString* NameFemale;
    char const* PetNameToken;
    uint32 ID;
    uint32 CreateScreenFileDataID;
    uint32 SelectScreenFileDataID;
    uint32 IconFileDataID;
    uint32 LowResScreenFileDataID;
    int32 StartingLevel;
    uint16 Flags;
    uint16 CinematicSequenceID;
    uint16 DefaultSpec;
    uint8 PrimaryStatPriority;
    uint8 DisplayPower;
    uint8 RangedAttackPowerPerAgility;
    uint8 AttackPowerPerAgility;
    uint8 AttackPowerPerStrength;
    uint8 SpellClassSet;
    uint8 Field_1_13_0_28211_019;
};

struct ChrClassesXPowerTypesEntry
{
    uint32 ID;
    int8 PowerType;
    uint8 ClassID;
};

struct ChrClassRaceSexEntry
{
    uint32 ID;
    int8 ClassID;
    int8 RaceID;
    int8 Sex;
    int32 Flags;
    uint32 SoundID;
    uint32 VoiceSoundFilterID;
};

struct ChrClassTitleEntry
{
    uint32 ID;
    LocalizedString* NameMale;
    LocalizedString* NameFemale;
    uint8 ChrClassID;
};

struct ChrClassUIDisplayEntry
{
    uint32 ID;
    uint8 ChrClassesID;
    uint32 AdvGuidePlayerConditionID;
    uint32 SplashPlayerConditionID;
};

struct ChrClassVillainEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint8 ChrClassID;
    int8 Gender;
};

struct ChrCustomizationEntry
{
    uint32 ID;
    LocalizedString* Name;
    int32 Sex;
    int32 BaseSection;
    int32 UiCustomizationType;
    int32 Flags;
    int32 ComponentSection[3];
    int32 RaceID;
};

struct ChrRacesEntry
{
    char const* ClientPrefix;
    char const* ClientFileString;
    LocalizedString* Name;
    LocalizedString* NameFemale;
    LocalizedString* NameLowercase;
    LocalizedString* NameFemalelowercase;
    uint32 ID;
    int32 Flags;
    uint32 MaleDisplayID;
    uint32 FemaleDisplayID;
    uint32 HighResMaleDisplayID;
    uint32 HighResFemaleDisplayID;
    int32 CreateScreenFileDataID;
    int32 SelectScreenFileDataID;
    float MaleCustomizeOffset[3];
    float FemaleCustomizeOffset[3];
    int32 LowResScreenFileDataID;
    uint32 AlteredFormStartVisualKitID[3];
    uint32 AlteredFormFinishVisualKitID[3];
    int32 HeritageArmorAchievementID;
    int32 StartingLevel;
    int32 UiDisplayOrder;
    int32 FemaleSkeletonFileDataID;
    int32 MaleSkeletonFileDataID;
    int32 BaseRaceID;
    int16 FactionID;
    int16 CinematicSequenceID;
    int16 ResSicknessSpellID;
    int16 SplashSoundID;
    int8 BaseLanguage;
    int8 CreatureType;
    int8 Alliance;
    int8 RaceRelated;
    int8 UnalteredVisualRaceID;
    int8 CharComponentTextureLayoutID;
    int8 CharComponentTexLayoutHiResID;
    int8 DefaultClassID;
    int8 NeutralRaceID;
    int8 MaleModelFallbackRaceID;
    int8 MaleModelFallbackSex;
    int8 FemaleModelFallbackRaceID;
    int8 FemaleModelFallbackSex;
    int8 MaleTextureFallbackRaceID;
    int8 MaleTextureFallbackSex;
    int8 FemaleTextureFallbackRaceID;
    int8 FemaleTextureFallbackSex;
};

struct ChrSpecializationEntry
{
    LocalizedString* Name;
    LocalizedString* FemaleName;
    LocalizedString* Description;
    uint32 ID;
    int8 ClassID;
    int8 OrderIndex;
    int8 PetTalentType;
    int8 Role;
    uint32 Flags;
    int32 SpellIconFileID;
    int8 PrimaryStatPriority;
    int32 AnimReplacements;
    int32 MasterySpellID[MAX_MASTERY_SPELLS];

    bool IsPetSpecialization() const
    {
        return ClassID == 0;
    }
};

struct ChrUpgradeBucketEntry
{
    uint32 ID;
    uint16 ChrSpecializationID;
    uint8 ChrUpgradeTierID;
};

struct ChrUpgradeBucketSpellEntry
{
    uint32 ID;
    int32 SpellID;
    uint16 ChrUpgradeBucketID;
};

struct ChrUpgradeTierEntry
{
    LocalizedString* DisplayName;
    uint32 ID;
    uint8 OrderIndex;
    uint8 NumTalents;
};

struct CinematicCameraEntry
{
    uint32 ID;
    DBCPosition3D Origin;
    uint32 SoundID;
    float OriginFacing;
    uint32 FileDataID;
};

struct CinematicSequencesEntry
{
    uint32 ID;
    uint32 SoundID;
    uint16 Camera[8];
};

struct ClientSceneEffectEntry
{
    uint32 ID;
    int32 SceneScriptPackageID;
};

struct CloakDampeningEntry
{
    uint32 ID;
    float TabardAngle;
    float TabardDampening;
    float ExpectedWeaponSize;
    float Angle[5];
    float Dampening[5];
    float TailAngle[2];
    float TailDampening[2];
};

struct CloneEffectEntry
{
    uint32 ID;
    int32 DurationMs;
    int32 DelayMs;
    int32 FadeInTimeMs;
    int32 FadeOutTimeMs;
    int32 StateSpellVisualKitID;
    int32 StartSpellVisualKitID;
    int32 OffsetMatrixID;
    int32 Flags;
};

struct CombatConditionEntry
{
    uint32 ID;
    uint16 WorldStateExpressionID;
    uint16 SelfConditionID;
    uint16 TargetConditionID;
    uint8 FriendConditionLogic;
    uint8 EnemyConditionLogic;
    uint16 FriendConditionID[2];
    uint8 FriendConditionOp[2];
    uint8 FriendConditionCount[2];
    uint16 EnemyConditionID[2];
    uint8 EnemyConditionOp[2];
    uint8 EnemyConditionCount[2];
};

struct CommentatorStartLocationEntry
{
    uint32 ID;
    DBCPosition3D Pos;
    int32 MapID;
};

struct CommentatorTrackedCooldownEntry
{
    uint32 ID;
    int32 SpellID;
    uint8 Priority;
    int8 Flags;
    uint16 ChrSpecID;
};

struct CommunityIconEntry
{
    uint32 ID;
    int32 IconFileDataID;
    int32 OrderIndex;
};

struct ComponentModelFileDataEntry
{
    uint32 ID;
    uint8 GenderIndex;
    uint8 ClassID;
    uint8 RaceID;
    int8 PositionIndex;
};

struct ComponentTextureFileDataEntry
{
    uint32 ID;
    uint8 GenderIndex;
    uint8 ClassID;
    uint8 RaceID;
};

struct ConfigurationWarningEntry
{
    uint32 ID;
    LocalizedString* Warning;
    uint32 Type;
};

struct ContentTuningEntry
{
    uint32 ID;
    int32 MinLevel;
    int32 MaxLevel;
    int32 Flags;
    int32 ExpectedStatModID;
    int32 DifficultyESMID;
};

struct ContributionEntry
{
    LocalizedString* Description;
    LocalizedString* Name;
    uint32 ID;
    int32 ManagedWorldStateInputID;
    int32 OrderIndex;
    int32 ContributionStyleContainer;
    int32 UiTextureAtlasMemberID[4];
};

struct ContributionStyleEntry
{
    uint32 ID;
    LocalizedString* StateName;
    LocalizedString* TooltipLine;
    int32 StateColor;
    uint32 Flags;
    int32 StatusBarAtlas;
    int32 BorderAtlas;
    int32 BannerAtlas;
};

struct ContributionStyleContainerEntry
{
    uint32 ID;
    int32 ContributionStyleID[5];
};

struct ConversationLineEntry
{
    uint32 ID;
    uint32 BroadcastTextID;
    uint32 SpellVisualKitID;
    int32 AdditionalDuration;
    uint16 NextConversationLineID;
    uint16 AnimKitID;
    uint8 SpeechType;
    uint8 StartAnimation;
    uint8 EndAnimation;
};

struct CreatureEntry
{
    uint32 ID;
    LocalizedString* Name;
    LocalizedString* NameAlt;
    LocalizedString* Title;
    LocalizedString* TitleAlt;
    int8 Classification;
    uint8 CreatureType;
    uint16 CreatureFamily;
    uint8 StartAnimState;
    int32 DisplayID[4];
    float DisplayProbability[4];
    int32 AlwaysItem[3];
};

struct CreatureDifficultyEntry
{
    uint32 ID;
    int8 ExpansionID;
    int8 MinLevel;
    int8 MaxLevel;
    uint16 FactionID;
    int32 ContentTuningID;
    int32 Flags[7];
    int32 CreatureID;
};

struct CreatureDisplayInfoEntry
{
    uint32 ID;
    uint16 ModelID;
    uint16 SoundID;
    int8 SizeClass;
    float CreatureModelScale;
    uint8 CreatureModelAlpha;
    uint8 BloodID;
    int32 ExtendedDisplayInfoID;
    uint16 NPCSoundID;
    uint16 ParticleColorID;
    int32 PortraitCreatureDisplayInfoID;
    int32 PortraitTextureFileDataID;
    uint16 ObjectEffectPackageID;
    uint16 AnimReplacementSetID;
    uint8 Flags;
    int32 StateSpellVisualKitID;
    float PlayerOverrideScale;
    float PetInstanceScale;
    int8 UnarmedWeaponType;
    int32 MountPoofSpellVisualKitID;
    int32 DissolveEffectID;
    int8 Gender;
    int32 DissolveOutEffectID;
    int8 CreatureModelMinLod;
    int32 TextureVariationFileDataID[3];
};

struct CreatureDisplayInfoCondEntry
{
    uint32 ID;
    int64 RaceMask;
    int8 OrderIndex;
    int8 Gender;
    uint32 ClassMask;
    uint32 SkinColorMask;
    uint32 HairColorMask;
    uint32 HairStyleMask;
    uint32 FaceStyleMask;
    uint32 FacialHairStyleMask;
    int32 CreatureModelDataID;
    int32 CustomOption0Mask[2];
    int32 CustomOption1Mask[2];
    int32 CustomOption2Mask[2];
    int32 TextureVariationFileDataID[3];
    int32 CreatureDisplayInfoID;
};

struct CreatureDisplayInfoEvtEntry
{
    uint32 ID;
    int32 Fourcc;
    int32 SpellVisualKitID;
    int8 Flags;
    int32 CreatureDisplayInfoID;
};

struct CreatureDisplayInfoExtraEntry
{
    uint32 ID;
    int8 DisplayRaceID;
    int8 DisplaySexID;
    int8 DisplayClassID;
    int8 SkinID;
    int8 FaceID;
    int8 HairStyleID;
    int8 HairColorID;
    int8 FacialHairID;
    int8 Flags;
    int32 BakeMaterialResourcesID;
    int32 HDBakeMaterialResourcesID;
    uint8 CustomDisplayOption[3];
};

struct CreatureDisplayInfoGeosetDataEntry
{
    uint32 ID;
    uint8 GeosetIndex;
    uint8 GeosetValue;
    uint32 CreatureDisplayInfoID;
};

struct CreatureDisplayInfoTrnEntry
{
    uint32 ID;
    int32 DstCreatureDisplayInfoID;
    uint32 DissolveEffectID;
    uint32 StartVisualKitID;
    float MaxTime;
    int32 FinishVisualKitID;
    int32 SrcCreatureDisplayInfoID;
};

struct CreatureDispXUiCameraEntry
{
    uint32 ID;
    uint32 CreatureDisplayInfoID;
    uint16 UiCameraID;
};

struct CreatureFamilyEntry
{
    uint32 ID;
    LocalizedString* Name;
    float MinScale;
    int8 MinScaleLevel;
    float MaxScale;
    int8 MaxScaleLevel;
    int16 PetFoodMask;
    int8 PetTalentType;
    int32 IconFileID;
    int16 SkillLine[2];
};

struct CreatureImmunitiesEntry
{
    uint32 ID;
    uint8 School;
    uint32 DispelType;
    uint8 MechanicsAllowed;
    uint8 EffectsAllowed;
    uint8 StatesAllowed;
    uint8 Flags;
    int32 Mechanic[2];
    uint32 Effect[9];
    uint32 State[16];
};

struct CreatureModelDataEntry
{
    uint32 ID;
    float GeoBox[6];
    uint32 Flags;
    uint32 FileDataID;
    uint32 BloodID;
    uint32 FootprintTextureID;
    float FootprintTextureLength;
    float FootprintTextureWidth;
    float FootprintParticleScale;
    uint32 FoleyMaterialID;
    uint32 FootstepCameraEffectID;
    uint32 DeathThudCameraEffectID;
    uint32 SoundID;
    uint32 SizeClass;
    float CollisionWidth;
    float CollisionHeight;
    float WorldEffectScale;
    uint32 CreatureGeosetDataID;
    float HoverHeight;
    float AttachedEffectScale;
    float ModelScale;
    float MissileCollisionRadius;
    float MissileCollisionPush;
    float MissileCollisionRaise;
    float MountHeight;
    float OverrideLootEffectScale;
    float OverrideNameScale;
    float OverrideSelectionRadius;
    float TamedPetBaseScale;
};

struct CreatureMovementInfoEntry
{
    uint32 ID;
    float SmoothFacingChaseRate;
};

struct CreatureSoundDataEntry
{
    uint32 ID;
    uint32 SoundExertionID;
    uint32 SoundExertionCriticalID;
    uint32 SoundInjuryID;
    uint32 SoundInjuryCriticalID;
    uint32 SoundInjuryCrushingBlowID;
    uint32 SoundDeathID;
    uint32 SoundStunID;
    uint32 SoundStandID;
    uint32 SoundFootstepID;
    uint32 SoundAggroID;
    uint32 SoundWingFlapID;
    uint32 SoundWingGlideID;
    uint32 SoundAlertID;
    uint32 SoundJumpStartID;
    uint32 SoundJumpEndID;
    uint32 SoundPetAttackID;
    uint32 SoundPetOrderID;
    uint32 SoundPetDismissID;
    uint32 LoopSoundID;
    uint32 BirthSoundID;
    uint32 SpellCastDirectedSoundID;
    uint32 SubmergeSoundID;
    uint32 SubmergedSoundID;
    uint32 WindupSoundID;
    uint32 WindupCriticalSoundID;
    uint32 ChargeSoundID;
    uint32 ChargeCriticalSoundID;
    uint32 BattleShoutSoundID;
    uint32 BattleShoutCriticalSoundID;
    uint32 TauntSoundID;
    uint32 CreatureSoundDataIDPet;
    float FidgetDelaySecondsMin;
    float FidgetDelaySecondsMax;
    uint8 CreatureImpactType;
    uint32 NPCSoundID;
    uint32 SoundFidget[5];
    uint32 CustomAttack[4];
};

struct CreatureSpellDataEntry
{
    uint32 ID;
    int32 Spells[4];
    int32 Availability[4];
};

struct CreatureTypeEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint8 Flags;
};

struct CreatureXContributionEntry
{
    uint32 ID;
    int32 ContributionID;
    int32 CreatureID;
};

struct CreatureXDisplayInfoEntry
{
    uint32 ID;
    int32 CreatureDisplayInfoID;
    float Probability;
    float Scale;
    uint8 OrderIndex;
    int32 CreatureID;
};

struct CriteriaEntry
{
    uint32 ID;
    int16 Type;
    union AssetNameAlias
    {
        int32 ID;
        // CRITERIA_TYPE_KILL_CREATURE          = 0
        // CRITERIA_TYPE_KILLED_BY_CREATURE     = 20
        int32 CreatureID;

        // CRITERIA_TYPE_WIN_BG                 = 1
        // CRITERIA_TYPE_COMPLETE_BATTLEGROUND  = 15
        // CRITERIA_TYPE_DEATH_AT_MAP           = 16
        // CRITERIA_TYPE_WIN_ARENA              = 32
        // CRITERIA_TYPE_PLAY_ARENA             = 33
        int32 MapID;

        // CRITERIA_TYPE_REACH_SKILL_LEVEL      = 7
        // CRITERIA_TYPE_LEARN_SKILL_LEVEL      = 40
        // CRITERIA_TYPE_LEARN_SKILLLINE_SPELLS = 75
        // CRITERIA_TYPE_LEARN_SKILL_LINE       = 112
        int32 SkillID;

        // CRITERIA_TYPE_COMPLETE_ACHIEVEMENT   = 8
        int32 AchievementID;

        // CRITERIA_TYPE_COMPLETE_QUESTS_IN_ZONE = 11
        int32 ZoneID;

        // CRITERIA_TYPE_CURRENCY = 12
        int32 CurrencyID;

        // CRITERIA_TYPE_DEATH_IN_DUNGEON       = 18
        // CRITERIA_TYPE_COMPLETE_RAID          = 19
        int32 GroupSize;

        // CRITERIA_TYPE_DEATHS_FROM            = 26
        int32 DamageType;

        // CRITERIA_TYPE_COMPLETE_QUEST         = 27
        int32 QuestID;

        // CRITERIA_TYPE_BE_SPELL_TARGET        = 28
        // CRITERIA_TYPE_BE_SPELL_TARGET2       = 69
        // CRITERIA_TYPE_CAST_SPELL             = 29
        // CRITERIA_TYPE_CAST_SPELL2            = 110
        // CRITERIA_TYPE_LEARN_SPELL            = 34
        int32 SpellID;

        // CRITERIA_TYPE_BG_OBJECTIVE_CAPTURE
        int32 ObjectiveId;

        // CRITERIA_TYPE_HONORABLE_KILL_AT_AREA = 31
        // CRITERIA_TYPE_ENTER_AREA             = 163
        // CRITERIA_TYPE_LEAVE_AREA             = 164
        int32 AreaID;

        // CRITERIA_TYPE_OWN_ITEM               = 36
        // CRITERIA_TYPE_USE_ITEM               = 41
        // CRITERIA_TYPE_LOOT_ITEM              = 42
        // CRITERIA_TYPE_EQUIP_ITEM             = 57
        // CRITERIA_TYPE_OWN_TOY                = 185
        int32 ItemID;

        // CRITERIA_TYPE_HIGHEST_TEAM_RATING    = 38
        // CRITERIA_TYPE_REACH_TEAM_RATING      = 39
        // CRITERIA_TYPE_HIGHEST_PERSONAL_RATING = 39
        int32 TeamType;

        // CRITERIA_TYPE_EXPLORE_AREA           = 43
        int32 WorldMapOverlayID;

        // CRITERIA_TYPE_GAIN_REPUTATION        = 46
        // CRITERIA_TYPE_GAIN_PARAGON_REPUTATION = 206
        int32 FactionID;

        // CRITERIA_TYPE_EQUIP_EPIC_ITEM        = 49
        int32 ItemSlot;

        // CRITERIA_TYPE_ROLL_NEED_ON_LOOT      = 50
        // CRITERIA_TYPE_ROLL_GREED_ON_LOOT      = 51
        int32 RollValue;

        // CRITERIA_TYPE_HK_CLASS               = 52
        int32 ClassID;

        // CRITERIA_TYPE_HK_RACE                = 53
        int32 RaceID;

        // CRITERIA_TYPE_DO_EMOTE               = 54
        int32 EmoteID;

        // CRITERIA_TYPE_USE_GAMEOBJECT         = 68
        // CRITERIA_TYPE_FISH_IN_GAMEOBJECT     = 72
        int32 GameObjectID;

        // CRITERIA_TYPE_HIGHEST_POWER          = 96
        int32 PowerType;

        // CRITERIA_TYPE_HIGHEST_STAT           = 97
        int32 StatType;

        // CRITERIA_TYPE_HIGHEST_SPELLPOWER     = 98
        int32 SpellSchool;

        // CRITERIA_TYPE_LOOT_TYPE              = 109
        int32 LootType;

        // CRITERIA_TYPE_COMPLETE_DUNGEON_ENCOUNTER = 165
        int32 DungeonEncounterID;

        // CRITERIA_TYPE_CONSTRUCT_GARRISON_BUILDING = 169
        int32 GarrBuildingID;

        // CRITERIA_TYPE_UPGRADE_GARRISON       = 170
        int32 GarrisonLevel;

        // CRITERIA_TYPE_COMPLETE_GARRISON_MISSION = 174
        int32 GarrMissionID;

        // CRITERIA_TYPE_COMPLETE_GARRISON_SHIPMENT = 182
        int32 CharShipmentContainerID;

        // CRITERIA_TYPE_APPEARANCE_UNLOCKED_BY_SLOT
        int32 EquipmentSlot;

        // CRITERIA_TYPE_TRANSMOG_SET_UNLOCKED = 205
        int32 TransmogSetGroupID;

        // CRITERIA_TYPE_RELIC_TALENT_UNLOCKED = 211
        int32 ArtifactPowerID;

        // CRITERIA_TYPE_REACH_ACCOUNT_HONOR_LEVEL = 213
        int32 AccountHonorLevel;

        // CRITERIA_TREE_HEART_OF_AZEROTH_LEVEL_REACHED = 215
        int32 HeartOfAzerothLevel;
    } Asset;
    uint32 ModifierTreeID;
    uint8 StartEvent;
    int32 StartAsset;
    uint16 StartTimer;
    uint8 FailEvent;
    int32 FailAsset;
    uint8 Flags;
    int16 EligibilityWorldstateID;
    int8 EligibilityWorldstatevalue;
};

struct CriteriaTreeEntry
{
    uint32 ID;
    LocalizedString* Description;
    uint32 Parent;
    uint32 Amount;
    int8 Operator;
    uint32 CriteriaID;
    int32 OrderIndex;
    int16 Flags;
};

struct CriteriaTreeXEffectEntry
{
    uint32 ID;
    int16 WorldEffectID;
    int32 CriteriaTreeID;
};

struct CurrencyCategoryEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint8 Flags;
    uint8 ExpansionID;
};

struct CurrencyContainerEntry
{
    uint32 ID;
    LocalizedString* ContainerName;
    LocalizedString* ContainerDescription;
    int32 MinAmount;
    int32 MaxAmount;
    int32 ContainerIconID;
    int32 ContainerQuality;
    int32 OnLootSpellVisualKitID;
    int32 CurrencyTypeID;
};

struct CurrencyTypesEntry
{
    uint32 ID;
    LocalizedString* Name;
    LocalizedString* Description;
    uint8 CategoryID;
    int32 InventoryIconFileID;
    uint32 SpellWeight;
    uint8 SpellCategory;
    uint32 MaxQty;
    uint32 MaxEarnablePerWeek;
    uint32 Flags;
    int8 Quality;
    int32 FactionID;
};

struct CurveEntry
{
    uint32 ID;
    uint8 Type;
    uint8 Flags;
};

struct CurvePointEntry
{
    uint32 ID;
    DBCPosition2D Pos;
    uint16 CurveID;
    uint8 OrderIndex;
};

struct DeathThudLookupsEntry
{
    uint32 ID;
    uint8 SizeClass;
    uint8 TerrainTypeSoundID;
    uint32 SoundEntryID;
    uint32 SoundEntryIDWater;
};

struct DecalPropertiesEntry
{
    uint32 ID;
    int32 FileDataID;
    int32 TopTextureBlendSetID;
    int32 BotTextureBlendSetID;
    float ModX;
    float InnerRadius;
    float OuterRadius;
    float Rim;
    float Gain;
    int32 Flags;
    float Scale;
    float FadeIn;
    float FadeOut;
    uint8 Priority;
    uint8 BlendMode;
    int32 GameFlags;
    int32 CasterDecalPropertiesID;
    float ArbitraryBoxHeight;
};

struct DeclinedWordEntry
{
    char const* Word;
    uint32 ID;
};

struct DeclinedWordCasesEntry
{
    uint32 ID;
    char const* DeclinedWord;
    int8 CaseIndex;
    int32 DeclinedWordID;
};

struct DestructibleModelDataEntry
{
    uint32 ID;
    int8 State0ImpactEffectDoodadSet;
    uint8 State0AmbientDoodadSet;
    uint16 State1WMO;
    int8 State1DestructionDoodadSet;
    int8 State1ImpactEffectDoodadSet;
    uint8 State1AmbientDoodadSet;
    uint16 State2WMO;
    int8 State2DestructionDoodadSet;
    int8 State2ImpactEffectDoodadSet;
    uint8 State2AmbientDoodadSet;
    uint16 State3WMO;
    uint8 State3InitDoodadSet;
    uint8 State3AmbientDoodadSet;
    uint8 EjectDirection;
    uint8 DoNotHighlight;
    uint16 State0WMO;
    uint8 HealEffect;
    uint16 HealEffectSpeed;
    int8 State0NameSet;
    int8 State1NameSet;
    int8 State2NameSet;
    int8 State3NameSet;
};

struct DeviceBlacklistEntry
{
    uint32 ID;
    uint16 VendorID;
    uint16 DeviceID;
};

struct DeviceDefaultSettingsEntry
{
    uint32 ID;
    uint16 VendorID;
    uint16 DeviceID;
    int8 DefaultSetting;
};

struct DifficultyEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint8 InstanceType;
    uint8 OrderIndex;
    int8 OldEnumValue;
    uint8 FallbackDifficultyID;
    uint8 MinPlayers;
    uint8 MaxPlayers;
    uint8 Flags;
    uint8 ItemContext;
    uint8 ToggleDifficultyID;
    uint16 GroupSizeHealthCurveID;
    uint16 GroupSizeDmgCurveID;
    uint16 GroupSizeSpellPointsCurveID;
};

struct DissolveEffectEntry
{
    uint32 ID;
    float Ramp;
    float StartValue;
    float EndValue;
    float FadeInTime;
    float FadeOutTime;
    float Duration;
    int8 AttachID;
    int8 ProjectionType;
    int32 TextureBlendSetID;
    float Scale;
    int32 Flags;
    int32 CurveID;
    uint32 Priority;
    float FresnelIntensity;
};

struct DriverBlacklistEntry
{
    uint32 ID;
    uint16 VendorID;
    uint8 DeviceID;
    uint32 DriverVersionHi;
    uint32 DriverVersionLow;
    uint8 OsVersion;
    uint8 OsBits;
    uint8 Flags;
};

struct DungeonEncounterEntry
{
    LocalizedString* Name;
    uint32 ID;
    int16 MapID;
    int8 DifficultyID;
    int32 OrderIndex;
    int8 Bit;
    int32 CreatureDisplayID;
    uint8 Flags;
    int32 SpellIconFileID;
};

struct DurabilityCostsEntry
{
    uint32 ID;
    uint16 WeaponSubClassCost[21];
    uint16 ArmorSubClassCost[8];
};

struct DurabilityQualityEntry
{
    uint32 ID;
    float Data;
};

struct EdgeGlowEffectEntry
{
    uint32 ID;
    float Duration;
    float FadeIn;
    float FadeOut;
    float FresnelCoefficient;
    float GlowRed;
    float GlowGreen;
    float GlowBlue;
    float GlowAlpha;
    float GlowMultiplier;
    int8 Flags;
    float InitialDelay;
    int32 CurveID;
    uint32 Priority;
};

struct EmotesEntry
{
    uint32 ID;
    int64 RaceMask;
    char const* EmoteSlashCommand;
    int32 AnimID;
    uint32 EmoteFlags;
    uint8 EmoteSpecProc;
    uint32 EmoteSpecProcParam;
    uint32 EventSoundID;
    uint32 SpellVisualKitID;
    int32 ClassMask;
};

struct EmotesTextEntry
{
    uint32 ID;
    char const* Name;
    uint16 EmoteID;
};

struct EmotesTextDataEntry
{
    uint32 ID;
    LocalizedString* Text;
    uint8 RelationshipFlags;
    uint16 EmotesTextID;
};

struct EmotesTextSoundEntry
{
    uint32 ID;
    uint8 RaceID;
    uint8 ClassID;
    uint8 SexID;
    uint32 SoundID;
    uint16 EmotesTextID;
};

struct EnvironmentalDamageEntry
{
    uint32 ID;
    uint8 EnumID;
    uint16 VisualkitID;
};

struct ExhaustionEntry
{
    LocalizedString* Name;
    char const* CombatLogText;
    uint32 ID;
    int32 Xp;
    float Factor;
    float OutdoorHours;
    float InnHours;
    float Threshold;
};

struct ExpectedStatEntry
{
    uint32 ID;
    int32 ExpansionID;
    float CreatureHealth;
    float PlayerHealth;
    float CreatureAutoAttackDps;
    float CreatureArmor;
    float PlayerMana;
    float PlayerPrimaryStat;
    float PlayerSecondaryStat;
    float ArmorConstant;
    float CreatureSpellDamage;
    int32 Lvl;
};

struct ExpectedStatModEntry
{
    uint32 ID;
    float CreatureHealthMod;
    float PlayerHealthMod;
    float CreatureAutoAttackDPSMod;
    float CreatureArmorMod;
    float PlayerManaMod;
    float PlayerPrimaryStatMod;
    float PlayerSecondaryStatMod;
    float ArmorConstantMod;
    float CreatureSpellDamageMod;
};

struct FactionEntry
{
    int64 ReputationRaceMask[4];
    LocalizedString* Name;
    LocalizedString* Description;
    uint32 ID;
    int16 ReputationIndex;
    uint16 ParentFactionID;
    uint8 Expansion;
    uint8 FriendshipRepID;
    uint8 Flags;
    uint16 ParagonFactionID;
    int16 ReputationClassMask[4];
    uint16 ReputationFlags[4];
    int32 ReputationBase[4];
    int32 ReputationMax[4];
    float ParentFactionMod[2];
    uint8 ParentFactionCap[2];

    // helpers
    bool CanHaveReputation() const
    {
        return ReputationIndex >= 0;
    }
};

struct FactionGroupEntry
{
    char const* InternalName;
    LocalizedString* Name;
    uint32 ID;
    uint8 MaskID;
    int32 HonorCurrencyTextureFileID;
    int32 ConquestCurrencyTextureFileID;
};

struct FactionTemplateEntry
{
    uint32 ID;
    uint16 Faction;
    uint16 Flags;
    uint8 FactionGroup;
    uint8 FriendGroup;
    uint8 EnemyGroup;
    uint16 Enemies[MAX_FACTION_RELATIONS];
    uint16 Friend[MAX_FACTION_RELATIONS];

    //-------------------------------------------------------  end structure

    // helpers
    bool IsFriendlyTo(FactionTemplateEntry const* entry) const
    {
        if (this == entry)
            return true;
        if (entry->Faction)
        {
            for (int32 i = 0; i < MAX_FACTION_RELATIONS; ++i)
                if (Enemies[i] == entry->Faction)
                    return false;
            for (int32 i = 0; i < MAX_FACTION_RELATIONS; ++i)
                if (Friend[i] == entry->Faction)
                    return true;
        }
        return (FriendGroup & entry->FactionGroup) || (FactionGroup & entry->FriendGroup);
    }
    bool IsHostileTo(FactionTemplateEntry const* entry) const
    {
        if (this == entry)
            return false;
        if (entry->Faction)
        {
            for (int32 i = 0; i < MAX_FACTION_RELATIONS; ++i)
                if (Enemies[i] == entry->Faction)
                    return true;
            for (int32 i = 0; i < MAX_FACTION_RELATIONS; ++i)
                if (Friend[i] == entry->Faction)
                    return false;
        }
        return (EnemyGroup & entry->FactionGroup) != 0;
    }
    bool IsHostileToPlayers() const { return (EnemyGroup & FACTION_MASK_PLAYER) != 0; }
    bool IsNeutralToAll() const
    {
        for (int i = 0; i < MAX_FACTION_RELATIONS; ++i)
            if (Enemies[i] != 0)
                return false;
        return EnemyGroup == 0 && FriendGroup == 0;
    }
    bool IsContestedGuardFaction() const { return (Flags & FACTION_TEMPLATE_FLAG_CONTESTED_GUARD) != 0; }
    bool ShouldSparAttack() const { return (Flags & FACTION_TEMPLATE_ENEMY_SPAR) != 0; }
};

struct FootprintTexturesEntry
{
    uint32 ID;
    int32 FileDataID;
    int32 TextureBlendsetID;
    int32 Flags;
};

struct FootstepTerrainLookupEntry
{
    uint32 ID;
    uint16 CreatureFootstepID;
    int8 TerrainSoundID;
    uint32 SoundID;
    uint32 SoundIDSplash;
};

struct FriendshipRepReactionEntry
{
    uint32 ID;
    LocalizedString* Reaction;
    uint8 FriendshipRepID;
    uint16 ReactionThreshold;
};

struct FriendshipReputationEntry
{
    LocalizedString* Description;
    uint32 ID;
    uint16 FactionID;
    int32 TextureFileID;
};

struct FullScreenEffectEntry
{
    uint32 ID;
    uint32 Flags;
    float Saturation;
    float GammaRed;
    float GammaGreen;
    float GammaBlue;
    float MaskOffsetY;
    float MaskSizeMultiplier;
    float MaskPower;
    float ColorMultiplyRed;
    float ColorMultiplyGreen;
    float ColorMultiplyBlue;
    float ColorMultiplyOffsetY;
    float ColorMultiplyMultiplier;
    float ColorMultiplyPower;
    float ColorAdditionRed;
    float ColorAdditionGreen;
    float ColorAdditionBlue;
    float ColorAdditionOffsetY;
    float ColorAdditionMultiplier;
    float ColorAdditionPower;
    int32 OverlayTextureFileDataID;
    float BlurIntensity;
    float BlurOffsetY;
    float BlurMultiplier;
    float BlurPower;
    uint32 EffectFadeInMs;
    uint32 EffectFadeOutMs;
    uint32 TextureBlendSetID;
};

struct GameObjectArtKitEntry
{
    uint32 ID;
    int32 AttachModelFileID;
    int32 TextureVariationFileID[3];
};

struct GameObjectDiffAnimMapEntry
{
    uint32 ID;
    uint8 DifficultyID;
    uint8 Animation;
    uint16 AttachmentDisplayID;
    uint8 GameObjectDiffAnimID;
};

struct GameObjectDisplayInfoEntry
{
    uint32 ID;
    char const* ModelName;
    DBCPosition3D GeoBoxMin;
    DBCPosition3D GeoBoxMax;
    int32 FileDataID;
    int16 ObjectEffectPackageID;
    float OverrideLootEffectScale;
    float OverrideNameScale;
};

struct GameObjectDisplayInfoXSoundKitEntry
{
    uint32 ID;
    uint32 SoundKitID;
    int8 EventIndex;
    int32 GameObjectDisplayInfoID;
};

struct GameObjectsEntry
{
    LocalizedString* Name;
    DBCPosition3D Pos;
    float Rot[4];
    uint32 ID;
    uint16 OwnerID;
    uint16 DisplayID;
    float Scale;
    uint8 TypeID;
    uint8 PhaseUseFlags;
    uint16 PhaseID;
    uint16 PhaseGroupID;
    int32 PropValue[8];
};

struct GameTipsEntry
{
    uint32 ID;
    LocalizedString* Text;
    uint8 SortIndex;
    uint16 MinLevel;
    uint16 MaxLevel;
};

struct GemPropertiesEntry
{
    uint32 ID;
    uint16 EnchantID;
    int32 Type;
    uint16 MinItemlevel;
};

struct GlobalStringsEntry
{
    uint32 ID;
    char const* BaseTag;
    LocalizedString* TagText;
    uint8 Flags;
};

struct GlyphBindableSpellEntry
{
    uint32 ID;
    int32 SpellID;
    int16 GlyphPropertiesID;
};

struct GlyphExclusiveCategoryEntry
{
    uint32 ID;
    LocalizedString* Name;
};

struct GlyphPropertiesEntry
{
    uint32 ID;
    uint32 SpellID;
    uint16 SpellIconID;
    uint8 GlyphType;
    uint8 GlyphExclusiveCategoryID;
};

struct GlyphRequiredSpecEntry
{
    uint32 ID;
    uint16 ChrSpecializationID;
    uint16 GlyphPropertiesID;
};

struct GMSurveyAnswersEntry
{
    uint32 ID;
    LocalizedString* Answer;
    uint8 SortIndex;
    uint32 GMSurveyQuestionID;
};

struct GMSurveyCurrentSurveyEntry
{
    uint32 ID;
    uint8 GMSURVEYID;
};

struct GMSurveyQuestionsEntry
{
    uint32 ID;
    LocalizedString* Question;
};

struct GMSurveySurveysEntry
{
    uint32 ID;
    uint8 Q[15];
};

struct GroundEffectDoodadEntry
{
    uint32 ID;
    int32 ModelFileID;
    uint8 Flags;
    float Animscale;
    float Pushscale;
};

struct GroundEffectTextureEntry
{
    uint32 ID;
    uint32 Density;
    uint8 Sound;
    uint16 DoodadID[4];
    int8 DoodadWeight[4];
};

struct GroupFinderActivityEntry
{
    uint32 ID;
    LocalizedString* FullName;
    LocalizedString* ShortName;
    uint8 GroupFinderCategoryID;
    int8 OrderIndex;
    uint8 GroupFinderActivityGrpID;
    uint8 MinLevel;
    uint8 MaxLevelSuggestion;
    uint32 Flags;
    uint16 MinGearLevelSuggestion;
    uint16 MapID;
    uint8 DifficultyID;
    uint16 AreaID;
    uint8 MaxPlayers;
    uint8 DisplayType;
};

struct GroupFinderActivityGrpEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint8 OrderIndex;
};

struct GroupFinderCategoryEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint8 OrderIndex;
    uint8 Flags;
};

struct GuildColorBackgroundEntry
{
    uint32 ID;
    uint8 Red;
    uint8 Blue;
    uint8 Green;
};

struct GuildColorBorderEntry
{
    uint32 ID;
    uint8 Red;
    uint8 Blue;
    uint8 Green;
};

struct GuildColorEmblemEntry
{
    uint32 ID;
    uint8 Red;
    uint8 Blue;
    uint8 Green;
};

struct GuildPerkSpellsEntry
{
    uint32 ID;
    int32 SpellID;
};

struct HeirloomEntry
{
    LocalizedString* SourceText;
    uint32 ID;
    int32 ItemID;
    int32 LegacyUpgradedItemID;
    int32 StaticUpgradedItemID;
    int8 SourceTypeEnum;
    uint8 Flags;
    int32 LegacyItemID;
    int32 UpgradeItemID[3];
    uint16 UpgradeItemBonusListID[3];
};

struct HelmetAnimScalingEntry
{
    uint32 ID;
    int32 RaceID;
    float Amount;
    int32 HelmetGeosetVisDataID;
};

struct HelmetGeosetVisDataEntry
{
    uint32 ID;
    int32 HideGeoset[9];
};

struct HighlightColorEntry
{
    uint32 ID;
    int8 Type;
    int32 StartColor;
    int32 MidColor;
    int32 EndColor;
    uint8 Flags;
};

struct HolidayDescriptionsEntry
{
    uint32 ID;
    LocalizedString* Description;
};

struct HolidayNamesEntry
{
    uint32 ID;
    LocalizedString* Name;
};

struct HolidaysEntry
{
    uint32 ID;
    uint16 Region;
    uint8 Looping;
    uint32 HolidayNameID;
    uint32 HolidayDescriptionID;
    uint8 Priority;
    int8 CalendarFilterType;
    uint8 Flags;
    uint32 Field_1_13_2_30073_008;
    uint16 Duration[MAX_HOLIDAY_DURATIONS];
    uint32 Date[MAX_HOLIDAY_DATES];
    uint8 CalendarFlags[MAX_HOLIDAY_DURATIONS];
    int32 TextureFileDataID[3];
};

struct HotfixesEntry
{
    uint32 ID;
    char const* Tablename;
    int32 ObjectID;
    int32 Flags;
    int32 PushID;
};

struct ImportPriceArmorEntry
{
    uint32 ID;
    float ClothModifier;
    float LeatherModifier;
    float ChainModifier;
    float PlateModifier;
};

struct ImportPriceQualityEntry
{
    uint32 ID;
    float Data;
};

struct ImportPriceShieldEntry
{
    uint32 ID;
    float Data;
};

struct ImportPriceWeaponEntry
{
    uint32 ID;
    float Data;
};

struct InvasionClientDataEntry
{
    LocalizedString* Name;
    float IconLocation[2];
    uint32 ID;
    int32 WorldStateID;
    int32 UiTextureAtlasMemberID;
    int32 ScenarioID;
    uint32 WorldQuestID;
    int32 WorldStateValue;
    int32 InvasionEnabledWorldStateID;
    int32 AreaTableID;
};

struct ItemEntry
{
    uint32 ID;
    uint8 ClassID;
    uint8 SubclassID;
    uint8 Material;
    int8 InventoryType;
    uint32 MaxDurability;
    uint8 AmmoType;
    uint8 SheatheType;
    int8 SoundOverridesubclassID;
    int32 IconFileDataID;
    uint8 ItemGroupSoundsID;
    uint16 DisplayInfoID;
    uint16 DamageMin[5];
    uint16 DamageMax[5];
    uint8 DamageType[5];
    int16 DefensiveStats[7];
};

struct ItemAppearanceEntry
{
    uint32 ID;
    uint8 DisplayType;
    int32 ItemDisplayInfoID;
    int32 DefaultIconFileDataID;
    int32 UiOrder;
};

struct ItemAppearanceXUiCameraEntry
{
    uint32 ID;
    uint16 ItemAppearanceID;
    uint16 UiCameraID;
};

struct ItemArmorQualityEntry
{
    uint32 ID;
    float Qualitymod[7];
};

struct ItemArmorShieldEntry
{
    uint32 ID;
    float Quality[7];
    uint16 ItemLevel;
};

struct ItemArmorTotalEntry
{
    uint32 ID;
    int16 ItemLevel;
    float Cloth;
    float Leather;
    float Mail;
    float Plate;
};

struct ItemBagFamilyEntry
{
    uint32 ID;
    LocalizedString* Name;
};

struct ItemBonusEntry
{
    uint32 ID;
    int32 Value[3];
    uint16 ParentItemBonusListID;
    uint8 Type;
    uint8 OrderIndex;
};

struct ItemBonusListLevelDeltaEntry
{
    int16 ItemLevelDelta;
    uint32 ID;
};

struct ItemBonusTreeNodeEntry
{
    uint32 ID;
    uint8 ItemContext;
    uint16 ChildItemBonusTreeID;
    uint16 ChildItemBonusListID;
    uint16 ChildItemLevelSelectorID;
    uint16 ParentItemBonusTreeID;
};

struct ItemChildEquipmentEntry
{
    uint32 ID;
    int32 ChildItemID;
    uint8 ChildItemEquipSlot;
    int32 ParentItemID;
};

struct ItemClassEntry
{
    uint32 ID;
    LocalizedString* ClassName;
    int8 ClassID;
    float PriceModifier;
    uint8 Flags;
};

struct ItemContextPickerEntryEntry
{
    uint32 ID;
    uint8 ItemCreationContext;
    uint8 OrderIndex;
    int32 PVal;
    uint32 Flags;
    uint32 PlayerConditionID;
    uint32 ItemContextPickerID;
};

struct ItemCurrencyCostEntry
{
    uint32 ID;
    int32 ItemID;
};

struct ItemDamageAmmoEntry
{
    uint32 ID;
    uint16 ItemLevel;
    float Quality[7];
};

struct ItemDamageOneHandEntry
{
    uint32 ID;
    uint16 ItemLevel;
    float Quality[7];
};

struct ItemDamageOneHandCasterEntry
{
    uint32 ID;
    uint16 ItemLevel;
    float Quality[7];
};

struct ItemDamageTwoHandEntry
{
    uint32 ID;
    uint16 ItemLevel;
    float Quality[7];
};

struct ItemDamageTwoHandCasterEntry
{
    uint32 ID;
    uint16 ItemLevel;
    float Quality[7];
};

struct ItemDisenchantLootEntry
{
    uint32 ID;
    int8 Subclass;
    uint8 Quality;
    uint16 MinLevel;
    uint16 MaxLevel;
    uint16 SkillRequired;
    int8 ExpansionID;
    uint8 Class;
};

struct ItemDisplayInfoEntry
{
    uint32 ID;
    int32 ModelType1;
    int32 ItemVisual;
    int32 ParticleColorID;
    uint32 ItemRangedDisplayInfoID;
    uint32 OverrideSwooshSoundKitID;
    int32 SheatheTransformMatrixID;
    int32 StateSpellVisualKitID;
    int32 SheathedSpellVisualKitID;
    uint32 UnsheathedSpellVisualKitID;
    int32 Flags;
    uint32 ModelResourcesID[2];
    int32 ModelMaterialResourcesID[2];
    int32 GeosetGroup[4];
    int32 AttachmentGeosetGroup[4];
    int32 HelmetGeosetVis[2];
};

struct ItemDisplayInfoMaterialResEntry
{
    uint32 ID;
    int8 ComponentSection;
    int32 MaterialResourcesID;
    int32 ItemDisplayInfoID;
};

struct ItemDisplayXUiCameraEntry
{
    uint32 ID;
    int32 ItemDisplayInfoID;
    uint16 UiCameraID;
};

struct ItemEffectEntry
{
    uint32 ID;
    uint8 LegacySlotIndex;
    int8 TriggerType;
    int16 Charges;
    int32 CoolDownMSec;
    int32 CategoryCoolDownMSec;
    uint16 SpellCategoryID;
    int32 SpellID;
    uint16 ChrSpecializationID;
    int32 ParentItemID;
};

struct ItemExtendedCostEntry
{
    uint32 ID;
    uint16 RequiredArenaRating;
    int8 ArenaBracket;
    uint8 Flags;
    uint8 MinFactionID;
    uint8 MinReputation;
    uint8 RequiredAchievement;
    int32 ItemID[MAX_ITEM_EXT_COST_ITEMS];
    uint16 ItemCount[MAX_ITEM_EXT_COST_ITEMS];
    uint16 CurrencyID[MAX_ITEM_EXT_COST_CURRENCIES];
    uint32 CurrencyCount[MAX_ITEM_EXT_COST_CURRENCIES];
};

struct ItemGroupSoundsEntry
{
    uint32 ID;
    uint32 Sound[4];
};

struct ItemLevelSelectorEntry
{
    uint32 ID;
    uint16 MinItemLevel;
    uint16 ItemLevelSelectorQualitySetID;
};

struct ItemLevelSelectorQualityEntry
{
    uint32 ID;
    int32 QualityItemBonusListID;
    int8 Quality;
    int16 ParentILSQualitySetID;
};

struct ItemLevelSelectorQualitySetEntry
{
    uint32 ID;
    int16 IlvlRare;
    int16 IlvlEpic;
};

struct ItemLimitCategoryEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint8 Quantity;
    uint8 Flags;
};

struct ItemLimitCategoryConditionEntry
{
    uint32 ID;
    int8 AddQuantity;
    uint32 PlayerConditionID;
    int32 ParentItemLimitCategoryID;
};

struct ItemModifiedAppearanceEntry
{
    uint32 ID;
    int32 ItemID;
    uint8 ItemAppearanceModifierID;
    uint16 ItemAppearanceID;
    uint8 OrderIndex;
    int8 TransmogSourceTypeEnum;
};

struct ItemModifiedAppearanceExtraEntry
{
    uint32 ID;
    int32 IconFileDataID;
    int32 UnequippedIconFileDataID;
    uint8 SheatheType;
    int8 DisplayWeaponSubclassID;
    int8 DisplayInventoryType;
};

struct ItemNameDescriptionEntry
{
    uint32 ID;
    LocalizedString* Description;
    int32 Color;
};

struct ItemPetFoodEntry
{
    uint32 ID;
    LocalizedString* Name;
};

struct ItemPriceBaseEntry
{
    uint32 ID;
    uint16 ItemLevel;
    float Armor;
    float Weapon;
};

struct ItemRandomPropertiesEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint16 Enchantment[MAX_ITEM_RANDOM_PROPERTIES];
};

struct ItemRandomSuffixEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint16 Enchantment[MAX_ITEM_RANDOM_PROPERTIES];
    uint16 AllocationPct[MAX_ITEM_RANDOM_PROPERTIES];
};

struct ItemRangedDisplayInfoEntry
{
    uint32 ID;
    uint32 CastSpellVisualID;
    uint32 AutoAttackSpellVisualID;
    uint32 QuiverFileDataID;
    uint32 MissileSpellVisualEffectNameID;
};

struct ItemSearchNameEntry
{
    int64 AllowableRace;
    LocalizedString* Display;
    uint32 ID;
    uint8 OverallQualityID;
    uint8 ExpansionID;
    uint16 MinFactionID;
    uint8 MinReputation;
    int32 AllowableClass;
    int8 RequiredLevel;
    uint16 RequiredSkill;
    uint16 RequiredSkillRank;
    uint32 RequiredAbility;
    uint16 ItemLevel;
    int32 Flags[3];
};

struct ItemSetEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint32 SetFlags;
    uint32 RequiredSkill;
    uint16 RequiredSkillRank;
    uint32 ItemID[MAX_ITEM_SET_ITEMS];
};

struct ItemSetSpellEntry
{
    uint32 ID;
    uint16 ChrSpecID;
    uint32 SpellID;
    uint8 Threshold;
    uint16 ItemSetID;
};

struct ItemSparseEntry
{
    uint32 ID;
    int64 AllowableRace;
    LocalizedString* Description;
    LocalizedString* Display3;
    LocalizedString* Display2;
    LocalizedString* Display1;
    LocalizedString* Display;
    float DmgVariance;
    uint32 DurationInInventory;
    float QualityModifier;
    uint32 BagFamily;
    float ItemRange;
    float StatPercentageOfSocket[MAX_ITEM_PROTO_STATS];
    int32 StatPercentEditor[MAX_ITEM_PROTO_STATS];
    int32 Stackable;
    int32 MaxCount;
    uint32 RequiredAbility;
    uint32 SellPrice;
    uint32 BuyPrice;
    uint32 VendorStackCount;
    float PriceVariance;
    float PriceRandomValue;
    int32 Flags[MAX_ITEM_PROTO_FLAGS];
    int32 OppositeFactionItemID;
    uint32 MaxDurability;
    uint16 ItemNameDescriptionID;
    uint16 RequiredTransmogHoliday;
    uint16 RequiredHoliday;
    uint16 LimitCategory;
    uint16 GemProperties;
    uint16 SocketMatchEnchantmentID;
    uint16 TotemCategoryID;
    uint16 InstanceBound;
    uint16 ZoneBound;
    uint16 ItemSet;
    uint16 ItemRandomSuffixGroupID;
    uint16 RandomSelect;
    uint16 LockID;
    uint16 StartQuestID;
    uint16 PageID;
    uint16 ItemDelay;
    uint16 DamageMin[5];
    uint16 DamageMax[5];
    int16 DefensiveStats[7];
    uint16 ScalingStatDistributionID;
    uint16 MinFactionID;
    uint16 RequiredSkillRank;
    uint16 RequiredSkill;
    uint16 ItemLevel;
    int16 AllowableClass;
    uint8 ExpansionID;
    uint8 ArtifactID;
    uint8 SpellWeight;
    uint8 SpellWeightCategory;
    uint8 SocketType[MAX_ITEM_PROTO_SOCKETS];
    uint8 SheatheType;
    uint8 Material;
    uint8 PageMaterialID;
    uint8 LanguageID;
    uint8 Bonding;
    uint8 AmmoType;
    uint8 DamageType[5];
    int8 StatModifierBonusStat[MAX_ITEM_PROTO_STATS];
    int8 StatValue[MAX_ITEM_PROTO_STATS];
    uint8 ContainerSlots;
    uint8 MinReputation;
    uint8 RequiredPVPMedal;
    uint8 RequiredPVPRank;
    int8 RequiredLevel;
    uint8 InventoryType;
    uint8 OverallQualityID;
};

struct ItemSpecEntry
{
    uint32 ID;
    uint8 MinLevel;
    uint8 MaxLevel;
    uint8 ItemType;
    uint8 PrimaryStat;
    uint8 SecondaryStat;
    uint16 SpecializationID;
};

struct ItemSpecOverrideEntry
{
    uint32 ID;
    uint16 SpecID;
    int32 ItemID;
};

struct ItemSubClassEntry
{
    uint32 ID;
    LocalizedString* DisplayName;
    LocalizedString* VerboseName;
    int8 ClassID;
    int8 SubClassID;
    uint8 AuctionHouseSortOrder;
    int8 PrerequisiteProficiency;
    int16 Flags;
    int8 DisplayFlags;
    int8 WeaponSwingSize;
    int8 PostrequisiteProficiency;
};

struct ItemSubClassMaskEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint8 ClassID;
    uint32 Mask;
};

struct ItemUpgradeEntry
{
    uint32 ID;
    uint8 ItemUpgradePathID;
    uint8 ItemLevelIncrement;
    uint16 PrerequisiteID;
    uint16 CurrencyType;
    uint32 CurrencyAmount;
};

struct ItemVisualsEntry
{
    uint32 ID;
    int32 ModelFileID[5];
};

struct ItemXBonusTreeEntry
{
    uint32 ID;
    uint16 ItemBonusTreeID;
    int32 ItemID;
};

struct JournalEncounterEntry
{
    uint32 ID;
    LocalizedString* Name;
    LocalizedString* Description;
    float Map[2];
    uint16 JournalInstanceID;
    uint32 OrderIndex;
    uint16 FirstSectionID;
    uint16 UiMapID;
    uint32 MapDisplayConditionID;
    uint8 Flags;
    int8 DifficultyMask;
};

struct JournalEncounterCreatureEntry
{
    LocalizedString* Name;
    LocalizedString* Description;
    uint32 ID;
    uint16 JournalEncounterID;
    uint32 CreatureDisplayInfoID;
    uint32 FileDataID;
    uint8 OrderIndex;
    uint32 UiModelSceneID;
};

struct JournalEncounterItemEntry
{
    uint32 ID;
    uint16 JournalEncounterID;
    uint32 ItemID;
    int8 FactionMask;
    uint8 Flags;
    int8 DifficultyMask;
};

struct JournalEncounterSectionEntry
{
    uint32 ID;
    LocalizedString* Title;
    LocalizedString* BodyText;
    uint16 JournalEncounterID;
    uint8 OrderIndex;
    uint16 ParentSectionID;
    uint16 FirstChildSectionID;
    uint16 NextSiblingSectionID;
    uint8 Type;
    uint32 IconCreatureDisplayInfoID;
    int32 UiModelSceneID;
    int32 SpellID;
    int32 IconFileDataID;
    uint16 Flags;
    uint16 IconFlags;
    int8 DifficultyMask;
};

struct JournalEncounterXDifficultyEntry
{
    uint32 ID;
    uint8 DifficultyID;
    uint16 JournalEncounterID;
};

struct JournalEncounterXMapLocEntry
{
    uint32 ID;
    float Map[2];
    int32 JournalEncounterID;
    int32 MapDisplayConditionID;
    uint8 Flags;
    int32 UiMapID;
};

struct JournalInstanceEntry
{
    LocalizedString* Name;
    LocalizedString* Description;
    uint32 ID;
    uint16 MapID;
    int32 BackgroundFileDataID;
    int32 ButtonFileDataID;
    int32 ButtonSmallFileDataID;
    int32 LoreFileDataID;
    uint8 OrderIndex;
    uint8 Flags;
    uint16 AreaID;
};

struct JournalItemXDifficultyEntry
{
    uint32 ID;
    uint8 DifficultyID;
    uint16 JournalEncounterItemID;
};

struct JournalSectionXDifficultyEntry
{
    uint32 ID;
    uint8 DifficultyID;
    uint16 JournalEncounterSectionID;
};

struct JournalTierEntry
{
    uint32 ID;
    LocalizedString* Name;
};

struct JournalTierXInstanceEntry
{
    uint32 ID;
    uint16 JournalTierID;
    uint16 JournalInstanceID;
};

struct KeychainEntry
{
    uint32 ID;
    uint8 Key[KEYCHAIN_SIZE];
};

struct KeystoneAffixEntry
{
    LocalizedString* Name;
    LocalizedString* Description;
    uint32 ID;
    int32 FiledataID;
};

struct LanguagesEntry
{
    LocalizedString* Name;
    uint32 ID;
};

struct LanguageWordsEntry
{
    uint32 ID;
    char const* Word;
    uint8 LanguageID;
};

struct LFGDungeonExpansionEntry
{
    uint32 ID;
    uint8 ExpansionLevel;
    uint16 RandomID;
    uint8 HardLevelmin;
    uint8 HardLevelmax;
    int32 TargetLevelmin;
    int32 TargetLevelmax;
    uint16 LfgID;
};

struct LFGDungeonGroupEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint8 TypeID;
    uint8 ParentGroupID;
    uint16 OrderIndex;
};

struct LFGDungeonsEntry
{
    uint32 ID;
    LocalizedString* Name;
    LocalizedString* Description;
    uint8 MinLevel;
    uint16 MaxLevel;
    uint8 TypeID;
    uint8 Subtype;
    int8 Faction;
    int32 IconTextureFileID;
    int32 RewardsBgTextureFileID;
    int32 PopupBgTextureFileID;
    uint8 ExpansionLevel;
    int16 MapID;
    uint8 DifficultyID;
    float MinGear;
    uint8 GroupID;
    uint8 OrderIndex;
    uint32 RequiredPlayerconditionID;
    uint8 TargetLevel;
    uint8 TargetLevelmin;
    uint16 TargetLevelmax;
    uint16 RandomID;
    uint16 ScenarioID;
    uint16 FinalEncounterID;
    uint8 CountTank;
    uint8 CountHealer;
    uint8 CountDamage;
    uint8 MinCounttank;
    uint8 MinCounthealer;
    uint8 MinCountdamage;
    uint16 BonusReputationamount;
    uint16 MentorItemLevel;
    uint8 MentorCharLevel;
    int32 Flags[2];

    // helpers
    uint32 Entry() const { return ID + (TypeID << 24); }
};

struct LfgDungeonsGroupingMapEntry
{
    uint32 ID;
    uint16 RandomLfgDungeonsID;
    uint8 GroupID;
    uint16 LfgDungeonsID;
};

struct LFGRoleRequirementEntry
{
    uint32 ID;
    int8 RoleType;
    uint32 PlayerConditionID;
    uint16 LfgDungeonsID;
};

struct LightEntry
{
    uint32 ID;
    DBCPosition3D GameCoords;
    float GameFalloffStart;
    float GameFalloffEnd;
    int16 ContinentID;
    uint16 LightParamsID[8];
};

struct LightDataEntry
{
    uint32 ID;
    uint16 LightParamID;
    uint16 Time;
    int32 DirectColor;
    int32 AmbientColor;
    int32 SkyTopColor;
    int32 SkyMiddleColor;
    int32 SkyBand1Color;
    int32 SkyBand2Color;
    int32 SkySmogColor;
    int32 SkyFogColor;
    int32 SunColor;
    int32 CloudSunColor;
    int32 CloudEmissiveColor;
    int32 CloudLayer1AmbientColor;
    int32 CloudLayer2AmbientColor;
    int32 OceanCloseColor;
    int32 OceanFarColor;
    int32 RiverCloseColor;
    int32 RiverFarColor;
    int32 ShadowOpacity;
    float FogEnd;
    float FogScaler;
    float FogDensity;
    float FogHeight;
    float FogHeightScaler;
    float FogHeightDensity;
    float SunFogAngle;
    float CloudDensity;
    uint32 ColorGradingFileDataID;
    int32 HorizonAmbientColor;
    int32 GroundAmbientColor;
    uint32 EndFogColor;
    float EndFogColorDistance;
    uint32 SunFogColor;
    float SunFogStrength;
    uint32 FogHeightColor;
};

struct LightningEntry
{
    uint32 ID;
    float BoltDirection[2];
    int32 SoundKitID[3];
    float BoltDirectionVariance;
    float MinDivergence;
    float MaxDivergence;
    float MinConvergenceSpeed;
    float MaxConvergenceSpeed;
    float SegmentSize;
    float MinBoltWidth;
    float MaxBoltWidth;
    float MinBoltHeight;
    float MaxBoltHeight;
    int32 MaxSegmentCount;
    float MinStrikeTime;
    float MaxStrikeTime;
    float MinEndTime;
    float MaxEndTime;
    float MinFadeTime;
    float MaxFadeTime;
    float Field_1_13_2_30073_020Min;
    float Field_1_13_2_30073_021Max;
    int32 FlashColor;
    int32 BoltColor;
    float Brightness;
    float MinCloudDepth;
    float MaxCloudDepth;
    float MinFadeInStrength;
    float MaxFadeInStrength;
    float MinStrikeStrength;
    float MaxStrikeStrength;
    float GroundBrightnessScalar;
    float BoltBrightnessScalar;
    float CloudBrightnessScalar;
    float SoundEmitterDistance;
};

struct LightParamsEntry
{
    float OverrideCelestialSphere[3];
    uint32 ID;
    uint8 HighlightSky;
    uint16 LightSkyboxID;
    uint8 CloudTypeID;
    float Glow;
    float WaterShallowAlpha;
    float WaterDeepAlpha;
    float OceanShallowAlpha;
    float OceanDeepAlpha;
    int8 Flags;
    int32 SsaoSettingsID;
};

struct LightSkyboxEntry
{
    uint32 ID;
    char const* Name;
    uint8 Flags;
    int32 SkyboxFileDataID;
    int32 CelestialSkyboxFileDataID;
};

struct LiquidMaterialEntry
{
    uint32 ID;
    int8 Flags;
    int8 LVF;
};

struct LiquidObjectEntry
{
    uint32 ID;
    float FlowDirection;
    float FlowSpeed;
    int16 LiquidTypeID;
    uint8 Fishable;
    uint8 Reflection;
};

struct LiquidTypeEntry
{
    uint32 ID;
    char const* Name;
    char const* Texture[6];
    uint16 Flags;
    uint8 SoundBank;
    uint32 SoundID;
    uint32 SpellID;
    float MaxDarkenDepth;
    float FogDarkenIntensity;
    float AmbDarkenIntensity;
    float DirDarkenIntensity;
    uint16 LightID;
    float ParticleScale;
    uint8 ParticleMovement;
    uint8 ParticleTexSlots;
    uint8 MaterialID;
    int32 MinimapStaticCol;
    uint8 FrameCountTexture[6];
    int32 Color[2];
    float Float[18];
    uint32 Int[4];
    float Coefficient[4];
};

struct LoadingScreensEntry
{
    uint32 ID;
    int32 NarrowScreenFileDataID;
    int32 WideScreenFileDataID;
    int32 WideScreen169FileDataID;
};

struct LoadingScreenTaxiSplinesEntry
{
    uint32 ID;
    uint16 PathID;
    uint8 LegIndex;
    uint16 LoadingScreenID;
    float Locx[10];
    float Locy[10];
};

struct LocaleEntry
{
    uint32 ID;
    uint8 WowLocale;
    int32 FontFileDataID;
    uint8 Secondary;
};

struct LocationEntry
{
    uint32 ID;
    DBCPosition3D Pos;
    float Rot[3];
};

struct LockEntry
{
    uint32 ID;
    int32 Index[MAX_LOCK_CASE];
    uint16 Skill[MAX_LOCK_CASE];
    uint8 Type[MAX_LOCK_CASE];
    uint8 Action[MAX_LOCK_CASE];
};

struct LockTypeEntry
{
    LocalizedString* Name;
    LocalizedString* ResourceName;
    LocalizedString* Verb;
    char const* CursorName;
    uint32 ID;
};

struct LookAtControllerEntry
{
    uint32 ID;
    float ReactionEnableDistance;
    uint32 ReactionWarmUpTimeMSMin;
    uint32 ReactionWarmUpTimeMSMax;
    uint16 ReactionEnableFOVDeg;
    float ReactionGiveupDistance;
    uint32 ReactionGiveupFOVDeg;
    uint16 ReactionGiveupTimeMS;
    uint16 ReactionIgnoreTimeMinMS;
    uint16 ReactionIgnoreTimeMaxMS;
    uint8 MaxTorsoYaw;
    uint8 MaxTorsoYawWhileMoving;
    uint32 MaxTorsoPitchUp;
    uint32 MaxTorsoPitchDown;
    uint8 MaxHeadYaw;
    uint8 MaxHeadPitch;
    float TorsoSpeedFactor;
    float HeadSpeedFactor;
    uint8 Flags;
};

struct MailTemplateEntry
{
    uint32 ID;
    LocalizedString* Body;
};

struct ManagedWorldStateEntry
{
    uint32 ID;
    int32 CurrentStageWorldStateID;
    int32 ProgressWorldStateID;
    uint32 UpTimeSecs;
    uint32 DownTimeSecs;
    int32 AccumulationStateTargetValue;
    int32 DepletionStateTargetValue;
    int32 AccumulationAmountPerMinute;
    int32 DepletionAmountPerMinute;
    int32 OccurrencesWorldStateID[4];
};

struct ManagedWorldStateBuffEntry
{
    uint32 ID;
    int32 BuffSpellID;
    uint32 PlayerConditionID;
    uint32 OccurrenceValue;
    int32 ManagedWorldStateID;
};

struct ManagedWorldStateInputEntry
{
    uint32 ID;
    int32 ManagedWorldStateID;
    int32 QuestID;
    int32 ValidInputConditionID;
};

struct ManifestInterfaceActionIconEntry
{
    uint32 ID;
};

struct ManifestInterfaceDataEntry
{
    uint32 ID;
    char const* FilePath;
    char const* FileName;
};

struct ManifestInterfaceItemIconEntry
{
    uint32 ID;
};

struct ManifestInterfaceTOCDataEntry
{
    uint32 ID;
    char const* FilePath;
};

struct ManifestMP3Entry
{
    uint32 ID;
};

struct MapEntry
{
    uint32 ID;
    char const* Directory;
    LocalizedString* MapName;
    LocalizedString* MapDescription0;
    LocalizedString* MapDescription1;
    LocalizedString* PvpShortDescription;
    LocalizedString* PvpLongDescription;
    uint8 MapType;
    int8 InstanceType;
    uint8 ExpansionID;
    uint16 AreaTableID;
    int16 LoadingScreenID;
    int16 TimeOfDayOverride;
    int16 ParentMapID;
    int16 CosmeticParentMapID;
    uint8 TimeOffset;
    float MinimapIconScale;
    int16 CorpseMapID;
    uint8 MaxPlayers;
    int16 WindSettingsID;
    int32 ZmpFileDataID;
    int32 Flags[2];

    // Helpers
    uint8 Expansion() const { return ExpansionID; }

    bool IsDungeon() const { return (InstanceType == MAP_INSTANCE || InstanceType == MAP_RAID || InstanceType == MAP_SCENARIO) && !IsGarrison(); }
    bool IsNonRaidDungeon() const { return InstanceType == MAP_INSTANCE; }
    bool Instanceable() const { return InstanceType == MAP_INSTANCE || InstanceType == MAP_RAID || InstanceType == MAP_BATTLEGROUND || InstanceType == MAP_ARENA || InstanceType == MAP_SCENARIO; }
    bool IsRaid() const { return InstanceType == MAP_RAID; }
    bool IsBattleground() const { return InstanceType == MAP_BATTLEGROUND; }
    bool IsBattleArena() const { return InstanceType == MAP_ARENA; }
    bool IsBattlegroundOrArena() const { return InstanceType == MAP_BATTLEGROUND || InstanceType == MAP_ARENA; }
    bool IsWorldMap() const { return InstanceType == MAP_COMMON; }

    bool GetEntrancePos(int32& mapid, float& x, float& y) const
    {
        if (CorpseMapID < 0)
            return false;

        mapid = CorpseMapID;
        //x = Corpse.X;
        //y = Corpse.Y;
        return true;
    }

    bool IsContinent() const
    {
        return ID == 0 || ID == 1 || ID == 530 || ID == 571 || ID == 870 || ID == 1116 || ID == 1220;
    }

    bool IsDynamicDifficultyMap() const { return (Flags[0] & MAP_FLAG_CAN_TOGGLE_DIFFICULTY) != 0; }
    bool IsGarrison() const { return (Flags[0] & MAP_FLAG_GARRISON) != 0; }
};

struct MapCelestialBodyEntry
{
    uint32 ID;
    int16 CelestialBodyID;
    uint32 PlayerConditionID;
    int16 MapID;
};

struct MapChallengeModeEntry
{
    LocalizedString* Name;
    uint32 ID;
    uint16 MapID;
    uint8 Flags;
    int16 CriteriaCount[3];
};

struct MapDifficultyEntry
{
    uint32 ID;
    LocalizedString* Message;
    uint32 ItemContextPickerID;
    int32 ContentTuningID;
    uint8 DifficultyID;
    uint8 LockID;
    uint8 ResetInterval;
    uint8 MaxPlayers;
    uint8 ItemContext;
    uint8 Flags;
    uint16 MapID;

    uint32 GetRaidDuration() const
    {
        if (ResetInterval == 1)
            return 86400;
        if (ResetInterval == 2)
            return 604800;
        return 0;
    }
};

struct MapDifficultyXConditionEntry
{
    uint32 ID;
    LocalizedString* FailureDescription;
    uint32 PlayerConditionID;
    int32 OrderIndex;
    uint32 MapDifficultyID;
};

struct MapLoadingScreenEntry
{
    uint32 ID;
    float Min[2];
    float Max[2];
    int32 LoadingScreenID;
    int32 OrderIndex;
    int32 MapID;
};

struct MarketingPromotionsXLocaleEntry
{
    uint32 ID;
    char const* AcceptURL;
    uint8 PromotionID;
    int8 LocaleID;
    int32 AdTexture;
    int32 LogoTexture;
    int32 AcceptButtonTexture;
    int32 DeclineButtonTexture;
};

struct MaterialEntry
{
    uint32 ID;
    uint8 Flags;
    uint32 FoleySoundID;
    uint32 SheatheSoundID;
    uint32 UnsheatheSoundID;
};

struct MinorTalentEntry
{
    uint32 ID;
    int32 SpellID;
    int32 OrderIndex;
    int32 ChrSpecializationID;
};

struct MissileTargetingEntry
{
    uint32 ID;
    float TurnLingering;
    float PitchLingering;
    float MouseLingering;
    float EndOpacity;
    float ArcSpeed;
    float ArcRepeat;
    float ArcWidth;
    float ImpactTexRadius;
    int32 ArcTextureFileID;
    int32 ImpactTextureFileID;
    float ImpactRadius[2];
    int32 ImpactModelFileID[2];
};

struct ModelAnimCloakDampeningEntry
{
    uint32 ID;
    uint32 AnimationDataID;
    uint32 CloakDampeningID;
    uint32 FileDataID;
};

struct ModelFileDataEntry
{
    uint32 ID;
    uint8 Flags;
    uint8 LodCount;
    uint32 ModelResourcesID;
};

struct ModelRibbonQualityEntry
{
    uint32 ID;
    uint8 RibbonQualityID;
    int32 FileDataID;
};

struct ModifierTreeEntry
{
    uint32 ID;
    uint32 Parent;
    int8 Operator;
    int8 Amount;
    uint8 Type;
    int32 Asset;
    int32 SecondaryAsset;
    int8 TertiaryAsset;
};

struct MountEntry
{
    LocalizedString* Name;
    LocalizedString* SourceText;
    LocalizedString* Description;
    uint32 ID;
    uint16 MountTypeID;
    uint16 Flags;
    int8 SourceTypeEnum;
    int32 SourceSpellID;
    uint32 PlayerConditionID;
    float MountFlyRideHeight;
    int32 UiModelSceneID;

    bool IsSelfMount() const { return (Flags & MOUNT_FLAG_SELF_MOUNT) != 0; }
};

struct MountCapabilityEntry
{
    uint32 ID;
    uint8 Flags;
    uint16 ReqRidingSkill;
    uint16 ReqAreaID;
    uint32 ReqSpellAuraID;
    int32 ReqSpellKnownID;
    int32 ModSpellAuraID;
    int16 ReqMapID;
};

struct MountTypeXCapabilityEntry
{
    uint32 ID;
    uint16 MountTypeID;
    uint16 MountCapabilityID;
    uint8 OrderIndex;
};

struct MountXDisplayEntry
{
    uint32 ID;
    int32 CreatureDisplayInfoID;
    uint32 PlayerConditionID;
    int32 MountID;
};

struct MovieEntry
{
    uint32 ID;
    uint8 Volume;
    uint8 KeyID;
    uint32 AudioFileDataID;
    uint32 SubtitleFileDataID;
};

struct MovieFileDataEntry
{
    uint32 ID;
    uint16 Resolution;
};

struct MovieVariationEntry
{
    uint32 ID;
    uint32 FileDataID;
    uint32 OverlayFileDataID;
    uint16 MovieID;
};

struct MultiStatePropertiesEntry
{
    uint32 ID;
    float Offset[3];
    int32 GameObjectID;
    uint8 StateIndex;
    int32 GameEventID;
    float Facing;
    int32 TransitionInID;
    int32 TransitionOutID;
    int32 CollisionHull;
    uint32 Flags;
    int32 SpellVisualKitID;
    int32 MultiPropertiesID;
};

struct MultiTransitionPropertiesEntry
{
    uint32 ID;
    uint32 TransitionType;
    uint32 DurationMS;
    uint32 Flags;
    int32 StartSpellVisualKitID;
    int32 EndSpellVisualKitID;
};

struct MythicPlusSeasonRewardLevelsEntry
{
    uint32 ID;
    int32 DifficultyLevel;
    int32 WeeklyRewardLevel;
    int32 EndOfRunRewardLevel;
    int32 Season;
};

struct NameGenEntry
{
    uint32 ID;
    char const* Name;
    uint8 RaceID;
    uint8 Sex;
};

struct NamesProfanityEntry
{
    uint32 ID;
    char const* Name;
    int8 Language;
};

struct NamesReservedEntry
{
    uint32 ID;
    char const* Name;
};

struct NamesReservedLocaleEntry
{
    uint32 ID;
    char const* Name;
    uint8 LocaleMask;
};

struct NPCModelItemSlotDisplayInfoEntry
{
    uint32 ID;
    int32 ItemDisplayInfoID;
    int8 ItemSlot;
    int32 NpcModelID;
};

struct NPCSoundsEntry
{
    uint32 ID;
    uint32 SoundID[4];
};

struct NumTalentsAtLevelEntry
{
    uint32 ID;
    int32 NumTalents;
    int32 NumTalentsDeathKnight;
    int32 NumTalentsDemonHunter;
};

struct ObjectEffectEntry
{
    uint32 ID;
    float Offset[3];
    uint16 ObjectEffectGroupID;
    uint8 TriggerType;
    uint8 EventType;
    uint8 EffectRecType;
    uint32 EffectRecID;
    int8 Attachment;
    uint32 ObjectEffectModifierID;
};

struct ObjectEffectModifierEntry
{
    uint32 ID;
    float Param[4];
    uint8 InputType;
    uint8 MapType;
    uint8 OutputType;
};

struct ObjectEffectPackageElemEntry
{
    uint32 ID;
    uint16 ObjectEffectPackageID;
    uint16 ObjectEffectGroupID;
    uint16 StateType;
};

struct OccluderEntry
{
    uint32 ID;
    int32 MapID;
    uint8 Type;
    uint8 SplineType;
    uint8 Red;
    uint8 Green;
    uint8 Blue;
    uint8 Alpha;
    uint8 Flags;
};

struct OccluderLocationEntry
{
    DBCPosition3D Pos;
    float Rot[3];
    uint32 ID;
    int32 MapID;
};

struct OccluderNodeEntry
{
    uint32 ID;
    uint16 OccluderID;
    int16 Sequence;
    int32 LocationID;
};

struct OutlineEffectEntry
{
    uint32 ID;
    uint32 PassiveHighlightColorID;
    uint32 HighlightColorID;
    int32 Priority;
    int32 Flags;
    float Range;
    uint32 UnitConditionID[2];
};

struct OverrideSpellDataEntry
{
    uint32 ID;
    int32 Spells[MAX_OVERRIDE_SPELL];
    int32 PlayerActionbarFileDataID;
    uint8 Flags;
};

struct PageTextMaterialEntry
{
    uint32 ID;
    char const* Name;
};

struct PaperDollItemFrameEntry
{
    uint32 ID;
    char const* ItemButtonName;
    int32 SlotIconFileID;
    uint8 SlotNumber;
};

struct ParagonReputationEntry
{
    uint32 ID;
    uint32 FactionID;
    int32 LevelThreshold;
    int32 QuestID;
};

struct ParticleColorEntry
{
    uint32 ID;
    int32 Start[3];
    int32 MID[3];
    int32 End[3];
};

struct ParticulateSoundEntry
{
    uint32 ID;
    int32 ParticulateID;
    int32 DaySound;
    int32 NightSound;
    int32 EnterSound;
    int32 ExitSound;
};

struct PathEntry
{
    uint32 ID;
    uint8 Type;
    uint8 SplineType;
    uint8 Red;
    uint8 Green;
    uint8 Blue;
    uint8 Alpha;
    uint8 Flags;
};

struct PathNodeEntry
{
    uint32 ID;
    uint16 PathID;
    int16 Sequence;
    int32 LocationID;
};

struct PathNodePropertyEntry
{
    uint32 ID;
    uint16 PathID;
    uint16 Sequence;
    uint8 PropertyIndex;
    int32 Value;
};

struct PathPropertyEntry
{
    uint32 ID;
    uint16 PathID;
    uint8 PropertyIndex;
    int32 Value;
};

struct PetLoyaltyEntry
{
    uint32 ID;
    LocalizedString* Name;
};

struct PetPersonalityEntry
{
    uint32 ID;
    float HappinessDamage[3];
    int32 HappinessThreshold[3];
    float DamageModifier[3];
    float Field_1_13_0_28211_003[8];
};

struct PhaseEntry
{
    uint32 ID;
    uint16 Flags;
};

struct PhaseShiftZoneSoundsEntry
{
    uint32 ID;
    uint16 AreaID;
    uint8 WMOAreaID;
    uint16 PhaseID;
    uint16 PhaseGroupID;
    uint8 PhaseUseFlags;
    uint32 ZoneIntroMusicID;
    uint32 ZoneMusicID;
    uint16 SoundAmbienceID;
    uint8 SoundProviderPreferencesID;
    uint32 UWZoneIntroMusicID;
    uint32 UWZoneMusicID;
    uint16 UWSoundAmbienceID;
    uint8 UWSoundProviderPreferencesID;
};

struct PhaseXPhaseGroupEntry
{
    uint32 ID;
    uint16 PhaseID;
    uint16 PhaseGroupID;
};

struct PlayerConditionEntry
{
    int64 RaceMask;
    LocalizedString* FailureDescription;
    uint32 ID;
    uint16 MinLevel;
    uint16 MaxLevel;
    int32 ClassMask;
    uint32 SkillLogic;
    uint8 LanguageID;
    uint8 MinLanguage;
    int32 MaxLanguage;
    uint16 MaxFactionID;
    uint8 MaxReputation;
    uint32 ReputationLogic;
    int8 CurrentPvpFaction;
    uint8 PvpMedal;
    uint32 PrevQuestLogic;
    uint32 CurrQuestLogic;
    uint32 CurrentCompletedQuestLogic;
    uint32 SpellLogic;
    uint32 ItemLogic;
    uint8 ItemFlags;
    uint32 AuraSpellLogic;
    uint16 WorldStateExpressionID;
    uint8 WeatherID;
    uint8 PartyStatus;
    uint8 LifetimeMaxPVPRank;
    uint32 AchievementLogic;
    int8 Gender;
    int8 NativeGender;
    uint32 AreaLogic;
    uint32 LfgLogic;
    uint32 CurrencyLogic;
    uint16 QuestKillID;
    uint32 QuestKillLogic;
    int8 MinExpansionLevel;
    int8 MaxExpansionLevel;
    int32 MinAvgItemLevel;
    int32 MaxAvgItemLevel;
    uint16 MinAvgEquippedItemLevel;
    uint16 MaxAvgEquippedItemLevel;
    uint8 PhaseUseFlags;
    uint16 PhaseID;
    uint32 PhaseGroupID;
    uint8 Flags;
    int8 ChrSpecializationIndex;
    int8 ChrSpecializationRole;
    uint32 ModifierTreeID;
    int8 PowerType;
    uint8 PowerTypeComp;
    uint8 PowerTypeValue;
    int32 WeaponSubclassMask;
    uint8 MaxGuildLevel;
    uint8 MinGuildLevel;
    int8 MaxExpansionTier;
    int8 MinExpansionTier;
    uint8 MinPVPRank;
    uint8 MaxPVPRank;
    uint16 SkillID[4];
    uint16 MinSkill[4];
    uint16 MaxSkill[4];
    uint32 MinFactionID[3];
    uint8 MinReputation[3];
    uint16 PrevQuestID[4];
    uint16 CurrQuestID[4];
    uint16 CurrentCompletedQuestID[4];
    int32 SpellID[4];
    int32 ItemID[4];
    uint32 ItemCount[4];
    uint16 Explored[2];
    uint32 Time[2];
    int32 AuraSpellID[4];
    uint8 AuraStacks[4];
    uint16 Achievement[4];
    uint16 AreaID[4];
    uint8 LfgStatus[4];
    uint8 LfgCompare[4];
    uint32 LfgValue[4];
    uint32 CurrencyID[4];
    uint32 CurrencyCount[4];
    uint32 QuestKillMonster[6];
    int32 MovementFlags[2];
};

struct PositionerEntry
{
    uint32 ID;
    uint16 FirstStateID;
    uint8 Flags;
    float StartLife;
    uint8 StartLifePercent;
};

struct PositionerStateEntry
{
    uint32 ID;
    uint32 NextStateID;
    uint32 TransformMatrixID;
    uint32 PosEntryID;
    uint32 RotEntryID;
    uint32 ScaleEntryID;
    uint32 Flags;
    float EndLife;
    uint8 EndLifePercent;
};

struct PositionerStateEntryEntry
{
    uint32 ID;
    float ParamA;
    float ParamB;
    uint32 CurveID;
    int16 SrcValType;
    int16 SrcVal;
    int16 DstValType;
    int16 DstVal;
    int8 EntryType;
    int8 Style;
    int8 SrcType;
    int8 DstType;
};

struct PowerDisplayEntry
{
    uint32 ID;
    char const* GlobalStringBaseTag;
    uint8 ActualType;
    uint8 Red;
    uint8 Green;
    uint8 Blue;
};

struct PowerTypeEntry
{
    uint32 ID;
    char const* NameGlobalStringTag;
    char const* CostGlobalStringTag;
    int8 PowerTypeEnum;
    int8 MinPower;
    uint32 MaxBasePower;
    int8 CenterPower;
    int8 DefaultPower;
    uint16 DisplayModifier;
    int16 RegenInterruptTimeMS;
    float RegenPeace;
    float RegenCombat;
    int16 Flags;
};

struct PrestigeLevelInfoEntry
{
    uint32 ID;
    LocalizedString* Name;
    int32 HonorLevel;
    int32 BadgeTextureFileDataID;
    uint8 Flags;
    int32 AwardedAchievementID;

    bool IsDisabled() const { return (Flags & PRESTIGE_FLAG_DISABLED) != 0; }
};

struct PVPBracketTypesEntry
{
    uint32 ID;
    int8 BracketID;
    uint32 WeeklyQuestID[4];
};

struct PVPDifficultyEntry
{
    uint32 ID;
    uint8 RangeIndex;
    uint8 MinLevel;
    uint8 MaxLevel;
    uint16 MapID;

    // helpers
    BattlegroundBracketId GetBracketId() const { return BattlegroundBracketId(RangeIndex); }
};

struct PVPItemEntry
{
    uint32 ID;
    int32 ItemID;
    uint8 ItemLevelDelta;
};

struct PvpScalingEffectEntry
{
    uint32 ID;
    int32 SpecializationID;
    int32 PvpScalingEffectTypeID;
    float Value;
};

struct PvpScalingEffectTypeEntry
{
    uint32 ID;
    char const* Name;
};

struct PvpTalentEntry
{
    LocalizedString* Description;
    uint32 ID;
    int32 SpecID;
    int32 SpellID;
    int32 OverridesSpellID;
    int32 Flags;
    int32 ActionBarSpellID;
    int32 PvpTalentCategoryID;
    int32 LevelRequired;
};

struct PvpTalentCategoryEntry
{
    uint32 ID;
    uint8 TalentSlotMask;
};

struct PvpTalentSlotUnlockEntry
{
    uint32 ID;
    int8 Slot;
    int32 LevelRequired;
    int32 DeathKnightLevelRequired;
    int32 DemonHunterLevelRequired;
};

struct PvpTierEntry
{
    uint32 ID;
    LocalizedString* Name;
    int16 MinRating;
    int16 MaxRating;
    int32 PrevTier;
    int32 NextTier;
    int8 BracketID;
    int8 Rank;
    int32 RankIcon;
};

struct QuestFactionRewardEntry
{
    uint32 ID;
    int16 Difficulty[10];
};

struct QuestFeedbackEffectEntry
{
    uint32 ID;
    uint32 FileDataID;
    uint16 MinimapAtlasMemberID;
    uint8 AttachPoint;
    uint8 PassiveHighlightColorType;
    uint8 Priority;
    uint8 Flags;
};

struct QuestInfoEntry
{
    uint32 ID;
    LocalizedString* InfoName;
    int8 Type;
    uint8 Modifiers;
    uint16 Profession;
};

struct QuestLineEntry
{
    uint32 ID;
    LocalizedString* Name;
    LocalizedString* Description;
    uint32 QuestID;
};

struct QuestLineXQuestEntry
{
    uint32 ID;
    uint32 QuestLineID;
    uint32 QuestID;
    uint32 OrderIndex;
};

struct QuestMoneyRewardEntry
{
    uint32 ID;
    uint32 Difficulty[10];
};

struct QuestObjectiveEntry
{
    uint32 ID;
    LocalizedString* Description;
    uint8 Type;
    int32 Amount;
    int32 ObjectID;
    uint8 OrderIndex;
    uint8 Flags;
    uint8 StorageIndex;
    uint16 QuestID;
};

struct QuestPackageItemEntry
{
    uint32 ID;
    uint16 PackageID;
    int32 ItemID;
    uint32 ItemQuantity;
    uint8 DisplayType;
};

struct QuestSortEntry
{
    uint32 ID;
    LocalizedString* SortName;
    int8 UiOrderIndex;
};

struct QuestV2Entry
{
    uint32 ID;
    uint16 UniqueBitFlag;
};

struct QuestV2CliTaskEntry
{
    int64 FiltRaces;
    LocalizedString* QuestTitle;
    LocalizedString* BulletText;
    uint32 ID;
    uint16 UniqueBitFlag;
    uint32 ConditionID;
    uint32 FiltActiveQuest;
    int16 FiltClasses;
    uint32 FiltCompletedQuestLogic;
    uint32 FiltMaxFactionID;
    uint32 FiltMaxFactionValue;
    uint32 FiltMaxLevel;
    uint32 FiltMinFactionID;
    uint32 FiltMinFactionValue;
    uint32 FiltMinLevel;
    uint32 FiltMinSkillID;
    uint32 FiltMinSkillValue;
    uint32 FiltNonActiveQuest;
    uint32 BreadCrumbID;
    int32 StartItem;
    int16 WorldStateExpressionID;
    uint32 QuestInfoID;
    int32 ContentTuningID;
    uint32 FiltCompletedQuest[3];
};

struct QuestXGroupActivityEntry
{
    uint32 ID;
    uint32 QuestID;
    uint32 GroupFinderActivityID;
};

struct QuestXPEntry
{
    uint32 ID;
    uint16 Difficulty[10];
};

struct RandPropPointsEntry
{
    uint32 ID;
    int32 DamageReplaceStat;
    uint32 Epic[5];
    uint32 Superior[5];
    uint32 Good[5];
};

struct RelicSlotTierRequirementEntry
{
    uint32 ID;
    uint8 RelicIndex;
    uint8 RelicTier;
    int32 PlayerConditionID;
};

struct RelicTalentEntry
{
    uint32 ID;
    int32 Type;
    uint16 ArtifactPowerID;
    uint8 ArtifactPowerLabel;
    int32 PVal;
    int32 Flags;
};

struct ResearchBranchEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint8 ResearchFieldID;
    uint16 CurrencyID;
    int32 TextureFileID;
    int32 BigTextureFileID;
    int32 ItemID;
};

struct ResearchFieldEntry
{
    LocalizedString* Name;
    uint32 ID;
    uint8 Slot;
};

struct ResearchProjectEntry
{
    LocalizedString* Name;
    LocalizedString* Description;
    uint32 ID;
    uint8 Rarity;
    int32 SpellID;
    uint16 ResearchBranchID;
    uint8 NumSockets;
    int32 TextureFileID;
    uint32 RequiredWeight;
};

struct ResearchSiteEntry
{
    uint32 ID;
    LocalizedString* Name;
    int16 MapID;
    int32 QuestPOIBlobID;
    uint32 AreaPOIIconEnum;
};

struct ResistancesEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint8 Flags;
    uint32 FizzleSoundID;
};

struct RewardPackEntry
{
    uint32 ID;
    int32 CharTitleID;
    uint32 Money;
    int8 ArtifactXPDifficulty;
    float ArtifactXPMultiplier;
    uint8 ArtifactXPCategoryID;
    uint32 TreasurePickerID;
};

struct RewardPackXCurrencyTypeEntry
{
    uint32 ID;
    uint32 CurrencyTypeID;
    int32 Quantity;
    uint32 RewardPackID;
};

struct RewardPackXItemEntry
{
    uint32 ID;
    int32 ItemID;
    int32 ItemQuantity;
    int32 RewardPackID;
};

struct RibbonQualityEntry
{
    uint32 ID;
    uint8 NumStrips;
    float MaxSampleTimeDelta;
    float AngleThreshold;
    float MinDistancePerSlice;
    uint32 Flags;
};

struct RulesetItemUpgradeEntry
{
    uint32 ID;
    int32 ItemID;
    uint16 ItemUpgradeID;
};

struct ScalingStatDistributionEntry
{
    uint32 ID;
    uint16 PlayerLevelToItemLevelCurveID;
    int32 MinLevel;
    int32 MaxLevel;
};

struct ScenarioEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint16 AreaTableID;
    uint8 Type;
    uint8 Flags;
    uint32 UiTextureKitID;
};

struct ScenarioEventEntryEntry
{
    uint32 ID;
    uint8 TriggerType;
    uint32 TriggerAsset;
};

struct ScenarioStepEntry
{
    uint32 ID;
    LocalizedString* Description;
    LocalizedString* Title;
    uint16 ScenarioID;
    uint32 CriteriatreeID;
    uint16 RewardQuestID;
    int32 RelatedStep;
    uint16 Supersedes;
    uint8 OrderIndex;
    uint8 Flags;
    uint32 VisibilityPlayerConditionID;
    uint16 WidgetSetID;

    // helpers
    bool IsBonusObjective() const { return Flags & SCENARIO_STEP_FLAG_BONUS_OBJECTIVE; }
};

struct SceneScriptEntry
{
    uint32 ID;
    uint16 FirstSceneScriptID;
    uint16 NextSceneScriptID;
};

struct SceneScriptGlobalTextEntry
{
    uint32 ID;
    char const* Name;
    char const* Script;
};

struct SceneScriptPackageEntry
{
    uint32 ID;
    char const* Name;
};

struct SceneScriptPackageMemberEntry
{
    uint32 ID;
    uint16 SceneScriptPackageID;
    uint16 SceneScriptID;
    uint16 ChildSceneScriptPackageID;
    uint8 OrderIndex;
};

struct SceneScriptTextEntry
{
    uint32 ID;
    char const* Name;
    char const* Script;
};

struct ScheduledIntervalEntry
{
    uint32 ID;
    int32 Flags;
    int32 RepeatType;
    int32 DurationSecs;
    int32 OffsetSecs;
    int32 DateAlignmentType;
};

struct ScheduledWorldStateEntry
{
    uint32 ID;
    int32 ScheduledWorldStateGroupID;
    int32 WorldStateID;
    int32 Value;
    int32 DurationSecs;
    int32 Weight;
    int32 UniqueCategory;
    int32 Flags;
    int32 OrderIndex;
};

struct ScheduledWorldStateGroupEntry
{
    uint32 ID;
    int32 Flags;
    int32 ScheduledIntervalID;
    int32 SelectionType;
    int32 SelectionCount;
    int32 Priority;
};

struct ScheduledWorldStateXUniqCatEntry
{
    uint32 ID;
    int32 ScheduledUniqueCategoryID;
    int32 ScheduledWorldStateID;
};

struct ScreenEffectEntry
{
    uint32 ID;
    char const* Name;
    int32 Param[4];
    int8 Effect;
    uint32 FullScreenEffectID;
    uint16 LightParamsID;
    uint16 LightParamsFadeIn;
    uint16 LightParamsFadeOut;
    uint32 SoundAmbienceID;
    uint32 ZoneMusicID;
    int16 TimeOfDayOverride;
    int8 EffectMask;
    uint8 LightFlags;
};

struct ScreenLocationEntry
{
    uint32 ID;
    char const* Name;
};

struct SDReplacementModelEntry
{
    uint32 ID;
    int32 SdFileDataID;
};

struct SeamlessSiteEntry
{
    uint32 ID;
    int32 MapID;
};

struct ServerMessagesEntry
{
    uint32 ID;
    LocalizedString* Text;
};

struct ShadowyEffectEntry
{
    uint32 ID;
    int32 PrimaryColor;
    int32 SecondaryColor;
    float Duration;
    float Value;
    float FadeInTime;
    float FadeOutTime;
    int8 AttachPos;
    int8 Flags;
    float InnerStrength;
    float OuterStrength;
    float InitialDelay;
    int32 CurveID;
    uint32 Priority;
};

struct SiegeablePropertiesEntry
{
    uint32 ID;
    uint32 Health;
    int32 DamageSpellVisualKitID;
    int32 HealingSpellVisualKitID;
    uint32 Flags;
};

struct SkillLineEntry
{
    LocalizedString* DisplayName;
    LocalizedString* AlternateVerb;
    LocalizedString* Description;
    LocalizedString* HordeDisplayName;
    char const* NeutralDisplayName;
    uint32 ID;
    int8 CategoryID;
    int32 SpellIconFileID;
    int8 CanLink;
    uint32 ParentSkillLineID;
    int32 ParentTierIndex;
    uint16 Flags;
    int32 SpellBookSpellID;
};

struct SkillLineAbilityEntry
{
    int64 RaceMask;
    uint32 ID;
    int16 SkillLine;
    int32 Spell;
    int16 MinSkillLineRank;
    int32 ClassMask;
    int32 SupercedesSpell;
    int8 AcquireMethod;
    int16 TrivialSkillLineRankHigh;
    int16 TrivialSkillLineRankLow;
    int8 Flags;
    int8 NumSkillUps;
    int16 UniqueBit;
    int16 TradeSkillCategoryID;
    int16 SkillupSkillLineID;
    int32 CharacterPoints[2];
};

struct SkillLineCategoryEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint8 SortIndex;
};

struct SkillRaceClassInfoEntry
{
    uint32 ID;
    int64 RaceMask;
    int16 SkillID;
    int32 ClassMask;
    uint16 Flags;
    int8 Availability;
    int8 MinLevel;
    int16 SkillTierID;
};

struct SoundAmbienceEntry
{
    uint32 ID;
    uint8 Flags;
    uint32 SoundFilterID;
    uint32 FlavorSoundFilterID;
    uint32 AmbienceID[2];
    uint32 AmbienceStartID[2];
    uint32 AmbienceStopID[2];
};

struct SoundAmbienceFlavorEntry
{
    uint32 ID;
    uint32 SoundEntriesIDDay;
    uint32 SoundEntriesIDNight;
    uint16 SoundAmbienceID;
};

struct SoundBusEntry
{
    uint32 ID;
    uint8 Flags;
    uint8 DefaultPriority;
    uint8 DefaultPriorityPenalty;
    float DefaultVolume;
    uint8 DefaultPlaybackLimit;
    int8 BusEnumID;
    uint16 Parent;
};

struct SoundBusOverrideEntry
{
    uint32 ID;
    int32 SoundBusID;
    uint32 PlayerConditionID;
    uint8 PlaybackLimit;
    float Volume;
    uint8 Priority;
    uint8 PriorityPenalty;
};

struct SoundEmitterPillPointsEntry
{
    uint32 ID;
    DBCPosition3D Position;
    uint16 SoundEmittersID;
};

struct SoundEmittersEntry
{
    char const* Name;
    DBCPosition3D Position;
    float Direction[3];
    uint32 ID;
    uint32 SoundEntriesID;
    uint16 WorldStateExpressionID;
    uint8 EmitterType;
    uint16 PhaseID;
    uint32 PhaseGroupID;
    uint8 PhaseUseFlags;
    uint8 Flags;
    int16 MapID;
};

struct SoundEnvelopeEntry
{
    uint32 ID;
    int32 SoundKitID;
    uint8 EnvelopeType;
    uint32 Flags;
    int32 CurveID;
    uint16 DecayIndex;
    uint16 SustainIndex;
    uint16 ReleaseIndex;
};

struct SoundFilterEntry
{
    uint32 ID;
    char const* Name;
};

struct SoundFilterElemEntry
{
    uint32 ID;
    float Params[9];
    int8 FilterType;
    int8 SoundFilterID;
};

struct SoundKitEntry
{
    uint32 ID;
    uint8 SoundType;
    float VolumeFloat;
    uint16 Flags;
    float MinDistance;
    float DistanceCutoff;
    uint8 EAXDef;
    uint32 SoundKitAdvancedID;
    float VolumeVariationPlus;
    float VolumeVariationMinus;
    float PitchVariationPlus;
    float PitchVariationMinus;
    int8 DialogType;
    float PitchAdjust;
    uint16 BusOverwriteID;
    uint8 MaxInstances;
};

struct SoundKitAdvancedEntry
{
    uint32 ID;
    uint32 SoundKitID;
    float InnerRadius2D;
    float OuterRadius2D;
    uint32 TimeA;
    uint32 TimeB;
    uint32 TimeC;
    uint32 TimeD;
    int32 RandomOffsetRange;
    int8 Usage;
    uint32 TimeIntervalMin;
    uint32 TimeIntervalMax;
    uint32 DelayMin;
    uint32 DelayMax;
    uint8 VolumeSliderCategory;
    float DuckToSFX;
    float DuckToMusic;
    float DuckToAmbience;
    float DuckToDialog;
    float DuckToSuppressors;
    float DuckToCinematicSFX;
    float DuckToCinematicMusic;
    float InnerRadiusOfInfluence;
    float OuterRadiusOfInfluence;
    uint32 TimeToDuck;
    uint32 TimeToUnduck;
    float InsideAngle;
    float OutsideAngle;
    float OutsideVolume;
    uint8 MinRandomPosOffset;
    uint16 MaxRandomPosOffset;
    int32 MsOffset;
    uint32 TimeCooldownMin;
    uint32 TimeCooldownMax;
    uint8 MaxInstancesBehavior;
    uint8 VolumeControlType;
    int32 VolumeFadeInTimeMin;
    int32 VolumeFadeInTimeMax;
    uint32 VolumeFadeInCurveID;
    int32 VolumeFadeOutTimeMin;
    int32 VolumeFadeOutTimeMax;
    uint32 VolumeFadeOutCurveID;
    float ChanceToPlay;
};

struct SoundKitChildEntry
{
    uint32 ID;
    uint32 SoundKitID;
    uint32 ParentSoundKitID;
};

struct SoundKitEntryEntry
{
    uint32 ID;
    uint32 SoundKitID;
    int32 FileDataID;
    uint8 Frequency;
    float Volume;
};

struct SoundKitFallbackEntry
{
    uint32 ID;
    uint32 SoundKitID;
    uint32 FallbackSoundKitID;
};

struct SoundKitNameEntry
{
    uint32 ID;
    char const* Name;
};

struct SoundOverrideEntry
{
    uint32 ID;
    uint16 ZoneIntroMusicID;
    uint16 ZoneMusicID;
    uint16 SoundAmbienceID;
    uint8 SoundProviderPreferencesID;
    uint8 Flags;
};

struct SoundProviderPreferencesEntry
{
    uint32 ID;
    char const* Description;
    int8 EAXEnvironmentSelection;
    float EAXDecayTime;
    float EAX2EnvironmentSize;
    float EAX2EnvironmentDiffusion;
    int16 EAX2Room;
    int16 EAX2RoomHF;
    float EAX2DecayHFRatio;
    int16 EAX2Reflections;
    float EAX2ReflectionsDelay;
    int16 EAX2Reverb;
    float EAX2ReverbDelay;
    float EAX2RoomRolloff;
    float EAX2AirAbsorption;
    int8 EAX3RoomLF;
    float EAX3DecayLFRatio;
    float EAX3EchoTime;
    float EAX3EchoDepth;
    float EAX3ModulationTime;
    float EAX3ModulationDepth;
    float EAX3HFReference;
    float EAX3LFReference;
    uint16 Flags;
};

struct SourceInfoEntry
{
    uint32 ID;
    LocalizedString* SourceText;
    int8 PvpFaction;
    int8 SourceTypeEnum;
    uint32 SpellID;
};

struct SpamMessagesEntry
{
    uint32 ID;
    char const* Text;
};

struct SpecializationSpellsEntry
{
    LocalizedString* Description;
    uint32 ID;
    uint16 SpecID;
    int32 SpellID;
    int32 OverridesSpellID;
    uint8 DisplayOrder;
};

struct SpecializationSpellsDisplayEntry
{
    uint32 ID;
    uint16 SpecializationID;
    uint32 SpellID[6];
};

struct SpecSetMemberEntry
{
    uint32 ID;
    int32 ChrSpecializationID;
    int32 SpecSet;
};

struct SpellEntry
{
    uint32 ID;
    LocalizedString* NameSubtext;
    LocalizedString* Description;
    LocalizedString* AuraDescription;
};

struct SpellActionBarPrefEntry
{
    uint32 ID;
    int32 SpellID;
    uint16 PreferredActionBarMask;
};

struct SpellActivationOverlayEntry
{
    uint32 ID;
    int32 IconHighlightSpellClassMask[4];
    int32 SpellID;
    int32 OverlayFileDataID;
    int8 ScreenLocationID;
    uint32 SoundEntriesID;
    int32 Color;
    float Scale;
    int8 TriggerType;
};

struct SpellAuraOptionsEntry
{
    uint32 ID;
    uint8 DifficultyID;
    uint16 CumulativeAura;
    int32 ProcCategoryRecovery;
    uint8 ProcChance;
    int32 ProcCharges;
    uint16 SpellProcsPerMinuteID;
    int32 ProcTypeMask[2];
    int32 SpellID;
};

struct SpellAuraRestrictionsEntry
{
    uint32 ID;
    uint8 DifficultyID;
    uint8 CasterAuraState;
    uint8 TargetAuraState;
    uint8 ExcludeCasterAuraState;
    uint8 ExcludeTargetAuraState;
    int32 CasterAuraSpell;
    int32 TargetAuraSpell;
    int32 ExcludeCasterAuraSpell;
    int32 ExcludeTargetAuraSpell;
    int32 SpellID;
};

struct SpellAuraVisibilityEntry
{
    uint32 ID;
    int8 Type;
    int8 Flags;
    int32 SpellID;
};

struct SpellAuraVisXChrSpecEntry
{
    uint32 ID;
    int16 ChrSpecializationID;
    int16 SpellAuraVisibilityID;
};

struct SpellCastingRequirementsEntry
{
    uint32 ID;
    int32 SpellID;
    uint8 FacingCasterFlags;
    uint16 MinFactionID;
    int8 MinReputation;
    uint16 RequiredAreasID;
    uint8 RequiredAuraVision;
    uint16 RequiresSpellFocus;
};

struct SpellCastTimesEntry
{
    uint32 ID;
    int32 Base;
    int16 PerLevel;
    int32 Minimum;
};

struct SpellCategoriesEntry
{
    uint32 ID;
    uint8 DifficultyID;
    int16 Category;
    int8 DefenseType;
    int8 DispelType;
    int8 Mechanic;
    int8 PreventionType;
    int16 StartRecoveryCategory;
    int16 ChargeCategory;
    int32 SpellID;
};

struct SpellCategoryEntry
{
    uint32 ID;
    LocalizedString* Name;
    int8 Flags;
    uint8 UsesPerWeek;
    int8 MaxCharges;
    int32 ChargeRecoveryTime;
    int32 TypeMask;
};

struct SpellChainEffectsEntry
{
    uint32 ID;
    float AvgSegLen;
    float NoiseScale;
    float TexCoordScale;
    uint32 SegDuration;
    uint16 SegDelay;
    uint32 Flags;
    uint16 JointCount;
    float JointOffsetRadius;
    uint8 JointsPerMinorJoint;
    uint8 MinorJointsPerMajorJoint;
    float MinorJointScale;
    float MajorJointScale;
    float JointMoveSpeed;
    float JointSmoothness;
    float MinDurationBetweenJointJumps;
    float MaxDurationBetweenJointJumps;
    float WaveHeight;
    float WaveFreq;
    float WaveSpeed;
    float MinWaveAngle;
    float MaxWaveAngle;
    float MinWaveSpin;
    float MaxWaveSpin;
    float ArcHeight;
    float MinArcAngle;
    float MaxArcAngle;
    float MinArcSpin;
    float MaxArcSpin;
    float DelayBetweenEffects;
    float MinFlickerOnDuration;
    float MaxFlickerOnDuration;
    float MinFlickerOffDuration;
    float MaxFlickerOffDuration;
    float PulseSpeed;
    float PulseOnLength;
    float PulseFadeLength;
    uint8 Alpha;
    uint8 Red;
    uint8 Green;
    uint8 Blue;
    uint8 BlendMode;
    uint8 RenderLayer;
    float WavePhase;
    float TimePerFlipFrame;
    float VariancePerFlipFrame;
    uint32 TextureParticleFileDataID;
    float StartWidth;
    float EndWidth;
    uint16 WidthScaleCurveID;
    uint8 NumFlipFramesU;
    uint8 NumFlipFramesV;
    uint32 SoundKitID;
    float ParticleScaleMultiplier;
    float ParticleEmissionRateMultiplier;
    uint16 SpellChainEffectID[11];
    float TextureCoordScaleU[3];
    float TextureCoordScaleV[3];
    float TextureRepeatLengthU[3];
    float TextureRepeatLengthV[3];
    int32 TextureFileDataID[3];
};

struct SpellClassOptionsEntry
{
    uint32 ID;
    int32 SpellID;
    uint32 ModalNextSpell;
    uint8 SpellClassSet;
    flag128 SpellClassMask;
};

struct SpellCooldownsEntry
{
    uint32 ID;
    uint8 DifficultyID;
    int32 CategoryRecoveryTime;
    int32 RecoveryTime;
    int32 StartRecoveryTime;
    int32 SpellID;
};

struct SpellCraftUIEntry
{
    uint32 ID;
    int8 CastUI;
};

struct SpellDescriptionVariablesEntry
{
    uint32 ID;
    char const* Variables;
};

struct SpellDispelTypeEntry
{
    uint32 ID;
    LocalizedString* Name;
    char const* InternalName;
    uint8 ImmunityPossible;
    uint8 Mask;
};

struct SpellDurationEntry
{
    uint32 ID;
    int32 Duration;
    uint32 DurationPerLevel;
    int32 MaxDuration;
};

struct SpellEffectEntry
{
    uint32 ID;
    int32 DifficultyID;
    int32 EffectIndex;
    uint32 Effect;
    float EffectAmplitude;
    int32 EffectAttributes;
    int16 EffectAura;
    int32 EffectAuraPeriod;
    int32 EffectBasePoints;
    float EffectBonusCoefficient;
    float EffectChainAmplitude;
    int32 EffectChainTargets;
    int32 EffectDieSides;
    int32 EffectItemType;
    int32 EffectMechanic;
    float EffectPointsPerResource;
    float EffectPosFacing;
    float EffectRealPointsPerLevel;
    int32 EffectTriggerSpell;
    float BonusCoefficientFromAP;
    float PvpMultiplier;
    float Coefficient;
    float Variance;
    float ResourceCoefficient;
    float GroupSizeBasePointsCoefficient;
    int32 EffectMiscValue[2];
    uint32 EffectRadiusIndex[2];
    flag128 EffectSpellClassMask;
    int16 ImplicitTarget[2];
    int32 SpellID;
};

struct SpellEffectAutoDescriptionEntry
{
    uint32 ID;
    LocalizedString* EffectDescription;
    LocalizedString* AuraDescription;
    int32 SpellEffectType;
    int32 AuraEffectType;
    int8 PointsSign;
    int8 TargetType;
    int8 SchoolMask;
    int32 EffectOrderIndex;
    int32 AuraOrderIndex;
};

struct SpellEffectEmissionEntry
{
    uint32 ID;
    float EmissionRate;
    float ModelScale;
    int16 AreaModelID;
    int8 Flags;
};

struct SpellEquippedItemsEntry
{
    uint32 ID;
    int32 SpellID;
    int8 EquippedItemClass;
    int32 EquippedItemInvTypes;
    int32 EquippedItemSubclass;
};

struct SpellFlyoutEntry
{
    uint32 ID;
    int64 RaceMask;
    LocalizedString* Name;
    LocalizedString* Description;
    uint8 Flags;
    int32 ClassMask;
    int32 SpellIconFileID;
};

struct SpellFlyoutItemEntry
{
    uint32 ID;
    int32 SpellID;
    uint8 Slot;
    uint8 SpellFlyoutID;
};

struct SpellFocusObjectEntry
{
    uint32 ID;
    LocalizedString* Name;
};

struct SpellInterruptsEntry
{
    uint32 ID;
    uint8 DifficultyID;
    int16 InterruptFlags;
    int32 AuraInterruptFlags[MAX_SPELL_AURA_INTERRUPT_FLAGS];
    int32 ChannelInterruptFlags[MAX_SPELL_AURA_INTERRUPT_FLAGS];
    int32 SpellID;
};

struct SpellItemEnchantmentEntry
{
    uint32 ID;
    LocalizedString* Name;
    LocalizedString* HordeName;
    uint32 EffectArg[MAX_ITEM_ENCHANTMENT_EFFECTS];
    float EffectScalingPoints[MAX_ITEM_ENCHANTMENT_EFFECTS];
    uint32 TransmogPlayerConditionID;
    uint32 TransmogCost;
    uint32 IconFileDataID;
    int16 EffectPointsMin[MAX_ITEM_ENCHANTMENT_EFFECTS];
    uint16 ItemVisual;
    uint16 Flags;
    uint16 RequiredSkillID;
    uint16 RequiredSkillRank;
    uint16 ItemLevel;
    uint8 Charges;
    uint8 Effect[MAX_ITEM_ENCHANTMENT_EFFECTS];
    int8 ScalingClass;
    int8 ScalingClassRestricted;
    uint8 ConditionID;
    uint8 MinLevel;
    uint8 MaxLevel;
};

struct SpellItemEnchantmentConditionEntry
{
    uint32 ID;
    uint8 LtOperandType[5];
    uint32 LtOperand[5];
    uint8 Operator[5];
    uint8 RtOperandType[5];
    uint8 RtOperand[5];
    uint8 Logic[5];
};

struct SpellKeyboundOverrideEntry
{
    uint32 ID;
    char const* Function;
    int8 Type;
    int32 Data;
};

struct SpellLabelEntry
{
    uint32 ID;
    uint32 LabelID;
    int32 SpellID;
};

struct SpellLearnSpellEntry
{
    uint32 ID;
    int32 SpellID;
    int32 LearnSpellID;
    int32 OverridesSpellID;
};

struct SpellLevelsEntry
{
    uint32 ID;
    uint8 DifficultyID;
    int16 BaseLevel;
    int16 MaxLevel;
    int16 SpellLevel;
    uint8 MaxPassiveAuraLevel;
    int32 SpellID;
};

struct SpellMechanicEntry
{
    uint32 ID;
    LocalizedString* StateName;
};

struct SpellMiscEntry
{
    uint32 ID;
    uint8 DifficultyID;
    uint16 CastingTimeIndex;
    uint16 DurationIndex;
    uint16 RangeIndex;
    uint8 SchoolMask;
    float Speed;
    float LaunchDelay;
    float MinDuration;
    int32 SpellIconFileDataID;
    int32 ActiveIconFileDataID;
    int32 Attributes[14];
    int32 SpellID;
};

struct SpellMissileEntry
{
    uint32 ID;
    int32 SpellID;
    uint8 Flags;
    float DefaultPitchMin;
    float DefaultPitchMax;
    float DefaultSpeedMin;
    float DefaultSpeedMax;
    float RandomizeFacingMin;
    float RandomizeFacingMax;
    float RandomizePitchMin;
    float RandomizePitchMax;
    float RandomizeSpeedMin;
    float RandomizeSpeedMax;
    float Gravity;
    float MaxDuration;
    float CollisionRadius;
};

struct SpellMissileMotionEntry
{
    uint32 ID;
    char const* Name;
    char const* ScriptBody;
    uint8 Flags;
    uint8 MissileCount;
};

struct SpellNameEntry
{
    uint32 ID;
    LocalizedString* Name;
};

struct SpellPowerEntry
{
    uint32 ID;
    uint8 OrderIndex;
    int32 ManaCost;
    int32 ManaCostPerLevel;
    int32 ManaPerSecond;
    uint32 PowerDisplayID;
    int32 AltPowerBarID;
    float PowerCostPct;
    float PowerCostMaxPct;
    float PowerPctPerSecond;
    int8 PowerType;
    int32 RequiredAuraSpellID;
    uint32 OptionalCost;
    int32 SpellID;
};

struct SpellPowerDifficultyEntry
{
    uint32 ID;
    uint8 DifficultyID;
    uint8 OrderIndex;
};

struct SpellProceduralEffectEntry
{
    uint32 ID;
    int8 Type;
    float Value[4];
};

struct SpellProcsPerMinuteEntry
{
    uint32 ID;
    float BaseProcRate;
    uint8 Flags;
};

struct SpellProcsPerMinuteModEntry
{
    uint32 ID;
    uint8 Type;
    int16 Param;
    float Coeff;
    uint16 SpellProcsPerMinuteID;
};

struct SpellRadiusEntry
{
    uint32 ID;
    float Radius;
    float RadiusPerLevel;
    float RadiusMin;
    float RadiusMax;
};

struct SpellRangeEntry
{
    uint32 ID;
    LocalizedString* DisplayName;
    LocalizedString* DisplayNameShort;
    float RangeMin;
    float RangeMax;
    uint8 Flags;
};

struct SpellReagentsEntry
{
    uint32 ID;
    int32 SpellID;
    int32 Reagent[MAX_SPELL_REAGENTS];
    int16 ReagentCount[MAX_SPELL_REAGENTS];
};

struct SpellReagentsCurrencyEntry
{
    uint32 ID;
    int32 SpellID;
    uint16 CurrencyTypesID;
    uint16 CurrencyCount;
};

struct SpellScalingEntry
{
    uint32 ID;
    int32 SpellID;
    int32 Class;
    uint32 MinScalingLevel;
    uint32 MaxScalingLevel;
    int16 ScalesFromItemLevel;
};

struct SpellShapeshiftEntry
{
    uint32 ID;
    int32 SpellID;
    int8 StanceBarOrder;
    int32 ShapeshiftExclude[2];
    int32 ShapeshiftMask[2];
};

struct SpellShapeshiftFormEntry
{
    uint32 ID;
    LocalizedString* Name;
    int8 CreatureType;
    int32 Flags;
    int32 AttackIconFileID;
    int8 BonusActionBar;
    int16 CombatRoundTime;
    float DamageVariance;
    uint16 MountTypeID;
    uint32 CreatureDisplayID[4];
    uint32 PresetSpellID[MAX_SHAPESHIFT_SPELLS];
};

struct SpellSpecialUnitEffectEntry
{
    uint32 ID;
    uint16 SpellVisualEffectNameID;
    uint32 PositionerID;
};

struct SpellTargetRestrictionsEntry
{
    uint32 ID;
    uint8 DifficultyID;
    float ConeDegrees;
    uint8 MaxTargets;
    uint32 MaxTargetLevel;
    int16 TargetCreatureType;
    int32 Targets;
    float Width;
    int32 SpellID;
};

struct SpellTotemsEntry
{
    uint32 ID;
    int32 SpellID;
    uint16 RequiredTotemCategoryID[MAX_SPELL_TOTEMS];
    int32 Totem[MAX_SPELL_TOTEMS];
};

struct SpellVisualEntry
{
    uint32 ID;
    float MissileCastOffset[3];
    float MissileImpactOffset[3];
    uint32 AnimEventSoundID;
    int32 Flags;
    int8 MissileAttachment;
    int8 MissileDestinationAttachment;
    uint32 MissileCastPositionerID;
    uint32 MissileImpactPositionerID;
    int32 MissileTargetingKit;
    uint32 HostileSpellVisualID;
    uint32 CasterSpellVisualID;
    uint16 SpellVisualMissileSetID;
    uint16 DamageNumberDelay;
    uint32 LowViolenceSpellVisualID;
    uint32 RaidSpellVisualMissileSetID;
    uint16 AreaModel;
    int8 HasMissile;
};

struct SpellVisualAnimEntry
{
    uint32 ID;
    int32 InitialAnimID;
    int32 LoopAnimID;
    uint16 AnimKitID;
};

struct SpellVisualColorEffectEntry
{
    uint32 ID;
    float Duration;
    int32 Color;
    uint8 Flags;
    uint8 Type;
    uint16 RedCurveID;
    uint16 GreenCurveID;
    uint16 BlueCurveID;
    uint16 AlphaCurveID;
    uint16 OpacityCurveID;
    float ColorMultiplier;
    uint32 PositionerID;
};

struct SpellVisualEffectNameEntry
{
    uint32 ID;
    int32 ModelFileDataID;
    float BaseMissileSpeed;
    float Scale;
    float MinAllowedScale;
    float MaxAllowedScale;
    float Alpha;
    uint32 Flags;
    int32 TextureFileDataID;
    float EffectRadius;
    uint32 Type;
    int32 GenericID;
    uint32 RibbonQualityID;
    int32 DissolveEffectID;
    int32 ModelPosition;
};

struct SpellVisualEventEntry
{
    uint32 ID;
    int32 StartEvent;
    int32 EndEvent;
    int32 StartMinOffsetMs;
    int32 StartMaxOffsetMs;
    int32 EndMinOffsetMs;
    int32 EndMaxOffsetMs;
    int32 TargetType;
    int32 SpellVisualKitID;
    int32 SpellVisualID;
};

struct SpellVisualKitEntry
{
    uint32 ID;
    int32 Flags;
    float FallbackPriority;
    uint32 FallbackSpellVisualKitID;
    uint16 DelayMin;
    uint16 DelayMax;
};

struct SpellVisualKitAreaModelEntry
{
    uint32 ID;
    int32 ModelFileDataID;
    uint8 Flags;
    uint16 LifeTime;
    float EmissionRate;
    float Spacing;
    float ModelScale;
};

struct SpellVisualKitEffectEntry
{
    uint32 ID;
    int32 EffectType;
    int32 Effect;
    int32 ParentSpellVisualKitID;
};

struct SpellVisualKitModelAttachEntry
{
    float Offset[3];
    float OffsetVariation[3];
    uint32 ID;
    uint16 SpellVisualEffectNameID;
    int8 AttachmentID;
    uint16 PositionerID;
    float Yaw;
    float Pitch;
    float Roll;
    float YawVariation;
    float PitchVariation;
    float RollVariation;
    float Scale;
    float ScaleVariation;
    int16 StartAnimID;
    int16 AnimID;
    int16 EndAnimID;
    uint16 AnimKitID;
    uint8 Flags;
    uint32 LowDefModelAttachID;
    float StartDelay;
    int32 ParentSpellVisualKitID;
};

struct SpellVisualMissileEntry
{
    float CastOffset[3];
    float ImpactOffset[3];
    uint32 ID;
    uint16 SpellVisualEffectNameID;
    uint32 SoundEntriesID;
    int8 Attachment;
    int8 DestinationAttachment;
    uint16 CastPositionerID;
    uint16 ImpactPositionerID;
    int32 FollowGroundHeight;
    uint32 FollowGroundDropSpeed;
    uint16 FollowGroundApproach;
    uint32 Flags;
    uint16 SpellMissileMotionID;
    uint32 AnimKitID;
    uint16 SpellVisualMissileSetID;
};

struct SpellXDescriptionVariablesEntry
{
    uint32 ID;
    int32 SpellID;
    int32 SpellDescriptionVariablesID;
};

struct SpellXSpellVisualEntry
{
    uint32 ID;
    uint8 DifficultyID;
    uint32 SpellVisualID;
    float Probability;
    uint8 Flags;
    uint8 Priority;
    int32 SpellIconFileID;
    int32 ActiveIconFileID;
    uint16 ViewerUnitConditionID;
    uint32 ViewerPlayerConditionID;
    uint16 CasterUnitConditionID;
    uint32 CasterPlayerConditionID;
    int32 SpellID;
};

struct StableSlotPricesEntry
{
    uint32 ID;
    uint16 Cost;
};

struct StartupFilesEntry
{
    uint32 ID;
    int32 FileDataID;
    int32 Locale;
    int32 BytesRequired;
};

struct StartupStringsEntry
{
    uint32 ID;
    char const* Name;
    LocalizedString* Message;
};

struct StationeryEntry
{
    uint32 ID;
    uint32 ItemID;
    uint8 Flags;
    int32 TextureFileDataID[2];
};

struct SummonPropertiesEntry
{
    uint32 ID;
    int32 Control;
    int32 Faction;
    int32 Title;
    int32 Slot;
    int32 Flags;
};

struct TactKeyEntry
{
    uint32 ID;
    uint8 Key[TACTKEY_SIZE];
};

struct TactKeyLookupEntry
{
    uint32 ID;
    uint8 TACTID[8];
};

struct TalentEntry
{
    uint32 ID;
    LocalizedString* Description;
    uint8 TierID;
    uint8 Flags;
    uint8 ColumnIndex;
    uint8 ClassID;
    uint16 SpecID;
    uint32 SpellID;
    uint32 OverridesSpellID;
    uint16 TabID;
    uint32 RequiredSpellID;
    uint8 CategoryMask[2];
    uint32 SpellRank[9];
    uint16 PrereqTalent[3];
    uint16 PrereqRank[3];
};

struct TalentTabEntry
{
    uint32 ID;
    LocalizedString* Name;
    char const* BackgroundFile;
    int32 OrderIndex;
    int32 RaceMask;
    int32 ClassMask;
};

struct TaxiNodesEntry
{
    LocalizedString* Name;
    DBCPosition3D Pos;
    DBCPosition2D MapOffset;
    DBCPosition2D FlightMapOffset;
    uint32 ID;
    uint16 ContinentID;
    uint16 ConditionID;
    uint16 CharacterBitNumber;
    uint8 Flags;
    int32 UiTextureKitID;
    float Facing;
    uint32 SpecialIconConditionID;
    uint32 VisibilityConditionID;
    int32 MountCreatureID[2];
};

struct TaxiPathEntry
{
    uint32 ID;
    uint16 FromTaxiNode;
    uint16 ToTaxiNode;
    uint32 Cost;
};

struct TaxiPathNodeEntry
{
    DBCPosition3D Loc;
    uint32 ID;
    uint16 PathID;
    int32 NodeIndex;
    uint16 ContinentID;
    uint8 Flags;
    uint32 Delay;
    uint16 ArrivalEventID;
    uint16 DepartureEventID;
};

struct TerrainMaterialEntry
{
    uint32 ID;
    uint8 Shader;
    int32 EnvMapDiffuseFileID;
    int32 EnvMapSpecularFileID;
};

struct TerrainTypeEntry
{
    uint32 ID;
    char const* TerrainDesc;
    uint16 FootstepSprayRun;
    uint16 FootstepSprayWalk;
    uint8 SoundID;
    uint8 Flags;
    int32 TerrainID;
};

struct TerrainTypeSoundsEntry
{
    uint32 ID;
    char const* Name;
};

struct TextureBlendSetEntry
{
    uint32 ID;
    int32 TextureFileDataID[3];
    uint8 SwizzleRed;
    uint8 SwizzleGreen;
    uint8 SwizzleBlue;
    uint8 SwizzleAlpha;
    float TextureScrollRateU[3];
    float TextureScrollRateV[3];
    float TextureScaleU[3];
    float TextureScaleV[3];
    float ModX[4];
};

struct TextureFileDataEntry
{
    uint32 ID;
    uint8 UsageType;
    int32 MaterialResourcesID;
};

struct TotemCategoryEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint8 TotemCategoryType;
    int32 TotemCategoryMask;
};

struct ToyEntry
{
    LocalizedString* SourceText;
    uint32 ID;
    int32 ItemID;
    uint8 Flags;
    int8 SourceTypeEnum;
};

struct TradeSkillCategoryEntry
{
    LocalizedString* Name;
    LocalizedString* HordeName;
    uint32 ID;
    uint16 ParentTradeSkillCategoryID;
    uint16 SkillLineID;
    int16 OrderIndex;
    uint8 Flags;
};

struct TradeSkillItemEntry
{
    uint32 ID;
    uint16 ItemLevel;
    int8 RequiredLevel;
};

struct TransformMatrixEntry
{
    uint32 ID;
    DBCPosition3D Pos;
    float Yaw;
    float Pitch;
    float Roll;
    float Scale;
};

struct TransmogHolidayEntry
{
    uint32 ID;
    int32 RequiredTransmogHoliday;
};

struct TransmogSetEntry
{
    LocalizedString* Name;
    uint32 ID;
    int32 ClassMask;
    uint32 TrackingQuestID;
    int32 Flags;
    uint32 TransmogSetGroupID;
    int32 ItemNameDescriptionID;
    uint16 ParentTransmogSetID;
    uint8 ExpansionID;
    int16 UiOrder;
};

struct TransmogSetGroupEntry
{
    LocalizedString* Name;
    uint32 ID;
};

struct TransmogSetItemEntry
{
    uint32 ID;
    uint32 TransmogSetID;
    uint32 ItemModifiedAppearanceID;
    int32 Flags;
};

struct TransportAnimationEntry
{
    uint32 ID;
    DBCPosition3D Pos;
    uint8 SequenceID;
    uint32 TimeIndex;
    int32 TransportID;
};

struct TransportPhysicsEntry
{
    uint32 ID;
    float WaveAmp;
    float WaveTimeScale;
    float RollAmp;
    float RollTimeScale;
    float PitchAmp;
    float PitchTimeScale;
    float MaxBank;
    float MaxBankTurnSpeed;
    float SpeedDampThresh;
    float SpeedDamp;
};

struct TransportRotationEntry
{
    uint32 ID;
    float Rot[4];
    uint32 TimeIndex;
    int32 GameObjectsID;
};

struct TrophyEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint8 TrophyTypeID;
    uint16 GameObjectDisplayInfoID;
    uint32 PlayerConditionID;
};

struct UiCameraEntry
{
    uint32 ID;
    char const* Name;
    DBCPosition3D Pos;
    float LookAt[3];
    float Up[3];
    uint8 UiCameraTypeID;
    int32 AnimID;
    int16 AnimFrame;
    int8 AnimVariation;
    uint8 Flags;
};

struct UiCameraTypeEntry
{
    uint32 ID;
    char const* Name;
    uint32 Width;
    uint32 Height;
};

struct UiCamFbackTransmogChrRaceEntry
{
    uint32 ID;
    uint8 ChrRaceID;
    uint8 Gender;
    uint8 InventoryType;
    uint8 Variation;
    uint16 UiCameraID;
};

struct UiCamFbackTransmogWeaponEntry
{
    uint32 ID;
    uint8 ItemClass;
    uint8 ItemSubclass;
    uint8 InventoryType;
    uint16 UiCameraID;
};

struct UiCanvasEntry
{
    uint32 ID;
    int16 Width;
    int16 Height;
};

struct UIExpansionDisplayInfoEntry
{
    uint32 ID;
    int32 ExpansionLogo;
    int32 ExpansionBanner;
    uint32 ExpansionLevel;
};

struct UIExpansionDisplayInfoIconEntry
{
    uint32 ID;
    LocalizedString* FeatureDescription;
    int32 ParentID;
    int32 FeatureIcon;
};

struct UiMapEntry
{
    LocalizedString* Name;
    uint32 ID;
    int32 ParentUiMapID;
    int32 Flags;
    int32 System;
    int32 Type;
    uint32 LevelRangeMin;
    uint32 LevelRangeMax;
    int32 BountySetID;
    uint32 BountyDisplayLocation;
    int32 VisibilityPlayerConditionID;
    int8 HelpTextPosition;
    int32 BkgAtlasID;
};

struct UiMapArtEntry
{
    uint32 ID;
    int32 HighlightFileDataID;
    int32 HighlightAtlasID;
    int32 UiMapArtStyleID;
};

struct UiMapArtStyleLayerEntry
{
    uint32 ID;
    uint8 LayerIndex;
    uint16 LayerWidth;
    uint16 LayerHeight;
    uint16 TileWidth;
    uint16 TileHeight;
    float MinScale;
    float MaxScale;
    int32 AdditionalZoomSteps;
    int32 UiMapArtStyleID;
};

struct UiMapArtTileEntry
{
    uint32 ID;
    uint8 RowIndex;
    uint8 ColIndex;
    uint8 LayerIndex;
    int32 FileDataID;
    int32 UiMapArtID;
};

struct UiMapAssignmentEntry
{
    DBCPosition2D UiMin;
    DBCPosition2D UiMax;
    DBCPosition3D Region[2];
    uint32 ID;
    int32 UiMapID;
    int32 OrderIndex;
    int32 MapID;
    int32 AreaID;
    int32 WMODoodadPlacementID;
    int32 WMOGroupID;
};

struct UiMapFogOfWarEntry
{
    uint32 ID;
    int32 UiMapID;
    int32 PlayerConditionID;
    int32 UiMapFogOfWarVisID;
};

struct UiMapFogOfWarVisualizationEntry
{
    uint32 ID;
    uint32 BackgroundAtlasID;
    uint32 MaskAtlasID;
    float MaskScalar;
};

struct UiMapGroupMemberEntry
{
    uint32 ID;
    LocalizedString* Name;
    int32 UiMapGroupID;
    int32 UiMapID;
    int32 FloorIndex;
    int8 RelativeHeightIndex;
};

struct UiMapLinkEntry
{
    DBCPosition2D UiMin;
    DBCPosition2D UiMax;
    uint32 ID;
    int32 ParentUiMapID;
    int32 OrderIndex;
    int32 ChildUiMapID;
};

struct UiMapXMapArtEntry
{
    uint32 ID;
    int32 PhaseID;
    int32 UiMapArtID;
    int32 UiMapID;
};

struct UiModelSceneEntry
{
    uint32 ID;
    int8 UiSystemType;
    uint8 Flags;
};

struct UiModelSceneActorEntry
{
    char const* ScriptTag;
    DBCPosition3D Position;
    uint32 ID;
    uint8 Flags;
    int32 UiModelSceneActorDisplayID;
    float OrientationYaw;
    float OrientationPitch;
    float OrientationRoll;
    float NormalizedScale;
    int32 UiModelSceneID;
};

struct UiModelSceneActorDisplayEntry
{
    uint32 ID;
    uint32 AnimationID;
    uint32 SequenceVariation;
    uint32 AnimKitID;
    uint32 SpellVisualKitID;
    float Alpha;
    float Scale;
    float AnimSpeed;
};

struct UiModelSceneCameraEntry
{
    char const* ScriptTag;
    float Target[3];
    float ZoomedTargetOffset[3];
    uint32 ID;
    uint8 Flags;
    uint8 CameraType;
    float Yaw;
    float Pitch;
    float Roll;
    float ZoomedYawOffset;
    float ZoomedPitchOffset;
    float ZoomedRollOffset;
    float ZoomDistance;
    float MinZoomDistance;
    float MaxZoomDistance;
    int32 UiModelSceneID;
};

struct UiPartyPoseEntry
{
    uint32 ID;
    int32 UiWidgetSetID;
    int32 VictoryUiModelSceneID;
    int32 DefeatUiModelSceneID;
    int32 VictorySoundKitID;
    int32 DefeatSoundKitID;
    int32 MapID;
};

struct UiTextureAtlasEntry
{
    uint32 ID;
    int32 FileDataID;
    uint16 AtlasWidth;
    uint16 AtlasHeight;
    uint8 UiCanvasID;
};

struct UiTextureAtlasElementEntry
{
    char const* Name;
    uint32 ID;
};

struct UiTextureAtlasMemberEntry
{
    char const* CommittedName;
    uint32 ID;
    uint16 UiTextureAtlasID;
    int16 CommittedLeft;
    int16 CommittedRight;
    int16 CommittedTop;
    int16 CommittedBottom;
    uint16 UiTextureAtlasElementID;
    int8 CommittedFlags;
    uint8 UiCanvasID;
};

struct UiTextureKitEntry
{
    uint32 ID;
    char const* KitPrefix;
};

struct UiWidgetEntry
{
    uint32 ID;
    char const* WidgetTag;
    uint16 ParentSetID;
    int32 VisID;
    int32 MapID;
    int32 PlayerConditionID;
    uint32 OrderIndex;
};

struct UiWidgetConstantSourceEntry
{
    uint32 ID;
    uint16 ReqID;
    int32 Value;
    uint16 ParentWidgetID;
};

struct UiWidgetDataSourceEntry
{
    uint32 ID;
    uint16 SourceID;
    int8 SourceType;
    uint16 ReqID;
    uint16 ParentWidgetID;
};

struct UiWidgetStringSourceEntry
{
    uint32 ID;
    LocalizedString* Value;
    uint16 ReqID;
    uint16 ParentWidgetID;
};

struct UiWidgetVisualizationEntry
{
    uint32 ID;
    int8 VisType;
    int32 TextureKit;
    int32 FrameTextureKit;
    int16 SizeSetting;
};

struct UnitBloodEntry
{
    uint32 ID;
    uint32 CombatBloodSpurtFront[2];
    uint32 CombatBloodSpurtBack[2];
};

struct UnitBloodLevelsEntry
{
    uint32 ID;
    uint8 Violencelevel[3];
};

struct UnitConditionEntry
{
    uint32 ID;
    uint8 Flags;
    uint8 Variable[8];
    int8 Op[8];
    int32 Value[8];
};

struct UnitPowerBarEntry
{
    uint32 ID;
    LocalizedString* Name;
    LocalizedString* Cost;
    LocalizedString* OutOfError;
    LocalizedString* ToolTip;
    uint32 MinPower;
    uint32 MaxPower;
    uint16 StartPower;
    uint8 CenterPower;
    float RegenerationPeace;
    float RegenerationCombat;
    uint8 BarType;
    uint16 Flags;
    float StartInset;
    float EndInset;
    int32 FileDataID[6];
    int32 Color[6];
};

struct VehicleEntry
{
    uint32 ID;
    int32 Flags;
    uint8 FlagsB;
    float TurnSpeed;
    float PitchSpeed;
    float PitchMin;
    float PitchMax;
    float MouseLookOffsetPitch;
    float CameraFadeDistScalarMin;
    float CameraFadeDistScalarMax;
    float CameraPitchOffset;
    float FacingLimitRight;
    float FacingLimitLeft;
    float CameraYawOffset;
    uint8 UiLocomotionType;
    uint16 VehicleUIIndicatorID;
    int32 MissileTargetingID;
    uint16 SeatID[8];
    uint16 PowerDisplayID[3];
};

struct VehicleSeatEntry
{
    uint32 ID;
    DBCPosition3D AttachmentOffset;
    DBCPosition3D CameraOffset;
    int32 Flags;
    int32 FlagsB;
    int32 FlagsC;
    int8 AttachmentID;
    float EnterPreDelay;
    float EnterSpeed;
    float EnterGravity;
    float EnterMinDuration;
    float EnterMaxDuration;
    float EnterMinArcHeight;
    float EnterMaxArcHeight;
    int32 EnterAnimStart;
    int32 EnterAnimLoop;
    int32 RideAnimStart;
    int32 RideAnimLoop;
    int32 RideUpperAnimStart;
    int32 RideUpperAnimLoop;
    float ExitPreDelay;
    float ExitSpeed;
    float ExitGravity;
    float ExitMinDuration;
    float ExitMaxDuration;
    float ExitMinArcHeight;
    float ExitMaxArcHeight;
    int32 ExitAnimStart;
    int32 ExitAnimLoop;
    int32 ExitAnimEnd;
    int16 VehicleEnterAnim;
    int8 VehicleEnterAnimBone;
    int16 VehicleExitAnim;
    int8 VehicleExitAnimBone;
    int16 VehicleRideAnimLoop;
    int8 VehicleRideAnimLoopBone;
    int8 PassengerAttachmentID;
    float PassengerYaw;
    float PassengerPitch;
    float PassengerRoll;
    float VehicleEnterAnimDelay;
    float VehicleExitAnimDelay;
    int8 VehicleAbilityDisplay;
    uint32 EnterUISoundID;
    uint32 ExitUISoundID;
    int32 UiSkinFileDataID;
    float CameraEnteringDelay;
    float CameraEnteringDuration;
    float CameraExitingDelay;
    float CameraExitingDuration;
    float CameraPosChaseRate;
    float CameraFacingChaseRate;
    float CameraEnteringZoom;
    float CameraSeatZoomMin;
    float CameraSeatZoomMax;
    int16 EnterAnimKitID;
    int16 RideAnimKitID;
    int16 ExitAnimKitID;
    int16 VehicleEnterAnimKitID;
    int16 VehicleRideAnimKitID;
    int16 VehicleExitAnimKitID;
    int16 CameraModeID;

    bool CanEnterOrExit() const
    {
        return ((Flags & VEHICLE_SEAT_FLAG_CAN_ENTER_OR_EXIT) != 0 ||
            //If it has anmation for enter/ride, means it can be entered/exited by logic
            (Flags & (VEHICLE_SEAT_FLAG_HAS_LOWER_ANIM_FOR_ENTER | VEHICLE_SEAT_FLAG_HAS_LOWER_ANIM_FOR_RIDE)) != 0);
    }
    bool CanSwitchFromSeat() const { return (Flags & VEHICLE_SEAT_FLAG_CAN_SWITCH) != 0; }
    bool IsUsableByOverride() const
    {
        return (Flags & (VEHICLE_SEAT_FLAG_UNCONTROLLED | VEHICLE_SEAT_FLAG_UNK18)
            || (FlagsB & (VEHICLE_SEAT_FLAG_B_USABLE_FORCED | VEHICLE_SEAT_FLAG_B_USABLE_FORCED_2 |
                VEHICLE_SEAT_FLAG_B_USABLE_FORCED_3 | VEHICLE_SEAT_FLAG_B_USABLE_FORCED_4)));
    }
    bool IsEjectable() const { return (FlagsB & VEHICLE_SEAT_FLAG_B_EJECTABLE) != 0; }
};

struct VehicleUIIndicatorEntry
{
    uint32 ID;
    int32 BackgroundTextureFileID;
};

struct VehicleUIIndSeatEntry
{
    uint32 ID;
    uint8 VirtualSeatIndex;
    float XPos;
    float YPos;
    uint16 VehicleUIIndicatorID;
};

struct VignetteEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint32 PlayerConditionID;
    uint32 VisibleTrackingQuestID;
    uint32 QuestFeedbackEffectID;
    uint32 Flags;
    float MaxHeight;
    float MinHeight;
    int8 VignetteType;
    int32 RewardQuestID;
};

struct VirtualAttachmentEntry
{
    uint32 ID;
    char const* Name;
    int16 PositionerID;
};

struct VirtualAttachmentCustomizationEntry
{
    uint32 ID;
    int16 VirtualAttachmentID;
    int32 FileDataID;
    int16 PositionerID;
};

struct VocalUISoundsEntry
{
    uint32 ID;
    uint8 VocalUIEnum;
    uint8 RaceID;
    uint8 ClassID;
    uint32 NormalSoundID[2];
};

struct WbAccessControlListEntry
{
    uint32 ID;
    char const* URL;
    uint16 GrantFlags;
    uint8 RevokeFlags;
    uint8 WowEditInternal;
    uint8 RegionID;
};

struct WbCertWhitelistEntry
{
    uint32 ID;
    char const* Domain;
    uint8 GrantAccess;
    uint8 RevokeAccess;
    uint8 WowEditInternal;
};

struct WeaponImpactSoundsEntry
{
    uint32 ID;
    uint8 WeaponSubClassID;
    uint8 ParrySoundType;
    uint8 ImpactSource;
    uint32 ImpactSoundID[11];
    uint32 CritImpactSoundID[11];
    uint32 PierceImpactSoundID[11];
    uint32 PierceCritImpactSoundID[11];
};

struct WeaponSwingSounds2Entry
{
    uint32 ID;
    uint8 SwingType;
    uint8 Crit;
    uint32 SoundID;
};

struct WeaponTrailEntry
{
    uint32 ID;
    int32 FileDataID;
    float Roll;
    float Pitch;
    float Yaw;
    int32 TextureFileDataID[3];
    float TextureScrollRateU[3];
    float TextureScrollRateV[3];
    float TextureScaleU[3];
    float TextureScaleV[3];
};

struct WeaponTrailModelDefEntry
{
    uint32 ID;
    int32 LowDefFileDataID;
    uint16 WeaponTrailID;
    uint16 AnimEnumID;
};

struct WeaponTrailParamEntry
{
    uint32 ID;
    uint8 Hand;
    float Duration;
    float FadeOutTime;
    float EdgeLifeSpan;
    float InitialDelay;
    float SmoothSampleAngle;
    int8 OverrideAttachTop;
    int8 OverrideAttachBot;
    uint8 Flags;
    uint16 WeaponTrailID;
};

struct WeatherEntry
{
    uint32 ID;
    uint8 Type;
    float TransitionSkyBox;
    uint32 AmbienceID;
    uint16 SoundAmbienceID;
    uint8 EffectType;
    int32 EffectTextureFileDataID;
    uint8 WindSettingsID;
    float Scale;
    float Volatility;
    float TwinkleIntensity;
    float FallModifier;
    float RotationalSpeed;
    int32 ParticulateFileDataID;
    float VolumeEdgeFadeStart;
    int32 OverrideColor;
    float OverrideColorIntensity;
    float OverrideCount;
    float OverrideOpacity;
    int32 VolumeFlags;
    int32 LightningID;
    float Intensity[2];
    float EffectColor[3];
};

struct WeatherXParticulateEntry
{
    uint32 ID;
    int32 FileDataID;
    int32 ParentWeatherID;
};

struct WindSettingsEntry
{
    uint32 ID;
    float BaseDir[3];
    float VarianceDir[3];
    float MaxStepDir[3];
    float BaseMag;
    float VarianceMagOver;
    float VarianceMagUnder;
    float MaxStepMag;
    float Frequency;
    float Duration;
    uint8 Flags;
};

struct WMOAreaTableEntry
{
    LocalizedString* AreaName;
    uint32 ID;
    uint16 WMOID;
    uint8 NameSetID;
    int32 WMOGroupID;
    uint8 SoundProviderPref;
    uint8 SoundProviderPrefUnderwater;
    uint16 AmbienceID;
    uint16 UwAmbience;
    uint16 ZoneMusic;
    uint32 UwZoneMusic;
    uint16 IntroSound;
    uint16 UwIntroSound;
    uint16 AreaTableID;
    uint8 Flags;
};

struct WMOMinimapTextureEntry
{
    uint32 ID;
    uint16 GroupNum;
    uint8 BlockX;
    uint8 BlockY;
    int32 FileDataID;
    int16 WMOID;
};

struct WorldBossLockoutEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint16 TrackingQuestID;
};

struct WorldChunkSoundsEntry
{
    uint32 ID;
    uint16 MapID;
    int32 SoundOverrideID;
    uint8 ChunkX;
    uint8 ChunkY;
    uint8 SubchunkX;
    uint8 SubchunkY;
};

struct WorldEffectEntry
{
    uint32 ID;
    uint32 QuestFeedbackEffectID;
    uint8 WhenToDisplay;
    uint8 TargetType;
    int32 TargetAsset;
    uint32 PlayerConditionID;
    uint16 CombatConditionID;
};

struct WorldElapsedTimerEntry
{
    uint32 ID;
    LocalizedString* Name;
    uint8 Type;
    uint8 Flags;
};

struct WorldMapOverlayEntry
{
    uint32 ID;
    uint32 UiMapArtID;
    uint16 TextureWidth;
    uint16 TextureHeight;
    int32 OffsetX;
    int32 OffsetY;
    int32 HitRectTop;
    int32 HitRectBottom;
    int32 HitRectLeft;
    int32 HitRectRight;
    uint32 PlayerConditionID;
    uint32 Flags;
    uint32 AreaID[MAX_WORLD_MAP_OVERLAY_AREA_IDX];
};

struct WorldMapOverlayTileEntry
{
    uint32 ID;
    uint8 RowIndex;
    uint8 ColIndex;
    uint8 LayerIndex;
    int32 FileDataID;
    int32 WorldMapOverlayID;
};

struct WorldStateExpressionEntry
{
    uint32 ID;
    char const* Expression;
};

struct WorldStateUIEntry
{
    char const* Icon;
    LocalizedString* String;
    LocalizedString* Tooltip;
    LocalizedString* DynamicTooltip;
    char const* ExtendedUI;
    uint32 ID;
    int16 MapID;
    uint16 AreaID;
    uint16 StateVariable;
    uint8 Type;
    int32 DynamicIconFileID;
    int32 DynamicFlashIconFileID;
    uint8 OrderIndex;
    uint8 PhaseUseFlags;
    uint16 PhaseID;
    uint16 PhaseGroupID;
    uint16 ExtendedUIStateVariable[3];
};

struct WorldStateZoneSoundsEntry
{
    uint32 ID;
    uint16 WorldStateID;
    uint16 WorldStateValue;
    uint16 AreaID;
    uint32 WMOAreaID;
    uint16 ZoneIntroMusicID;
    uint16 ZoneMusicID;
    uint16 SoundAmbienceID;
    uint8 SoundProviderPreferencesID;
};

struct WorldPVPAreaEntry
{
    uint32 ID;
    uint16 AreaID;
    uint16 NextTimeworldstate;
    uint16 GameTimeworldstate;
    uint16 BattlePopulatetime;
    uint8 MinLevel;
    uint8 MaxLevel;
    int16 MapID;
};

struct ZoneIntroMusicTableEntry
{
    uint32 ID;
    char const* Name;
    uint32 SoundID;
    uint8 Priority;
    uint16 MinDelayMinutes;
};

struct ZoneLightEntry
{
    uint32 ID;
    char const* Name;
    uint16 MapID;
    uint16 LightID;
    uint8 Flags;
};

struct ZoneLightPointEntry
{
    uint32 ID;
    DBCPosition2D Pos;
    uint8 PointOrder;
    uint16 ZoneLightID;
};

struct ZoneMusicEntry
{
    uint32 ID;
    char const* SetName;
    uint32 SilenceIntervalMin[2];
    uint32 SilenceIntervalMax[2];
    uint32 Sounds[2];
};

struct ZoneStoryEntry
{
    uint32 ID;
    uint8 PlayerFactionGroupID;
    uint32 DisplayAchievementID;
    uint32 DisplayUIMapID;
    int32 PlayerUIMapID;
};

#pragma pack(pop)
#endif
