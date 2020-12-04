/*
 * Copyright (C) 2008-2020 TrinityCore <https://www.trinitycore.org/>
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

#include "Banner.h"
#include "Common.h"
#include "DB2Metadata.h"
#include "DB2LoadInfo.h"
#include "DB2Structure.h"
#include "DB2Store.h"
#include "HotfixDatabase.h"
#include "Log.h"
#include "StringFormat.h"
#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <iostream>

DB2Storage<AnimationDataEntry>                  sAnimationDataStore("AnimationData.db2", AnimationDataLoadInfo::Instance());
DB2Storage<AnimKitEntry>                        sAnimKitStore("AnimKit.db2", AnimKitLoadInfo::Instance());
DB2Storage<AreaGroupMemberEntry>                sAreaGroupMemberStore("AreaGroupMember.db2", AreaGroupMemberLoadInfo::Instance());
DB2Storage<AreaTableEntry>                      sAreaTableStore("AreaTable.db2", AreaTableLoadInfo::Instance());
DB2Storage<AreaTriggerEntry>                    sAreaTriggerStore("AreaTrigger.db2", AreaTriggerLoadInfo::Instance());
DB2Storage<ArmorLocationEntry>                  sArmorLocationStore("ArmorLocation.db2", ArmorLocationLoadInfo::Instance());
DB2Storage<ArtifactEntry>                       sArtifactStore("Artifact.db2", ArtifactLoadInfo::Instance());
DB2Storage<ArtifactAppearanceEntry>             sArtifactAppearanceStore("ArtifactAppearance.db2", ArtifactAppearanceLoadInfo::Instance());
DB2Storage<ArtifactAppearanceSetEntry>          sArtifactAppearanceSetStore("ArtifactAppearanceSet.db2", ArtifactAppearanceSetLoadInfo::Instance());
DB2Storage<ArtifactCategoryEntry>               sArtifactCategoryStore("ArtifactCategory.db2", ArtifactCategoryLoadInfo::Instance());
DB2Storage<ArtifactPowerEntry>                  sArtifactPowerStore("ArtifactPower.db2", ArtifactPowerLoadInfo::Instance());
DB2Storage<ArtifactPowerLinkEntry>              sArtifactPowerLinkStore("ArtifactPowerLink.db2", ArtifactPowerLinkLoadInfo::Instance());
DB2Storage<ArtifactPowerPickerEntry>            sArtifactPowerPickerStore("ArtifactPowerPicker.db2", ArtifactPowerPickerLoadInfo::Instance());
DB2Storage<ArtifactPowerRankEntry>              sArtifactPowerRankStore("ArtifactPowerRank.db2", ArtifactPowerRankLoadInfo::Instance());
DB2Storage<ArtifactQuestXPEntry>                sArtifactQuestXPStore("ArtifactQuestXP.db2", ArtifactQuestXpLoadInfo::Instance());
DB2Storage<ArtifactTierEntry>                   sArtifactTierStore("ArtifactTier.db2", ArtifactTierLoadInfo::Instance());
DB2Storage<ArtifactUnlockEntry>                 sArtifactUnlockStore("ArtifactUnlock.db2", ArtifactUnlockLoadInfo::Instance());
DB2Storage<AuctionHouseEntry>                   sAuctionHouseStore("AuctionHouse.db2", AuctionHouseLoadInfo::Instance());
DB2Storage<BankBagSlotPricesEntry>              sBankBagSlotPricesStore("BankBagSlotPrices.db2", BankBagSlotPricesLoadInfo::Instance());
DB2Storage<BannedAddonsEntry>                   sBannedAddonsStore("BannedAddons.db2", BannedAddonsLoadInfo::Instance());
DB2Storage<BarberShopStyleEntry>                sBarberShopStyleStore("BarberShopStyle.db2", BarberShopStyleLoadInfo::Instance());
DB2Storage<BattlePetBreedQualityEntry>          sBattlePetBreedQualityStore("BattlePetBreedQuality.db2", BattlePetBreedQualityLoadInfo::Instance());
DB2Storage<BattlePetBreedStateEntry>            sBattlePetBreedStateStore("BattlePetBreedState.db2", BattlePetBreedStateLoadInfo::Instance());
DB2Storage<BattlePetSpeciesEntry>               sBattlePetSpeciesStore("BattlePetSpecies.db2", BattlePetSpeciesLoadInfo::Instance());
DB2Storage<BattlePetSpeciesStateEntry>          sBattlePetSpeciesStateStore("BattlePetSpeciesState.db2", BattlePetSpeciesStateLoadInfo::Instance());
DB2Storage<BattlemasterListEntry>               sBattlemasterListStore("BattlemasterList.db2", BattlemasterListLoadInfo::Instance());
DB2Storage<Cfg_RegionsEntry>                    sCfgRegionsStore("Cfg_Regions.db2", CfgRegionsLoadInfo::Instance());
DB2Storage<CharacterFacialHairStylesEntry>      sCharacterFacialHairStylesStore("CharacterFacialHairStyles.db2", CharacterFacialHairStylesLoadInfo::Instance());
DB2Storage<CharBaseSectionEntry>                sCharBaseSectionStore("CharBaseSection.db2", CharBaseSectionLoadInfo::Instance());
DB2Storage<CharSectionsEntry>                   sCharSectionsStore("CharSections.db2", CharSectionsLoadInfo::Instance());
DB2Storage<CharStartOutfitEntry>                sCharStartOutfitStore("CharStartOutfit.db2", CharStartOutfitLoadInfo::Instance());
DB2Storage<CharTitlesEntry>                     sCharTitlesStore("CharTitles.db2", CharTitlesLoadInfo::Instance());
DB2Storage<ChatChannelsEntry>                   sChatChannelsStore("ChatChannels.db2", ChatChannelsLoadInfo::Instance());
DB2Storage<ChrClassesEntry>                     sChrClassesStore("ChrClasses.db2", ChrClassesLoadInfo::Instance());
DB2Storage<ChrClassesXPowerTypesEntry>          sChrClassesXPowerTypesStore("ChrClassesXPowerTypes.db2", ChrClassesXPowerTypesLoadInfo::Instance());
DB2Storage<ChrRacesEntry>                       sChrRacesStore("ChrRaces.db2", ChrRacesLoadInfo::Instance());
DB2Storage<ChrSpecializationEntry>              sChrSpecializationStore("ChrSpecialization.db2", ChrSpecializationLoadInfo::Instance());
DB2Storage<CinematicCameraEntry>                sCinematicCameraStore("CinematicCamera.db2", CinematicCameraLoadInfo::Instance());
DB2Storage<CinematicSequencesEntry>             sCinematicSequencesStore("CinematicSequences.db2", CinematicSequencesLoadInfo::Instance());
DB2Storage<ContentTuningEntry>                  sContentTuningStore("ContentTuning.db2", ContentTuningLoadInfo::Instance());
DB2Storage<ConversationLineEntry>               sConversationLineStore("ConversationLine.db2", ConversationLineLoadInfo::Instance());
DB2Storage<CreatureDisplayInfoEntry>            sCreatureDisplayInfoStore("CreatureDisplayInfo.db2", CreatureDisplayInfoLoadInfo::Instance());
DB2Storage<CreatureDisplayInfoExtraEntry>       sCreatureDisplayInfoExtraStore("CreatureDisplayInfoExtra.db2", CreatureDisplayInfoExtraLoadInfo::Instance());
DB2Storage<CreatureFamilyEntry>                 sCreatureFamilyStore("CreatureFamily.db2", CreatureFamilyLoadInfo::Instance());
DB2Storage<CreatureModelDataEntry>              sCreatureModelDataStore("CreatureModelData.db2", CreatureModelDataLoadInfo::Instance());
DB2Storage<CreatureTypeEntry>                   sCreatureTypeStore("CreatureType.db2", CreatureTypeLoadInfo::Instance());
DB2Storage<CriteriaEntry>                       sCriteriaStore("Criteria.db2", CriteriaLoadInfo::Instance());
DB2Storage<CriteriaTreeEntry>                   sCriteriaTreeStore("CriteriaTree.db2", CriteriaTreeLoadInfo::Instance());
DB2Storage<CurrencyTypesEntry>                  sCurrencyTypesStore("CurrencyTypes.db2", CurrencyTypesLoadInfo::Instance());
DB2Storage<CurveEntry>                          sCurveStore("Curve.db2", CurveLoadInfo::Instance());
DB2Storage<CurvePointEntry>                     sCurvePointStore("CurvePoint.db2", CurvePointLoadInfo::Instance());
DB2Storage<DestructibleModelDataEntry>          sDestructibleModelDataStore("DestructibleModelData.db2", DestructibleModelDataLoadInfo::Instance());
DB2Storage<DifficultyEntry>                     sDifficultyStore("Difficulty.db2", DifficultyLoadInfo::Instance());
DB2Storage<DungeonEncounterEntry>               sDungeonEncounterStore("DungeonEncounter.db2", DungeonEncounterLoadInfo::Instance());
DB2Storage<DurabilityCostsEntry>                sDurabilityCostsStore("DurabilityCosts.db2", DurabilityCostsLoadInfo::Instance());
DB2Storage<DurabilityQualityEntry>              sDurabilityQualityStore("DurabilityQuality.db2", DurabilityQualityLoadInfo::Instance());
DB2Storage<EmotesEntry>                         sEmotesStore("Emotes.db2", EmotesLoadInfo::Instance());
DB2Storage<EmotesTextEntry>                     sEmotesTextStore("EmotesText.db2", EmotesTextLoadInfo::Instance());
DB2Storage<EmotesTextSoundEntry>                sEmotesTextSoundStore("EmotesTextSound.db2", EmotesTextSoundLoadInfo::Instance());
DB2Storage<ExpectedStatEntry>                   sExpectedStatStore("ExpectedStat.db2", ExpectedStatLoadInfo::Instance());
DB2Storage<ExpectedStatModEntry>                sExpectedStatModStore("ExpectedStatMod.db2", ExpectedStatModLoadInfo::Instance());
DB2Storage<FactionEntry>                        sFactionStore("Faction.db2", FactionLoadInfo::Instance());
DB2Storage<FactionTemplateEntry>                sFactionTemplateStore("FactionTemplate.db2", FactionTemplateLoadInfo::Instance());
DB2Storage<GameObjectDisplayInfoEntry>          sGameObjectDisplayInfoStore("GameObjectDisplayInfo.db2", GameobjectDisplayInfoLoadInfo::Instance());
DB2Storage<GameObjectsEntry>                    sGameObjectsStore("GameObjects.db2", GameobjectsLoadInfo::Instance());
DB2Storage<GemPropertiesEntry>                  sGemPropertiesStore("GemProperties.db2", GemPropertiesLoadInfo::Instance());
DB2Storage<GlyphBindableSpellEntry>             sGlyphBindableSpellStore("GlyphBindableSpell.db2", GlyphBindableSpellLoadInfo::Instance());
DB2Storage<GlyphPropertiesEntry>                sGlyphPropertiesStore("GlyphProperties.db2", GlyphPropertiesLoadInfo::Instance());
DB2Storage<GlyphRequiredSpecEntry>              sGlyphRequiredSpecStore("GlyphRequiredSpec.db2", GlyphRequiredSpecLoadInfo::Instance());
DB2Storage<GuildColorBackgroundEntry>           sGuildColorBackgroundStore("GuildColorBackground.db2", GuildColorBackgroundLoadInfo::Instance());
DB2Storage<GuildColorBorderEntry>               sGuildColorBorderStore("GuildColorBorder.db2", GuildColorBorderLoadInfo::Instance());
DB2Storage<GuildColorEmblemEntry>               sGuildColorEmblemStore("GuildColorEmblem.db2", GuildColorEmblemLoadInfo::Instance());
DB2Storage<GuildPerkSpellsEntry>                sGuildPerkSpellsStore("GuildPerkSpells.db2", GuildPerkSpellsLoadInfo::Instance());
DB2Storage<HeirloomEntry>                       sHeirloomStore("Heirloom.db2", HeirloomLoadInfo::Instance());
DB2Storage<HolidaysEntry>                       sHolidaysStore("Holidays.db2", HolidaysLoadInfo::Instance());
DB2Storage<ImportPriceArmorEntry>               sImportPriceArmorStore("ImportPriceArmor.db2", ImportPriceArmorLoadInfo::Instance());
DB2Storage<ImportPriceQualityEntry>             sImportPriceQualityStore("ImportPriceQuality.db2", ImportPriceQualityLoadInfo::Instance());
DB2Storage<ImportPriceShieldEntry>              sImportPriceShieldStore("ImportPriceShield.db2", ImportPriceShieldLoadInfo::Instance());
DB2Storage<ImportPriceWeaponEntry>              sImportPriceWeaponStore("ImportPriceWeapon.db2", ImportPriceWeaponLoadInfo::Instance());
DB2Storage<ItemAppearanceEntry>                 sItemAppearanceStore("ItemAppearance.db2", ItemAppearanceLoadInfo::Instance());
DB2Storage<ItemArmorQualityEntry>               sItemArmorQualityStore("ItemArmorQuality.db2", ItemArmorQualityLoadInfo::Instance());
DB2Storage<ItemArmorShieldEntry>                sItemArmorShieldStore("ItemArmorShield.db2", ItemArmorShieldLoadInfo::Instance());
DB2Storage<ItemArmorTotalEntry>                 sItemArmorTotalStore("ItemArmorTotal.db2", ItemArmorTotalLoadInfo::Instance());
DB2Storage<ItemBagFamilyEntry>                  sItemBagFamilyStore("ItemBagFamily.db2", ItemBagFamilyLoadInfo::Instance());
DB2Storage<ItemBonusEntry>                      sItemBonusStore("ItemBonus.db2", ItemBonusLoadInfo::Instance());
DB2Storage<ItemBonusListLevelDeltaEntry>        sItemBonusListLevelDeltaStore("ItemBonusListLevelDelta.db2", ItemBonusListLevelDeltaLoadInfo::Instance());
DB2Storage<ItemBonusTreeNodeEntry>              sItemBonusTreeNodeStore("ItemBonusTreeNode.db2", ItemBonusTreeNodeLoadInfo::Instance());
DB2Storage<ItemChildEquipmentEntry>             sItemChildEquipmentStore("ItemChildEquipment.db2", ItemChildEquipmentLoadInfo::Instance());
DB2Storage<ItemClassEntry>                      sItemClassStore("ItemClass.db2", ItemClassLoadInfo::Instance());
DB2Storage<ItemCurrencyCostEntry>               sItemCurrencyCostStore("ItemCurrencyCost.db2", ItemCurrencyCostLoadInfo::Instance());
DB2Storage<ItemDamageAmmoEntry>                 sItemDamageAmmoStore("ItemDamageAmmo.db2", ItemDamageAmmoLoadInfo::Instance());
DB2Storage<ItemDamageOneHandEntry>              sItemDamageOneHandStore("ItemDamageOneHand.db2", ItemDamageOneHandLoadInfo::Instance());
DB2Storage<ItemDamageOneHandCasterEntry>        sItemDamageOneHandCasterStore("ItemDamageOneHandCaster.db2", ItemDamageOneHandCasterLoadInfo::Instance());
DB2Storage<ItemDamageTwoHandEntry>              sItemDamageTwoHandStore("ItemDamageTwoHand.db2", ItemDamageTwoHandLoadInfo::Instance());
DB2Storage<ItemDamageTwoHandCasterEntry>        sItemDamageTwoHandCasterStore("ItemDamageTwoHandCaster.db2", ItemDamageTwoHandCasterLoadInfo::Instance());
DB2Storage<ItemDisenchantLootEntry>             sItemDisenchantLootStore("ItemDisenchantLoot.db2", ItemDisenchantLootLoadInfo::Instance());
DB2Storage<ItemEffectEntry>                     sItemEffectStore("ItemEffect.db2", ItemEffectLoadInfo::Instance());
DB2Storage<ItemEntry>                           sItemStore("Item.db2", ItemLoadInfo::Instance());
DB2Storage<ItemExtendedCostEntry>               sItemExtendedCostStore("ItemExtendedCost.db2", ItemExtendedCostLoadInfo::Instance());
DB2Storage<ItemLevelSelectorEntry>              sItemLevelSelectorStore("ItemLevelSelector.db2", ItemLevelSelectorLoadInfo::Instance());
DB2Storage<ItemLevelSelectorQualityEntry>       sItemLevelSelectorQualityStore("ItemLevelSelectorQuality.db2", ItemLevelSelectorQualityLoadInfo::Instance());
DB2Storage<ItemLevelSelectorQualitySetEntry>    sItemLevelSelectorQualitySetStore("ItemLevelSelectorQualitySet.db2", ItemLevelSelectorQualitySetLoadInfo::Instance());
DB2Storage<ItemLimitCategoryEntry>              sItemLimitCategoryStore("ItemLimitCategory.db2", ItemLimitCategoryLoadInfo::Instance());
DB2Storage<ItemLimitCategoryConditionEntry>     sItemLimitCategoryConditionStore("ItemLimitCategoryCondition.db2", ItemLimitCategoryConditionLoadInfo::Instance());
DB2Storage<ItemModifiedAppearanceEntry>         sItemModifiedAppearanceStore("ItemModifiedAppearance.db2", ItemModifiedAppearanceLoadInfo::Instance());
DB2Storage<ItemPriceBaseEntry>                  sItemPriceBaseStore("ItemPriceBase.db2", ItemPriceBaseLoadInfo::Instance());
DB2Storage<ItemRandomPropertiesEntry>           sItemRandomPropertiesStore("ItemRandomProperties.db2", ItemRandomPropertiesLoadInfo::Instance());
DB2Storage<ItemRandomSuffixEntry>               sItemRandomSuffixStore("ItemRandomSuffix.db2", ItemRandomSuffixLoadInfo::Instance());
DB2Storage<ItemSearchNameEntry>                 sItemSearchNameStore("ItemSearchName.db2", ItemSearchNameLoadInfo::Instance());
DB2Storage<ItemSetEntry>                        sItemSetStore("ItemSet.db2", ItemSetLoadInfo::Instance());
DB2Storage<ItemSetSpellEntry>                   sItemSetSpellStore("ItemSetSpell.db2", ItemSetSpellLoadInfo::Instance());
DB2Storage<ItemSparseEntry>                     sItemSparseStore("ItemSparse.db2", ItemSparseLoadInfo::Instance());
DB2Storage<ItemSpecEntry>                       sItemSpecStore("ItemSpec.db2", ItemSpecLoadInfo::Instance());
DB2Storage<ItemSpecOverrideEntry>               sItemSpecOverrideStore("ItemSpecOverride.db2", ItemSpecOverrideLoadInfo::Instance());
DB2Storage<ItemUpgradeEntry>                    sItemUpgradeStore("ItemUpgrade.db2", ItemUpgradeLoadInfo::Instance());
DB2Storage<ItemXBonusTreeEntry>                 sItemXBonusTreeStore("ItemXBonusTree.db2", ItemXBonusTreeLoadInfo::Instance());
DB2Storage<KeychainEntry>                       sKeychainStore("Keychain.db2", KeychainLoadInfo::Instance());
DB2Storage<LFGDungeonsEntry>                    sLFGDungeonsStore("LFGDungeons.db2", LfgDungeonsLoadInfo::Instance());
DB2Storage<LightEntry>                          sLightStore("Light.db2", LightLoadInfo::Instance());
DB2Storage<LiquidTypeEntry>                     sLiquidTypeStore("LiquidType.db2", LiquidTypeLoadInfo::Instance());
DB2Storage<LockEntry>                           sLockStore("Lock.db2", LockLoadInfo::Instance());
DB2Storage<MailTemplateEntry>                   sMailTemplateStore("MailTemplate.db2", MailTemplateLoadInfo::Instance());
DB2Storage<MapEntry>                            sMapStore("Map.db2", MapLoadInfo::Instance());
DB2Storage<MapDifficultyEntry>                  sMapDifficultyStore("MapDifficulty.db2", MapDifficultyLoadInfo::Instance());
DB2Storage<ModifierTreeEntry>                   sModifierTreeStore("ModifierTree.db2", ModifierTreeLoadInfo::Instance());
DB2Storage<MountCapabilityEntry>                sMountCapabilityStore("MountCapability.db2", MountCapabilityLoadInfo::Instance());
DB2Storage<MountEntry>                          sMountStore("Mount.db2", MountLoadInfo::Instance());
DB2Storage<MountTypeXCapabilityEntry>           sMountTypeXCapabilityStore("MountTypeXCapability.db2", MountTypeXCapabilityLoadInfo::Instance());
DB2Storage<MountXDisplayEntry>                  sMountXDisplayStore("MountXDisplay.db2", MountXDisplayLoadInfo::Instance());
DB2Storage<MovieEntry>                          sMovieStore("Movie.db2", MovieLoadInfo::Instance());
DB2Storage<NameGenEntry>                        sNameGenStore("NameGen.db2", NameGenLoadInfo::Instance());
DB2Storage<NamesProfanityEntry>                 sNamesProfanityStore("NamesProfanity.db2", NamesProfanityLoadInfo::Instance());
DB2Storage<NamesReservedEntry>                  sNamesReservedStore("NamesReserved.db2", NamesReservedLoadInfo::Instance());
DB2Storage<NamesReservedLocaleEntry>            sNamesReservedLocaleStore("NamesReservedLocale.db2", NamesReservedLocaleLoadInfo::Instance());
DB2Storage<NumTalentsAtLevelEntry>              sNumTalentsAtLevelStore("NumTalentsAtLevel.db2", NumTalentsAtLevelLoadInfo::Instance());
DB2Storage<OverrideSpellDataEntry>              sOverrideSpellDataStore("OverrideSpellData.db2", OverrideSpellDataLoadInfo::Instance());
DB2Storage<PhaseEntry>                          sPhaseStore("Phase.db2", PhaseLoadInfo::Instance());
DB2Storage<PhaseXPhaseGroupEntry>               sPhaseXPhaseGroupStore("PhaseXPhaseGroup.db2", PhaseXPhaseGroupLoadInfo::Instance());
DB2Storage<PlayerConditionEntry>                sPlayerConditionStore("PlayerCondition.db2", PlayerConditionLoadInfo::Instance());
DB2Storage<PowerDisplayEntry>                   sPowerDisplayStore("PowerDisplay.db2", PowerDisplayLoadInfo::Instance());
DB2Storage<PowerTypeEntry>                      sPowerTypeStore("PowerType.db2", PowerTypeLoadInfo::Instance());
DB2Storage<PrestigeLevelInfoEntry>              sPrestigeLevelInfoStore("PrestigeLevelInfo.db2", PrestigeLevelInfoLoadInfo::Instance());
DB2Storage<PVPDifficultyEntry>                  sPVPDifficultyStore("PVPDifficulty.db2", PvpDifficultyLoadInfo::Instance());
DB2Storage<PVPItemEntry>                        sPVPItemStore("PVPItem.db2", PvpItemLoadInfo::Instance());
DB2Storage<PvpTalentEntry>                      sPvpTalentStore("PvpTalent.db2", PvpTalentLoadInfo::Instance());
DB2Storage<PvpTalentCategoryEntry>              sPvpTalentCategoryStore("PvpTalentCategory.db2", PvpTalentCategoryLoadInfo::Instance());
DB2Storage<PvpTalentSlotUnlockEntry>            sPvpTalentSlotUnlockStore("PvpTalentSlotUnlock.db2", PvpTalentSlotUnlockLoadInfo::Instance());
DB2Storage<QuestFactionRewardEntry>             sQuestFactionRewardStore("QuestFactionReward.db2", QuestFactionRewardLoadInfo::Instance());
DB2Storage<QuestMoneyRewardEntry>               sQuestMoneyRewardStore("QuestMoneyReward.db2", QuestMoneyRewardLoadInfo::Instance());
DB2Storage<QuestPackageItemEntry>               sQuestPackageItemStore("QuestPackageItem.db2", QuestPackageItemLoadInfo::Instance());
DB2Storage<QuestSortEntry>                      sQuestSortStore("QuestSort.db2", QuestSortLoadInfo::Instance());
DB2Storage<QuestV2Entry>                        sQuestV2Store("QuestV2.db2", QuestV2LoadInfo::Instance());
DB2Storage<QuestXPEntry>                        sQuestXPStore("QuestXP.db2", QuestXpLoadInfo::Instance());
DB2Storage<RandPropPointsEntry>                 sRandPropPointsStore("RandPropPoints.db2", RandPropPointsLoadInfo::Instance());
DB2Storage<RewardPackEntry>                     sRewardPackStore("RewardPack.db2", RewardPackLoadInfo::Instance());
DB2Storage<RewardPackXCurrencyTypeEntry>        sRewardPackXCurrencyTypeStore("RewardPackXCurrencyType.db2", RewardPackXCurrencyTypeLoadInfo::Instance());
DB2Storage<RewardPackXItemEntry>                sRewardPackXItemStore("RewardPackXItem.db2", RewardPackXItemLoadInfo::Instance());
DB2Storage<RulesetItemUpgradeEntry>             sRulesetItemUpgradeStore("RulesetItemUpgrade.db2", RulesetItemUpgradeLoadInfo::Instance());
DB2Storage<ScalingStatDistributionEntry>        sScalingStatDistributionStore("ScalingStatDistribution.db2", ScalingStatDistributionLoadInfo::Instance());
DB2Storage<ScenarioEntry>                       sScenarioStore("Scenario.db2", ScenarioLoadInfo::Instance());
DB2Storage<ScenarioStepEntry>                   sScenarioStepStore("ScenarioStep.db2", ScenarioStepLoadInfo::Instance());
DB2Storage<SceneScriptEntry>                    sSceneScriptStore("SceneScript.db2", SceneScriptLoadInfo::Instance());
DB2Storage<SceneScriptGlobalTextEntry>          sSceneScriptGlobalTextStore("SceneScriptGlobalText.db2", SceneScriptGlobalTextLoadInfo::Instance());
DB2Storage<SceneScriptPackageEntry>             sSceneScriptPackageStore("SceneScriptPackage.db2", SceneScriptPackageLoadInfo::Instance());
DB2Storage<SceneScriptTextEntry>                sSceneScriptTextStore("SceneScriptText.db2", SceneScriptTextLoadInfo::Instance());
DB2Storage<SkillLineEntry>                      sSkillLineStore("SkillLine.db2", SkillLineLoadInfo::Instance());
DB2Storage<SkillLineAbilityEntry>               sSkillLineAbilityStore("SkillLineAbility.db2", SkillLineAbilityLoadInfo::Instance());
DB2Storage<SkillRaceClassInfoEntry>             sSkillRaceClassInfoStore("SkillRaceClassInfo.db2", SkillRaceClassInfoLoadInfo::Instance());
DB2Storage<SoundKitEntry>                       sSoundKitStore("SoundKit.db2", SoundKitLoadInfo::Instance());
DB2Storage<SpecializationSpellsEntry>           sSpecializationSpellsStore("SpecializationSpells.db2", SpecializationSpellsLoadInfo::Instance());
DB2Storage<SpellAuraOptionsEntry>               sSpellAuraOptionsStore("SpellAuraOptions.db2", SpellAuraOptionsLoadInfo::Instance());
DB2Storage<SpellAuraRestrictionsEntry>          sSpellAuraRestrictionsStore("SpellAuraRestrictions.db2", SpellAuraRestrictionsLoadInfo::Instance());
DB2Storage<SpellCastTimesEntry>                 sSpellCastTimesStore("SpellCastTimes.db2", SpellCastTimesLoadInfo::Instance());
DB2Storage<SpellCastingRequirementsEntry>       sSpellCastingRequirementsStore("SpellCastingRequirements.db2", SpellCastingRequirementsLoadInfo::Instance());
DB2Storage<SpellCategoriesEntry>                sSpellCategoriesStore("SpellCategories.db2", SpellCategoriesLoadInfo::Instance());
DB2Storage<SpellCategoryEntry>                  sSpellCategoryStore("SpellCategory.db2", SpellCategoryLoadInfo::Instance());
DB2Storage<SpellClassOptionsEntry>              sSpellClassOptionsStore("SpellClassOptions.db2", SpellClassOptionsLoadInfo::Instance());
DB2Storage<SpellCooldownsEntry>                 sSpellCooldownsStore("SpellCooldowns.db2", SpellCooldownsLoadInfo::Instance());
DB2Storage<SpellDurationEntry>                  sSpellDurationStore("SpellDuration.db2", SpellDurationLoadInfo::Instance());
DB2Storage<SpellEffectEntry>                    sSpellEffectStore("SpellEffect.db2", SpellEffectLoadInfo::Instance());
DB2Storage<SpellEquippedItemsEntry>             sSpellEquippedItemsStore("SpellEquippedItems.db2", SpellEquippedItemsLoadInfo::Instance());
DB2Storage<SpellFocusObjectEntry>               sSpellFocusObjectStore("SpellFocusObject.db2", SpellFocusObjectLoadInfo::Instance());
DB2Storage<SpellInterruptsEntry>                sSpellInterruptsStore("SpellInterrupts.db2", SpellInterruptsLoadInfo::Instance());
DB2Storage<SpellItemEnchantmentEntry>           sSpellItemEnchantmentStore("SpellItemEnchantment.db2", SpellItemEnchantmentLoadInfo::Instance());
DB2Storage<SpellItemEnchantmentConditionEntry>  sSpellItemEnchantmentConditionStore("SpellItemEnchantmentCondition.db2", SpellItemEnchantmentConditionLoadInfo::Instance());
DB2Storage<SpellLearnSpellEntry>                sSpellLearnSpellStore("SpellLearnSpell.db2", SpellLearnSpellLoadInfo::Instance());
DB2Storage<SpellLevelsEntry>                    sSpellLevelsStore("SpellLevels.db2", SpellLevelsLoadInfo::Instance());
DB2Storage<SpellMiscEntry>                      sSpellMiscStore("SpellMisc.db2", SpellMiscLoadInfo::Instance());
DB2Storage<SpellNameEntry>                      sSpellNameStore("SpellName.db2", SpellNameLoadInfo::Instance());
DB2Storage<SpellPowerEntry>                     sSpellPowerStore("SpellPower.db2", SpellPowerLoadInfo::Instance());
DB2Storage<SpellPowerDifficultyEntry>           sSpellPowerDifficultyStore("SpellPowerDifficulty.db2", SpellPowerDifficultyLoadInfo::Instance());
DB2Storage<SpellProcsPerMinuteEntry>            sSpellProcsPerMinuteStore("SpellProcsPerMinute.db2", SpellProcsPerMinuteLoadInfo::Instance());
DB2Storage<SpellProcsPerMinuteModEntry>         sSpellProcsPerMinuteModStore("SpellProcsPerMinuteMod.db2", SpellProcsPerMinuteModLoadInfo::Instance());
DB2Storage<SpellRadiusEntry>                    sSpellRadiusStore("SpellRadius.db2", SpellRadiusLoadInfo::Instance());
DB2Storage<SpellRangeEntry>                     sSpellRangeStore("SpellRange.db2", SpellRangeLoadInfo::Instance());
DB2Storage<SpellReagentsEntry>                  sSpellReagentsStore("SpellReagents.db2", SpellReagentsLoadInfo::Instance());
DB2Storage<SpellScalingEntry>                   sSpellScalingStore("SpellScaling.db2", SpellScalingLoadInfo::Instance());
DB2Storage<SpellShapeshiftEntry>                sSpellShapeshiftStore("SpellShapeshift.db2", SpellShapeshiftLoadInfo::Instance());
DB2Storage<SpellShapeshiftFormEntry>            sSpellShapeshiftFormStore("SpellShapeshiftForm.db2", SpellShapeshiftFormLoadInfo::Instance());
DB2Storage<SpellTargetRestrictionsEntry>        sSpellTargetRestrictionsStore("SpellTargetRestrictions.db2", SpellTargetRestrictionsLoadInfo::Instance());
DB2Storage<SpellTotemsEntry>                    sSpellTotemsStore("SpellTotems.db2", SpellTotemsLoadInfo::Instance());
DB2Storage<SpellXSpellVisualEntry>              sSpellXSpellVisualStore("SpellXSpellVisual.db2", SpellXSpellVisualLoadInfo::Instance());
DB2Storage<SummonPropertiesEntry>               sSummonPropertiesStore("SummonProperties.db2", SummonPropertiesLoadInfo::Instance());
DB2Storage<TactKeyEntry>                        sTactKeyStore("TactKey.db2", TactKeyLoadInfo::Instance());
DB2Storage<TalentEntry>                         sTalentStore("Talent.db2", TalentLoadInfo::Instance());
DB2Storage<TaxiNodesEntry>                      sTaxiNodesStore("TaxiNodes.db2", TaxiNodesLoadInfo::Instance());
DB2Storage<TaxiPathEntry>                       sTaxiPathStore("TaxiPath.db2", TaxiPathLoadInfo::Instance());
DB2Storage<TaxiPathNodeEntry>                   sTaxiPathNodeStore("TaxiPathNode.db2", TaxiPathNodeLoadInfo::Instance());
DB2Storage<TotemCategoryEntry>                  sTotemCategoryStore("TotemCategory.db2", TotemCategoryLoadInfo::Instance());
DB2Storage<ToyEntry>                            sToyStore("Toy.db2", ToyLoadInfo::Instance());
DB2Storage<TransmogHolidayEntry>                sTransmogHolidayStore("TransmogHoliday.db2", TransmogHolidayLoadInfo::Instance());
DB2Storage<TransmogSetEntry>                    sTransmogSetStore("TransmogSet.db2", TransmogSetLoadInfo::Instance());
DB2Storage<TransmogSetGroupEntry>               sTransmogSetGroupStore("TransmogSetGroup.db2", TransmogSetGroupLoadInfo::Instance());
DB2Storage<TransmogSetItemEntry>                sTransmogSetItemStore("TransmogSetItem.db2", TransmogSetItemLoadInfo::Instance());
DB2Storage<TransportAnimationEntry>             sTransportAnimationStore("TransportAnimation.db2", TransportAnimationLoadInfo::Instance());
DB2Storage<TransportRotationEntry>              sTransportRotationStore("TransportRotation.db2", TransportRotationLoadInfo::Instance());
DB2Storage<UiMapEntry>                          sUiMapStore("UiMap.db2", UiMapLoadInfo::Instance());
DB2Storage<UiMapAssignmentEntry>                sUiMapAssignmentStore("UiMapAssignment.db2", UiMapAssignmentLoadInfo::Instance());
DB2Storage<UiMapLinkEntry>                      sUiMapLinkStore("UiMapLink.db2", UiMapLinkLoadInfo::Instance());
DB2Storage<UiMapXMapArtEntry>                   sUiMapXMapArtStore("UiMapXMapArt.db2", UiMapXMapArtLoadInfo::Instance());
DB2Storage<UnitPowerBarEntry>                   sUnitPowerBarStore("UnitPowerBar.db2", UnitPowerBarLoadInfo::Instance());
DB2Storage<VehicleEntry>                        sVehicleStore("Vehicle.db2", VehicleLoadInfo::Instance());
DB2Storage<VehicleSeatEntry>                    sVehicleSeatStore("VehicleSeat.db2", VehicleSeatLoadInfo::Instance());
DB2Storage<WMOAreaTableEntry>                   sWMOAreaTableStore("WMOAreaTable.db2", WmoAreaTableLoadInfo::Instance());
DB2Storage<WorldEffectEntry>                    sWorldEffectStore("WorldEffect.db2", WorldEffectLoadInfo::Instance());
DB2Storage<WorldMapOverlayEntry>                sWorldMapOverlayStore("WorldMapOverlay.db2", WorldMapOverlayLoadInfo::Instance());

inline void LoadDB2(uint32& availableDb2Locales, std::vector<std::string>& errlist, DB2StorageBase* storage, std::string const& db2Path, LocaleConstant defaultLocale, std::size_t cppRecordSize)
{
    // validate structure
    DB2LoadInfo const* loadInfo = storage->GetLoadInfo();
    {
        std::string clientMetaString, ourMetaString;
        for (std::size_t i = 0; i < loadInfo->Meta->FieldCount; ++i)
            for (std::size_t j = 0; j < loadInfo->Meta->Fields[i].ArraySize; ++j)
                clientMetaString += loadInfo->Meta->Fields[i].Type;

        for (std::size_t i = loadInfo->Meta->HasIndexFieldInData() ? 0 : 1; i < loadInfo->FieldCount; ++i)
            ourMetaString += loadInfo->Fields[i].Type;

        ASSERT(clientMetaString == ourMetaString,
            "%s C++ structure fields %s do not match generated types from the client %s",
            storage->GetFileName().c_str(), ourMetaString.c_str(), clientMetaString.c_str());

        // compatibility format and C++ structure sizes
        ASSERT(loadInfo->Meta->GetRecordSize() == cppRecordSize,
            "Size of '%s' set by format string (%u) not equal size of C++ structure (" SZFMTD ").",
            storage->GetFileName().c_str(), loadInfo->Meta->GetRecordSize(), cppRecordSize);
    }

    if (!storage->Load(db2Path + localeNames[defaultLocale] + '/', defaultLocale))
    {
        // sort problematic db2 to (1) non compatible and (2) nonexistent
        if (FILE* f = fopen((db2Path + localeNames[defaultLocale] + '/' + storage->GetFileName()).c_str(), "rb"))
        {
            std::ostringstream stream;
            stream << storage->GetFileName() << " exists, and has " << storage->GetFieldCount() << " field(s) (expected " << loadInfo->Meta->FieldCount
                << "). Extracted file might be from wrong client version.";
            std::string buf = stream.str();
            errlist.push_back(buf);
            fclose(f);
        }
        else
            errlist.push_back(storage->GetFileName());
    }
}

template<typename T>
constexpr std::size_t GetCppRecordSize(DB2Storage<T> const&) { return sizeof(T); }

inline void CheckStructures(std::string db2_path)
{
    uint32 availableDb2Locales = 0xFF;
    std::vector<std::string> bad_db2_files;

#define LOAD_DB2(store) LoadDB2(availableDb2Locales, bad_db2_files, &store, db2_path, LocaleConstant::LOCALE_enUS, GetCppRecordSize(store))

    LOAD_DB2(sAnimationDataStore);
    LOAD_DB2(sAnimKitStore);
    LOAD_DB2(sAreaGroupMemberStore);
    LOAD_DB2(sAreaTableStore);
    LOAD_DB2(sAreaTriggerStore);
    LOAD_DB2(sAuctionHouseStore);
    LOAD_DB2(sBankBagSlotPricesStore);
    LOAD_DB2(sBannedAddonsStore);
    LOAD_DB2(sBattlemasterListStore);
    LOAD_DB2(sCfgRegionsStore);
    LOAD_DB2(sCharacterFacialHairStylesStore);
    LOAD_DB2(sCharBaseSectionStore);
    LOAD_DB2(sCharSectionsStore);
    LOAD_DB2(sCharStartOutfitStore);
    LOAD_DB2(sChatChannelsStore);
    LOAD_DB2(sChrClassesStore);
    LOAD_DB2(sChrClassesXPowerTypesStore);
    LOAD_DB2(sChrRacesStore);
    LOAD_DB2(sCinematicCameraStore);
    LOAD_DB2(sCinematicSequencesStore);
    LOAD_DB2(sCreatureDisplayInfoStore);
    LOAD_DB2(sCreatureDisplayInfoExtraStore);
    LOAD_DB2(sCreatureFamilyStore);
    LOAD_DB2(sCreatureModelDataStore);
    LOAD_DB2(sCreatureTypeStore);
    LOAD_DB2(sCriteriaStore);
    LOAD_DB2(sCriteriaTreeStore);
    LOAD_DB2(sCurveStore);
    LOAD_DB2(sCurvePointStore);
    LOAD_DB2(sDifficultyStore);
    LOAD_DB2(sDungeonEncounterStore);
    LOAD_DB2(sDurabilityCostsStore);
    LOAD_DB2(sDurabilityQualityStore);
    LOAD_DB2(sEmotesStore);
    LOAD_DB2(sEmotesTextStore);
    LOAD_DB2(sEmotesTextSoundStore);
    LOAD_DB2(sFactionStore);
    LOAD_DB2(sFactionTemplateStore);
    LOAD_DB2(sGameObjectDisplayInfoStore);
    LOAD_DB2(sGameObjectsStore);
    LOAD_DB2(sHolidaysStore);
    LOAD_DB2(sImportPriceArmorStore);
    LOAD_DB2(sImportPriceQualityStore);
    LOAD_DB2(sImportPriceShieldStore);
    LOAD_DB2(sImportPriceWeaponStore);
    LOAD_DB2(sItemStore);
    LOAD_DB2(sItemBagFamilyStore);
    LOAD_DB2(sItemClassStore);
    LOAD_DB2(sItemDamageAmmoStore);
    LOAD_DB2(sItemDamageOneHandStore);
    LOAD_DB2(sItemDamageOneHandCasterStore);
    LOAD_DB2(sItemDamageTwoHandStore);
    LOAD_DB2(sItemDamageTwoHandCasterStore);
    LOAD_DB2(sItemDisenchantLootStore);
    LOAD_DB2(sItemEffectStore);
    LOAD_DB2(sItemLimitCategoryStore);
    LOAD_DB2(sItemPriceBaseStore);
    LOAD_DB2(sItemRandomPropertiesStore);
    LOAD_DB2(sItemRandomSuffixStore);
    LOAD_DB2(sItemSetStore);
    LOAD_DB2(sItemSetSpellStore);
    LOAD_DB2(sItemSparseStore);
    LOAD_DB2(sLFGDungeonsStore);
    LOAD_DB2(sLightStore);
    LOAD_DB2(sLiquidTypeStore);
    LOAD_DB2(sLockStore);
    LOAD_DB2(sMailTemplateStore);
    LOAD_DB2(sMapStore);
    LOAD_DB2(sMapDifficultyStore);
    LOAD_DB2(sModifierTreeStore);
    LOAD_DB2(sMovieStore);
    LOAD_DB2(sNameGenStore);
    LOAD_DB2(sNamesProfanityStore);
    LOAD_DB2(sNamesReservedStore);
    LOAD_DB2(sNamesReservedLocaleStore);
    LOAD_DB2(sPlayerConditionStore);
    LOAD_DB2(sPowerTypeStore);
    LOAD_DB2(sPVPDifficultyStore);
    LOAD_DB2(sQuestFactionRewardStore);
    LOAD_DB2(sQuestMoneyRewardStore);
    LOAD_DB2(sQuestSortStore);
    LOAD_DB2(sQuestV2Store);
    LOAD_DB2(sQuestXPStore);
    LOAD_DB2(sRandPropPointsStore);
    LOAD_DB2(sSkillLineStore);
    LOAD_DB2(sSkillLineAbilityStore);
    LOAD_DB2(sSkillRaceClassInfoStore);
    LOAD_DB2(sSoundKitStore);
    LOAD_DB2(sSpellAuraOptionsStore);
    LOAD_DB2(sSpellAuraRestrictionsStore);
    LOAD_DB2(sSpellCastingRequirementsStore);
    LOAD_DB2(sSpellCastTimesStore);
    LOAD_DB2(sSpellCategoriesStore);
    LOAD_DB2(sSpellCategoryStore);
    LOAD_DB2(sSpellClassOptionsStore);
    LOAD_DB2(sSpellCooldownsStore);
    LOAD_DB2(sSpellDurationStore);
    LOAD_DB2(sSpellEffectStore);
    LOAD_DB2(sSpellEquippedItemsStore);
    LOAD_DB2(sSpellFocusObjectStore);
    LOAD_DB2(sSpellInterruptsStore);
    LOAD_DB2(sSpellItemEnchantmentStore);
    LOAD_DB2(sSpellLevelsStore);
    LOAD_DB2(sSpellMiscStore);
    LOAD_DB2(sSpellNameStore);
    LOAD_DB2(sSpellPowerStore);
    LOAD_DB2(sSpellRadiusStore);
    LOAD_DB2(sSpellRangeStore);
    LOAD_DB2(sSpellReagentsStore);
    LOAD_DB2(sSpellShapeshiftStore);
    LOAD_DB2(sSpellShapeshiftFormStore);
    LOAD_DB2(sSpellTargetRestrictionsStore);
    LOAD_DB2(sSpellTotemsStore);
    LOAD_DB2(sSpellXSpellVisualStore);
    LOAD_DB2(sSummonPropertiesStore);
    LOAD_DB2(sTactKeyStore);
    LOAD_DB2(sTalentStore);
    LOAD_DB2(sTaxiNodesStore);
    LOAD_DB2(sTaxiPathStore);
    LOAD_DB2(sTaxiPathNodeStore);
    LOAD_DB2(sTransportAnimationStore);
    LOAD_DB2(sUiMapStore);
    LOAD_DB2(sUiMapAssignmentStore);
    LOAD_DB2(sUiMapXMapArtStore);
    LOAD_DB2(sWMOAreaTableStore);
    LOAD_DB2(sWorldMapOverlayStore);

#undef LOAD_DB2
}

boost::filesystem::path db2_path;

int main(int argc, char* arg[])
{
    std::cin.get();

    Trinity::Banner::Show("DB2 Structure Checker", [](char const* text) { printf("%s\n", text); }, nullptr);

    db2_path = boost::filesystem::current_path() / "Data/dbc/";

    printf("Checking DB2 Structures...\n");
    CheckStructures(db2_path.string());

    std::cin.get();
    return 0;
}
