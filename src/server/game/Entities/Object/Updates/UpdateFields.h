/*
 * Copyright (C) 2008-2020 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
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

#ifndef _UPDATEFIELDS_H
#define _UPDATEFIELDS_H

// Auto generated for version 1, 13, 6, 36497

enum ObjectFields
{
    OBJECT_FIELD_GUID                                           = 0x000, // Size: 4, Flags: PUBLIC
    OBJECT_FIELD_ENTRY                                          = 0x004, // Size: 1, Flags: DYNAMIC
    OBJECT_DYNAMIC_FLAGS                                        = 0x005, // Size: 1, Flags: DYNAMIC, URGENT
    OBJECT_FIELD_SCALE_X                                        = 0x006, // Size: 1, Flags: PUBLIC
    OBJECT_END                                                  = 0x007,
};

enum ObjectDynamicFields
{
    OBJECT_DYNAMIC_END                                          = 0x000,
};

enum ItemFields
{
    ITEM_FIELD_OWNER                                            = OBJECT_END + 0x000, // Size: 4, Flags: PUBLIC
    ITEM_FIELD_CONTAINED                                        = OBJECT_END + 0x004, // Size: 4, Flags: PUBLIC
    ITEM_FIELD_CREATOR                                          = OBJECT_END + 0x008, // Size: 4, Flags: PUBLIC
    ITEM_FIELD_GIFTCREATOR                                      = OBJECT_END + 0x00C, // Size: 4, Flags: PUBLIC
    ITEM_FIELD_STACK_COUNT                                      = OBJECT_END + 0x010, // Size: 1, Flags: OWNER
    ITEM_FIELD_DURATION                                         = OBJECT_END + 0x011, // Size: 1, Flags: OWNER
    ITEM_FIELD_SPELL_CHARGES                                    = OBJECT_END + 0x012, // Size: 5, Flags: OWNER
    ITEM_FIELD_FLAGS                                            = OBJECT_END + 0x017, // Size: 1, Flags: PUBLIC
    ITEM_FIELD_ENCHANTMENT                                      = OBJECT_END + 0x018, // Size: 39, Flags: PUBLIC
    ITEM_FIELD_PROPERTY_SEED                                    = OBJECT_END + 0x03F, // Size: 1, Flags: PUBLIC
    ITEM_FIELD_RANDOM_PROPERTIES_ID                             = OBJECT_END + 0x040, // Size: 1, Flags: PUBLIC
    ITEM_FIELD_DURABILITY                                       = OBJECT_END + 0x041, // Size: 1, Flags: OWNER
    ITEM_FIELD_MAXDURABILITY                                    = OBJECT_END + 0x042, // Size: 1, Flags: OWNER
    ITEM_FIELD_CREATE_PLAYED_TIME                               = OBJECT_END + 0x043, // Size: 1, Flags: PUBLIC
    ITEM_FIELD_MODIFIERS_MASK                                   = OBJECT_END + 0x044, // Size: 1, Flags: OWNER
    ITEM_FIELD_CONTEXT                                          = OBJECT_END + 0x045, // Size: 1, Flags: PUBLIC
    ITEM_FIELD_ARTIFACT_XP                                      = OBJECT_END + 0x046, // Size: 2, Flags: OWNER
    ITEM_FIELD_APPEARANCE_MOD_ID                                = OBJECT_END + 0x048, // Size: 1, Flags: OWNER
    ITEM_END                                                    = OBJECT_END + 0x049,
};

enum ItemDynamicFields
{
    ITEM_DYNAMIC_FIELD_MODIFIERS                                = OBJECT_DYNAMIC_END + 0x000, // Flags: OWNER
    ITEM_DYNAMIC_FIELD_BONUSLIST_IDS                            = OBJECT_DYNAMIC_END + 0x001, // Flags: OWNER, 0x100
    ITEM_DYNAMIC_FIELD_ARTIFACT_POWERS                          = OBJECT_DYNAMIC_END + 0x002, // Flags: OWNER
    ITEM_DYNAMIC_FIELD_GEMS                                     = OBJECT_DYNAMIC_END + 0x003, // Flags: OWNER
    ITEM_DYNAMIC_END                                            = OBJECT_DYNAMIC_END + 0x004,
};

enum ContainerFields
{
    CONTAINER_FIELD_SLOT_1                                      = ITEM_END + 0x000, // Size: 144, Flags: PUBLIC
    CONTAINER_FIELD_NUM_SLOTS                                   = ITEM_END + 0x090, // Size: 1, Flags: PUBLIC
    CONTAINER_END                                               = ITEM_END + 0x091,
};

enum ContainerDynamicFields
{
    CONTAINER_DYNAMIC_END                                       = ITEM_DYNAMIC_END + 0x000,
};

enum AzeriteEmpoweredItemField
{
    AZERITE_EMPOWERED_ITEM_FIELD_SELECTIONS                     = ITEM_END + 0x000, // Size: 4, Flags: PUBLIC
    AZERITE_EMPOWERED_ITEM_END                                  = ITEM_END + 0x004,
};

enum AzeriteEmpoweredItemDynamicField
{
    AZERITE_EMPOWERED_ITEM_DYNAMIC_END                          = ITEM_DYNAMIC_END + 0x000,
};

enum AzeriteItemField
{
    AZERITE_ITEM_FIELD_XP                                       = ITEM_END + 0x000, // Size: 2, Flags: PUBLIC
    AZERITE_ITEM_FIELD_LEVEL                                    = ITEM_END + 0x002, // Size: 1, Flags: PUBLIC
    AZERITE_ITEM_FIELD_AURA_LEVEL                               = ITEM_END + 0x003, // Size: 1, Flags: PUBLIC
    AZERITE_ITEM_FIELD_KNOWLEDGE_LEVEL                          = ITEM_END + 0x004, // Size: 1, Flags: OWNER
    AZERITE_ITEM_FIELD_DEBUG_KNOWLEDGE_WEEK                     = ITEM_END + 0x005, // Size: 1, Flags: OWNER
    AZERITE_ITEM_END                                            = ITEM_END + 0x006,
};

enum AzeriteItemDynamicField
{
    AZERITE_ITEM_DYNAMIC_END                                    = ITEM_DYNAMIC_END + 0x000,
};

enum UnitFields
{
    UNIT_FIELD_CHARM                                            = OBJECT_END + 0x000, // Size: 4, Flags: PUBLIC
    UNIT_FIELD_SUMMON                                           = OBJECT_END + 0x004, // Size: 4, Flags: PUBLIC
    UNIT_FIELD_CRITTER                                          = OBJECT_END + 0x008, // Size: 4, Flags: PRIVATE
    UNIT_FIELD_CHARMEDBY                                        = OBJECT_END + 0x00C, // Size: 4, Flags: PUBLIC
    UNIT_FIELD_SUMMONEDBY                                       = OBJECT_END + 0x010, // Size: 4, Flags: PUBLIC
    UNIT_FIELD_CREATEDBY                                        = OBJECT_END + 0x014, // Size: 4, Flags: PUBLIC
    UNIT_FIELD_DEMON_CREATOR                                    = OBJECT_END + 0x018, // Size: 4, Flags: PUBLIC
    UNIT_FIELD_LOOK_AT_CONTROLLER_TARGET                        = OBJECT_END + 0x01C, // Size: 4, Flags: PUBLIC
    UNIT_FIELD_TARGET                                           = OBJECT_END + 0x020, // Size: 4, Flags: PUBLIC
    UNIT_FIELD_BATTLE_PET_COMPANION_GUID                        = OBJECT_END + 0x024, // Size: 4, Flags: PUBLIC
    UNIT_FIELD_BATTLE_PET_DB_ID                                 = OBJECT_END + 0x028, // Size: 2, Flags: PUBLIC
    UNIT_FIELD_CHANNEL_DATA                                     = OBJECT_END + 0x02A, // Size: 2, Flags: PUBLIC, URGENT
    UNIT_FIELD_SUMMONED_BY_HOME_REALM                           = OBJECT_END + 0x02C, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_BYTES_0                                          = OBJECT_END + 0x02D, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_DISPLAY_POWER                                    = OBJECT_END + 0x02E, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_OVERRIDE_DISPLAY_POWER_ID                        = OBJECT_END + 0x02F, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_HEALTH                                           = OBJECT_END + 0x030, // Size: 2, Flags: DYNAMIC
    UNIT_FIELD_POWER                                            = OBJECT_END + 0x032, // Size: 6, Flags: PUBLIC, URGENT_SELF_ONLY
    UNIT_FIELD_MAXHEALTH                                        = OBJECT_END + 0x038, // Size: 2, Flags: DYNAMIC
    UNIT_FIELD_MAXPOWER                                         = OBJECT_END + 0x03A, // Size: 6, Flags: PUBLIC
    UNIT_FIELD_MOD_POWER_REGEN                                  = OBJECT_END + 0x040, // Size: 6, Flags: PRIVATE, OWNER, UNIT_ALL
    UNIT_FIELD_LEVEL                                            = OBJECT_END + 0x046, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_EFFECTIVE_LEVEL                                  = OBJECT_END + 0x047, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_CONTENT_TUNING_ID                                = OBJECT_END + 0x048, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_SCALING_LEVEL_MIN                                = OBJECT_END + 0x049, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_SCALING_LEVEL_MAX                                = OBJECT_END + 0x04A, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_SCALING_LEVEL_DELTA                              = OBJECT_END + 0x04B, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_SCALING_FACTION_GROUP                            = OBJECT_END + 0x04C, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_SCALING_HEALTH_ITEM_LEVEL_CURVE_ID               = OBJECT_END + 0x04D, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_SCALING_DAMAGE_ITEM_LEVEL_CURVE_ID               = OBJECT_END + 0x04E, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_FACTIONTEMPLATE                                  = OBJECT_END + 0x04F, // Size: 1, Flags: PUBLIC
    UNIT_VIRTUAL_ITEM_SLOT_ID                                   = OBJECT_END + 0x050, // Size: 6, Flags: PUBLIC
    UNIT_FIELD_FLAGS                                            = OBJECT_END + 0x056, // Size: 1, Flags: PUBLIC, URGENT
    UNIT_FIELD_FLAGS_2                                          = OBJECT_END + 0x057, // Size: 1, Flags: PUBLIC, URGENT
    UNIT_FIELD_FLAGS_3                                          = OBJECT_END + 0x058, // Size: 1, Flags: PUBLIC, URGENT
    UNIT_FIELD_AURASTATE                                        = OBJECT_END + 0x059, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_BASEATTACKTIME                                   = OBJECT_END + 0x05A, // Size: 2, Flags: PUBLIC
    UNIT_FIELD_RANGEDATTACKTIME                                 = OBJECT_END + 0x05C, // Size: 1, Flags: PRIVATE
    UNIT_FIELD_BOUNDINGRADIUS                                   = OBJECT_END + 0x05D, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_COMBATREACH                                      = OBJECT_END + 0x05E, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_DISPLAYID                                        = OBJECT_END + 0x05F, // Size: 1, Flags: DYNAMIC, URGENT
    UNIT_FIELD_DISPLAY_SCALE                                    = OBJECT_END + 0x060, // Size: 1, Flags: DYNAMIC, URGENT
    UNIT_FIELD_NATIVEDISPLAYID                                  = OBJECT_END + 0x061, // Size: 1, Flags: PUBLIC, URGENT
    UNIT_FIELD_NATIVE_X_DISPLAY_SCALE                           = OBJECT_END + 0x062, // Size: 1, Flags: PUBLIC, URGENT
    UNIT_FIELD_MOUNTDISPLAYID                                   = OBJECT_END + 0x063, // Size: 1, Flags: PUBLIC, URGENT
    UNIT_FIELD_MINDAMAGE                                        = OBJECT_END + 0x064, // Size: 1, Flags: PRIVATE, OWNER, SPECIAL_INFO
    UNIT_FIELD_MAXDAMAGE                                        = OBJECT_END + 0x065, // Size: 1, Flags: PRIVATE, OWNER, SPECIAL_INFO
    UNIT_FIELD_MINOFFHANDDAMAGE                                 = OBJECT_END + 0x066, // Size: 1, Flags: PRIVATE, OWNER, SPECIAL_INFO
    UNIT_FIELD_MAXOFFHANDDAMAGE                                 = OBJECT_END + 0x067, // Size: 1, Flags: PRIVATE, OWNER, SPECIAL_INFO
    UNIT_FIELD_BYTES_1                                          = OBJECT_END + 0x068, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_PETNUMBER                                        = OBJECT_END + 0x069, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_PET_NAME_TIMESTAMP                               = OBJECT_END + 0x06A, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_PETEXPERIENCE                                    = OBJECT_END + 0x06B, // Size: 1, Flags: OWNER
    UNIT_FIELD_PETNEXTLEVELEXP                                  = OBJECT_END + 0x06C, // Size: 1, Flags: OWNER
    UNIT_MOD_CAST_SPEED                                         = OBJECT_END + 0x06D, // Size: 1, Flags: PUBLIC
    UNIT_MOD_CAST_HASTE                                         = OBJECT_END + 0x06E, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_MOD_HASTE                                        = OBJECT_END + 0x06F, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_MOD_RANGED_HASTE                                 = OBJECT_END + 0x070, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_MOD_HASTE_REGEN                                  = OBJECT_END + 0x071, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_MOD_TIME_RATE                                    = OBJECT_END + 0x072, // Size: 1, Flags: PUBLIC
    UNIT_CREATED_BY_SPELL                                       = OBJECT_END + 0x073, // Size: 1, Flags: PUBLIC
    UNIT_NPC_FLAGS                                              = OBJECT_END + 0x074, // Size: 2, Flags: PUBLIC, DYNAMIC
    UNIT_NPC_EMOTESTATE                                         = OBJECT_END + 0x076, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_TRAINING_POINTS_TOTAL                            = OBJECT_END + 0x077, // Size: 1, Flags: OWNER
    UNIT_FIELD_STAT                                             = OBJECT_END + 0x078, // Size: 5, Flags: PRIVATE, OWNER
    UNIT_FIELD_POSSTAT                                          = OBJECT_END + 0x07D, // Size: 5, Flags: PRIVATE, OWNER
    UNIT_FIELD_NEGSTAT                                          = OBJECT_END + 0x082, // Size: 5, Flags: PRIVATE, OWNER
    UNIT_FIELD_RESISTANCES                                      = OBJECT_END + 0x087, // Size: 7, Flags: PRIVATE, OWNER, SPECIAL_INFO
    UNIT_FIELD_RESISTANCE_BUFF_MODS_POSITIVE                    = OBJECT_END + 0x08E, // Size: 7, Flags: PRIVATE, OWNER
    UNIT_FIELD_RESISTANCE_BUFF_MODS_NEGATIVE                    = OBJECT_END + 0x095, // Size: 7, Flags: PRIVATE, OWNER
    UNIT_FIELD_BASE_MANA                                        = OBJECT_END + 0x09C, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_BASE_HEALTH                                      = OBJECT_END + 0x09D, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_BYTES_2                                          = OBJECT_END + 0x09E, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_ATTACK_POWER                                     = OBJECT_END + 0x09F, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_ATTACK_POWER_MOD_POS                             = OBJECT_END + 0x0A0, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_ATTACK_POWER_MOD_NEG                             = OBJECT_END + 0x0A1, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_ATTACK_POWER_MULTIPLIER                          = OBJECT_END + 0x0A2, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_RANGED_ATTACK_POWER                              = OBJECT_END + 0x0A3, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_RANGED_ATTACK_POWER_MOD_POS                      = OBJECT_END + 0x0A4, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_RANGED_ATTACK_POWER_MOD_NEG                      = OBJECT_END + 0x0A5, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_RANGED_ATTACK_POWER_MULTIPLIER                   = OBJECT_END + 0x0A6, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_MAIN_HAND_WEAPON_ATTACK_POWER                    = OBJECT_END + 0x0A7, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_OFF_HAND_WEAPON_ATTACK_POWER                     = OBJECT_END + 0x0A8, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_RANGED_HAND_WEAPON_ATTACK_POWER                  = OBJECT_END + 0x0A9, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_ATTACK_SPEED_AURA                                = OBJECT_END + 0x0AA, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_LIFESTEAL                                        = OBJECT_END + 0x0AB, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_MINRANGEDDAMAGE                                  = OBJECT_END + 0x0AC, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_MAXRANGEDDAMAGE                                  = OBJECT_END + 0x0AD, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_POWER_COST_MODIFIER                              = OBJECT_END + 0x0AE, // Size: 7, Flags: PRIVATE, OWNER
    UNIT_FIELD_POWER_COST_MULTIPLIER                            = OBJECT_END + 0x0B5, // Size: 7, Flags: PRIVATE, OWNER
    UNIT_FIELD_MAXHEALTHMODIFIER                                = OBJECT_END + 0x0BC, // Size: 1, Flags: PRIVATE, OWNER
    UNIT_FIELD_HOVERHEIGHT                                      = OBJECT_END + 0x0BD, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_MIN_ITEM_LEVEL_CUTOFF                            = OBJECT_END + 0x0BE, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_MIN_ITEM_LEVEL                                   = OBJECT_END + 0x0BF, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_MAXITEMLEVEL                                     = OBJECT_END + 0x0C0, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_WILD_BATTLEPET_LEVEL                             = OBJECT_END + 0x0C1, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_BATTLEPET_COMPANION_NAME_TIMESTAMP               = OBJECT_END + 0x0C2, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_INTERACT_SPELLID                                 = OBJECT_END + 0x0C3, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_STATE_SPELL_VISUAL_ID                            = OBJECT_END + 0x0C4, // Size: 1, Flags: DYNAMIC, URGENT
    UNIT_FIELD_STATE_ANIM_ID                                    = OBJECT_END + 0x0C5, // Size: 1, Flags: DYNAMIC, URGENT
    UNIT_FIELD_STATE_ANIM_KIT_ID                                = OBJECT_END + 0x0C6, // Size: 1, Flags: DYNAMIC, URGENT
    UNIT_FIELD_STATE_WORLD_EFFECT_ID                            = OBJECT_END + 0x0C7, // Size: 4, Flags: DYNAMIC, URGENT
    UNIT_FIELD_SCALE_DURATION                                   = OBJECT_END + 0x0CB, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_LOOKS_LIKE_MOUNT_ID                              = OBJECT_END + 0x0CC, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_LOOKS_LIKE_CREATURE_ID                           = OBJECT_END + 0x0CD, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_LOOK_AT_CONTROLLER_ID                            = OBJECT_END + 0x0CE, // Size: 1, Flags: PUBLIC
    UNIT_FIELD_GUILD_GUID                                       = OBJECT_END + 0x0CF, // Size: 4, Flags: PUBLIC
    UNIT_END                                                    = OBJECT_END + 0x0D3,
};

enum UnitDynamicFields
{
    UNIT_DYNAMIC_FIELD_PASSIVE_SPELLS                           = OBJECT_DYNAMIC_END + 0x000, // Flags: PUBLIC, URGENT
    UNIT_DYNAMIC_FIELD_WORLD_EFFECTS                            = OBJECT_DYNAMIC_END + 0x001, // Flags: PUBLIC, URGENT
    UNIT_DYNAMIC_FIELD_CHANNEL_OBJECTS                          = OBJECT_DYNAMIC_END + 0x002, // Flags: PUBLIC, URGENT
    UNIT_DYNAMIC_END                                            = OBJECT_DYNAMIC_END + 0x003,
};

enum PlayerFields
{
    PLAYER_DUEL_ARBITER                                         = UNIT_END + 0x000, // Size: 4, Flags: PUBLIC
    PLAYER_WOW_ACCOUNT                                          = UNIT_END + 0x004, // Size: 4, Flags: PUBLIC
    PLAYER_LOOT_TARGET_GUID                                     = UNIT_END + 0x008, // Size: 4, Flags: PUBLIC
    PLAYER_FLAGS                                                = UNIT_END + 0x00C, // Size: 1, Flags: PUBLIC
    PLAYER_FLAGS_EX                                             = UNIT_END + 0x00D, // Size: 1, Flags: PUBLIC
    PLAYER_GUILDRANK                                            = UNIT_END + 0x00E, // Size: 1, Flags: PUBLIC
    PLAYER_GUILDDELETE_DATE                                     = UNIT_END + 0x00F, // Size: 1, Flags: PUBLIC
    PLAYER_GUILDLEVEL                                           = UNIT_END + 0x010, // Size: 1, Flags: PUBLIC
    PLAYER_BYTES                                                = UNIT_END + 0x011, // Size: 1, Flags: PUBLIC
    PLAYER_BYTES_2                                              = UNIT_END + 0x012, // Size: 1, Flags: PUBLIC
    PLAYER_BYTES_3                                              = UNIT_END + 0x013, // Size: 1, Flags: PUBLIC
    PLAYER_PVP_RANK                                             = UNIT_END + 0x014, // Size: 1, Flags: PUBLIC
    PLAYER_DUEL_TEAM                                            = UNIT_END + 0x015, // Size: 1, Flags: PUBLIC
    PLAYER_GUILD_TIMESTAMP                                      = UNIT_END + 0x016, // Size: 1, Flags: PUBLIC
    PLAYER_QUEST_LOG                                            = UNIT_END + 0x017, // Size: 320, Flags: PARTY_MEMBER
    PLAYER_VISIBLE_ITEM                                         = UNIT_END + 0x157, // Size: 38, Flags: PUBLIC
    PLAYER_CHOSEN_TITLE                                         = UNIT_END + 0x17D, // Size: 1, Flags: PUBLIC
    PLAYER_FAKE_INEBRIATION                                     = UNIT_END + 0x17E, // Size: 1, Flags: PUBLIC
    PLAYER_FIELD_VIRTUAL_PLAYER_REALM                           = UNIT_END + 0x17F, // Size: 1, Flags: PUBLIC
    PLAYER_FIELD_CURRENT_SPEC_ID                                = UNIT_END + 0x180, // Size: 1, Flags: PUBLIC
    PLAYER_FIELD_TAXI_MOUNT_ANIM_KIT_ID                         = UNIT_END + 0x181, // Size: 1, Flags: PUBLIC
    PLAYER_FIELD_AVG_ITEM_LEVEL                                 = UNIT_END + 0x182, // Size: 4, Flags: PUBLIC
    PLAYER_FIELD_CURRENT_BATTLE_PET_BREED_QUALITY               = UNIT_END + 0x186, // Size: 1, Flags: PUBLIC
    PLAYER_FIELD_HONOR_LEVEL                                    = UNIT_END + 0x187, // Size: 1, Flags: PUBLIC
    PLAYER_END                                                  = UNIT_END + 0x188,
};

enum PlayerDynamicFields
{
    PLAYER_DYNAMIC_FIELD_ARENA_COOLDOWNS                        = UNIT_DYNAMIC_END + 0x000, // Flags: PUBLIC
    PLAYER_DYNAMIC_END                                          = UNIT_DYNAMIC_END + 0x001,
};

enum ActivePlayerField
{
    ACTIVE_PLAYER_FIELD_INV_SLOT_HEAD                           = PLAYER_END + 0x000, // Size: 496, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_FARSIGHT                                = PLAYER_END + 0x1F0, // Size: 4, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_COMBO_TARGET                            = PLAYER_END + 0x1F4, // Size: 4, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_SUMMONED_BATTLE_PET_ID                  = PLAYER_END + 0x1F8, // Size: 4, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_KNOWN_TITLES                            = PLAYER_END + 0x1FC, // Size: 12, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_COINAGE                                 = PLAYER_END + 0x208, // Size: 2, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_XP                                      = PLAYER_END + 0x20A, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_NEXT_LEVEL_XP                           = PLAYER_END + 0x20B, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_TRIAL_XP                                = PLAYER_END + 0x20C, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_SKILL_LINEID                            = PLAYER_END + 0x20D, // Size: 896, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_CHARACTER_POINTS                        = PLAYER_END + 0x58D, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_MAX_TALENT_TIERS                        = PLAYER_END + 0x58E, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_TRACK_CREATURES                         = PLAYER_END + 0x58F, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_TRACK_RESOURCES                         = PLAYER_END + 0x590, // Size: 2, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_EXPERTISE                               = PLAYER_END + 0x592, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_OFFHAND_EXPERTISE                       = PLAYER_END + 0x593, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_RANGED_EXPERTISE                        = PLAYER_END + 0x594, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_COMBAT_RATING_EXPERTISE                 = PLAYER_END + 0x595, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_BLOCK_PERCENTAGE                        = PLAYER_END + 0x596, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_DODGE_PERCENTAGE                        = PLAYER_END + 0x597, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_DODGE_PERCENTAGE_FROM_ATTRIBUTE         = PLAYER_END + 0x598, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_PARRY_PERCENTAGE                        = PLAYER_END + 0x599, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_PARRY_PERCENTAGE_FROM_ATTRIBUTE         = PLAYER_END + 0x59A, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_CRIT_PERCENTAGE                         = PLAYER_END + 0x59B, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_RANGED_CRIT_PERCENTAGE                  = PLAYER_END + 0x59C, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_OFFHAND_CRIT_PERCENTAGE                 = PLAYER_END + 0x59D, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_SPELL_CRIT_PERCENTAGE1                  = PLAYER_END + 0x59E, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_SHIELD_BLOCK                            = PLAYER_END + 0x59F, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_MASTERY                                 = PLAYER_END + 0x5A0, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_SPEED                                   = PLAYER_END + 0x5A1, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_AVOIDANCE                               = PLAYER_END + 0x5A2, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_STURDINESS                              = PLAYER_END + 0x5A3, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_VERSATILITY                             = PLAYER_END + 0x5A4, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_VERSATILITY_BONUS                       = PLAYER_END + 0x5A5, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_PVP_POWER_DAMAGE                        = PLAYER_END + 0x5A6, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_PVP_POWER_HEALING                       = PLAYER_END + 0x5A7, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_EXPLORED_ZONES                          = PLAYER_END + 0x5A8, // Size: 320, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_REST_INFO                               = PLAYER_END + 0x6E8, // Size: 4, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_MOD_DAMAGE_DONE_POS                     = PLAYER_END + 0x6EC, // Size: 7, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_MOD_DAMAGE_DONE_NEG                     = PLAYER_END + 0x6F3, // Size: 7, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_MOD_DAMAGE_DONE_PCT                     = PLAYER_END + 0x6FA, // Size: 7, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_MOD_HEALING_DONE_POS                    = PLAYER_END + 0x701, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_MOD_HEALING_PCT                         = PLAYER_END + 0x702, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_MOD_HEALING_DONE_PCT                    = PLAYER_END + 0x703, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_MOD_PERIODIC_HEALING_DONE_PERCENT       = PLAYER_END + 0x704, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_WEAPON_DMG_MULTIPLIERS                  = PLAYER_END + 0x705, // Size: 3, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_WEAPON_ATK_SPEED_MULTIPLIERS            = PLAYER_END + 0x708, // Size: 3, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_MOD_SPELL_POWER_PCT                     = PLAYER_END + 0x70B, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_MOD_RESILIENCE_PERCENT                  = PLAYER_END + 0x70C, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_OVERRIDE_SPELL_POWER_BY_AP_PCT          = PLAYER_END + 0x70D, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_OVERRIDE_AP_BY_SPELL_POWER_PERCENT      = PLAYER_END + 0x70E, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_MOD_TARGET_RESISTANCE                   = PLAYER_END + 0x70F, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_MOD_TARGET_PHYSICAL_RESISTANCE          = PLAYER_END + 0x710, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_LOCAL_FLAGS                             = PLAYER_END + 0x711, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_BYTES                                   = PLAYER_END + 0x712, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_AMMO_ID                                 = PLAYER_END + 0x713, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_PVP_MEDALS                              = PLAYER_END + 0x714, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_BUYBACK_PRICE                           = PLAYER_END + 0x715, // Size: 12, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_BUYBACK_TIMESTAMP                       = PLAYER_END + 0x721, // Size: 12, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_SESSION_DISHONORABLE_KILLS              = PLAYER_END + 0x72D, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_YESTERDAY_DISHONORABLE_KILLS            = PLAYER_END + 0x72E, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_LAST_WEEK_DISHONORABLE_KILLS            = PLAYER_END + 0x72F, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_THIS_WEEK_DISHONORABLE_KILLS            = PLAYER_END + 0x730, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_THIS_WEEK_CONTRIBUTION                  = PLAYER_END + 0x731, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_LIFETIME_HONORABLE_KILLS                = PLAYER_END + 0x732, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_LIFETIME_DISHONORABLE_KILLS             = PLAYER_END + 0x733, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_YESTERDAY_CONTRIBUTION                  = PLAYER_END + 0x734, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_LAST_WEEK_CONTRIBUTION                  = PLAYER_END + 0x735, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_LAST_WEEK_RANK                          = PLAYER_END + 0x736, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_WATCHED_FACTION_INDEX                   = PLAYER_END + 0x737, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_COMBAT_RATING                           = PLAYER_END + 0x738, // Size: 32, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_ARENA_TEAM_INFO                         = PLAYER_END + 0x758, // Size: 54, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_MAX_LEVEL                               = PLAYER_END + 0x78E, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_SCALING_PLAYER_LEVEL_DELTA              = PLAYER_END + 0x78F, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_MAX_CREATURE_SCALING_LEVEL              = PLAYER_END + 0x790, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_NO_REAGENT_COST                         = PLAYER_END + 0x791, // Size: 4, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_PET_SPELL_POWER                         = PLAYER_END + 0x795, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_PROFESSION_SKILL_LINE                   = PLAYER_END + 0x796, // Size: 2, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_UI_HIT_MODIFIER                         = PLAYER_END + 0x798, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_UI_SPELL_HIT_MODIFIER                   = PLAYER_END + 0x799, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_HOME_REALM_TIME_OFFSET                  = PLAYER_END + 0x79A, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_MOD_PET_HASTE                           = PLAYER_END + 0x79B, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_BYTES2                                  = PLAYER_END + 0x79C, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_BYTES3                                  = PLAYER_END + 0x79D, // Size: 1, Flags: PUBLIC, URGENT_SELF_ONLY
    ACTIVE_PLAYER_FIELD_LFG_BONUS_FACTION_ID                    = PLAYER_END + 0x79E, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_LOOT_SPEC_ID                            = PLAYER_END + 0x79F, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_OVERRIDE_ZONE_PVP_TYPE                  = PLAYER_END + 0x7A0, // Size: 1, Flags: PUBLIC, URGENT_SELF_ONLY
    ACTIVE_PLAYER_FIELD_BAG_SLOT_FLAGS                          = PLAYER_END + 0x7A1, // Size: 4, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_BANK_BAG_SLOT_FLAGS                     = PLAYER_END + 0x7A5, // Size: 6, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_QUEST_COMPLETED                         = PLAYER_END + 0x7AB, // Size: 1750, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_HONOR                                   = PLAYER_END + 0xE81, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_HONOR_NEXT_LEVEL                        = PLAYER_END + 0xE82, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_PVP_TIER_MAX_FROM_WINS                  = PLAYER_END + 0xE83, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_PVP_LAST_WEEKS_TIER_MAX_FROM_WINS       = PLAYER_END + 0xE84, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_FIELD_PVP_RANK_PROGRESS                       = PLAYER_END + 0xE85, // Size: 1, Flags: PUBLIC
    ACTIVE_PLAYER_END                                           = PLAYER_END + 0xE86,
};

enum ActivePlayerDynamicField
{
    ACTIVE_PLAYER_DYNAMIC_FIELD_RESERACH_SITE                   = PLAYER_DYNAMIC_END + 0x000, // Flags: PUBLIC
    ACTIVE_PLAYER_DYNAMIC_FIELD_RESEARCH_SITE_PROGRESS          = PLAYER_DYNAMIC_END + 0x001, // Flags: PUBLIC
    ACTIVE_PLAYER_DYNAMIC_FIELD_DAILY_QUESTS                    = PLAYER_DYNAMIC_END + 0x002, // Flags: PUBLIC
    ACTIVE_PLAYER_DYNAMIC_FIELD_AVAILABLE_QUEST_LINE_X_QUEST_ID = PLAYER_DYNAMIC_END + 0x003, // Flags: PUBLIC
    ACTIVE_PLAYER_DYNAMIC_FIELD_HEIRLOOMS                       = PLAYER_DYNAMIC_END + 0x005, // Flags: PUBLIC
    ACTIVE_PLAYER_DYNAMIC_FIELD_HEIRLOOM_FLAGS                  = PLAYER_DYNAMIC_END + 0x006, // Flags: PUBLIC
    ACTIVE_PLAYER_DYNAMIC_FIELD_TOYS                            = PLAYER_DYNAMIC_END + 0x007, // Flags: PUBLIC
    ACTIVE_PLAYER_DYNAMIC_FIELD_TRANSMOG                        = PLAYER_DYNAMIC_END + 0x008, // Flags: PUBLIC
    ACTIVE_PLAYER_DYNAMIC_FIELD_CONDITIONAL_TRANSMOG            = PLAYER_DYNAMIC_END + 0x009, // Flags: PUBLIC
    ACTIVE_PLAYER_DYNAMIC_FIELD_SELF_RES_SPELLS                 = PLAYER_DYNAMIC_END + 0x00A, // Flags: PUBLIC
    ACTIVE_PLAYER_DYNAMIC_FIELD_CHARACTER_RESTRICTIONS          = PLAYER_DYNAMIC_END + 0x00B, // Flags: PUBLIC
    ACTIVE_PLAYER_DYNAMIC_FIELD_SPELL_PCT_MOD_BY_LABEL          = PLAYER_DYNAMIC_END + 0x00C, // Flags: PUBLIC
    ACTIVE_PLAYER_DYNAMIC_FIELD_SPELL_FLAT_MOD_BY_LABEL         = PLAYER_DYNAMIC_END + 0x00D, // Flags: PUBLIC
    ACTIVE_PLAYER_DYNAMIC_FIELD_RESERACH                        = PLAYER_DYNAMIC_END + 0x00E, // Flags: PUBLIC
    ACTIVE_PLAYER_DYNAMIC_END                                   = PLAYER_DYNAMIC_END + 0x00F,
};

enum GameObjectFields
{
    GAMEOBJECT_FIELD_CREATED_BY                                 = OBJECT_END + 0x000, // Size: 4, Flags: PUBLIC
    GAMEOBJECT_FIELD_GUILD_GUID                                 = OBJECT_END + 0x004, // Size: 4, Flags: PUBLIC
    GAMEOBJECT_DISPLAYID                                        = OBJECT_END + 0x008, // Size: 1, Flags: DYNAMIC, URGENT
    GAMEOBJECT_FLAGS                                            = OBJECT_END + 0x009, // Size: 1, Flags: PUBLIC, URGENT
    GAMEOBJECT_PARENTROTATION                                   = OBJECT_END + 0x00A, // Size: 4, Flags: PUBLIC
    GAMEOBJECT_FACTION                                          = OBJECT_END + 0x00E, // Size: 1, Flags: PUBLIC
    GAMEOBJECT_LEVEL                                            = OBJECT_END + 0x00F, // Size: 1, Flags: PUBLIC
    GAMEOBJECT_BYTES_1                                          = OBJECT_END + 0x010, // Size: 1, Flags: PUBLIC, URGENT
    GAMEOBJECT_SPELL_VISUAL_ID                                  = OBJECT_END + 0x011, // Size: 1, Flags: PUBLIC, DYNAMIC, URGENT
    GAMEOBJECT_STATE_SPELL_VISUAL_ID                            = OBJECT_END + 0x012, // Size: 1, Flags: DYNAMIC, URGENT
    GAMEOBJECT_STATE_ANIM_ID                                    = OBJECT_END + 0x013, // Size: 1, Flags: DYNAMIC, URGENT
    GAMEOBJECT_STATE_ANIM_KIT_ID                                = OBJECT_END + 0x014, // Size: 1, Flags: DYNAMIC, URGENT
    GAMEOBJECT_STATE_WORLD_EFFECT_ID                            = OBJECT_END + 0x015, // Size: 4, Flags: DYNAMIC, URGENT
    GAMEOBJECT_FIELD_CUSTOM_PARAM                               = OBJECT_END + 0x019, // Size: 1, Flags: PUBLIC, URGENT
    GAMEOBJECT_END                                              = OBJECT_END + 0x01A,
};

enum GameObjectDynamicFields
{
    GAMEOBJECT_DYNAMIC_ENABLE_DOODAD_SETS                       = OBJECT_DYNAMIC_END + 0x000, // Flags: PUBLIC
    GAMEOBJECT_DYNAMIC_END                                      = OBJECT_DYNAMIC_END + 0x001,
};

enum DynamicObjectFields
{
    DYNAMICOBJECT_CASTER                                        = OBJECT_END + 0x000, // Size: 4, Flags: PUBLIC
    DYNAMICOBJECT_TYPE                                          = OBJECT_END + 0x004, // Size: 1, Flags: PUBLIC
    DYNAMICOBJECT_SPELL_X_SPELL_VISUAL_ID                       = OBJECT_END + 0x005, // Size: 1, Flags: PUBLIC
    DYNAMICOBJECT_SPELLID                                       = OBJECT_END + 0x006, // Size: 1, Flags: PUBLIC
    DYNAMICOBJECT_RADIUS                                        = OBJECT_END + 0x007, // Size: 1, Flags: PUBLIC
    DYNAMICOBJECT_CASTTIME                                      = OBJECT_END + 0x008, // Size: 1, Flags: PUBLIC
    DYNAMICOBJECT_END                                           = OBJECT_END + 0x009,
};

enum DynamicObjectDynamicFields
{
    DYNAMICOBJECT_DYNAMIC_END                                   = OBJECT_DYNAMIC_END + 0x000,
};

enum CorpseFields
{
    CORPSE_FIELD_OWNER                                          = OBJECT_END + 0x000, // Size: 4, Flags: PUBLIC
    CORPSE_FIELD_PARTY                                          = OBJECT_END + 0x004, // Size: 4, Flags: PUBLIC
    CORPSE_FIELD_GUILD_GUID                                     = OBJECT_END + 0x008, // Size: 4, Flags: PUBLIC
    CORPSE_FIELD_DISPLAY_ID                                     = OBJECT_END + 0x00C, // Size: 1, Flags: PUBLIC
    CORPSE_FIELD_ITEM                                           = OBJECT_END + 0x00D, // Size: 19, Flags: PUBLIC
    CORPSE_FIELD_BYTES_1                                        = OBJECT_END + 0x020, // Size: 1, Flags: PUBLIC
    CORPSE_FIELD_BYTES_2                                        = OBJECT_END + 0x021, // Size: 1, Flags: PUBLIC
    CORPSE_FIELD_FLAGS                                          = OBJECT_END + 0x022, // Size: 1, Flags: PUBLIC
    CORPSE_FIELD_DYNAMIC_FLAGS                                  = OBJECT_END + 0x023, // Size: 1, Flags: DYNAMIC
    CORPSE_FIELD_FACTIONTEMPLATE                                = OBJECT_END + 0x024, // Size: 1, Flags: PUBLIC
    CORPSE_FIELD_CUSTOM_DISPLAY_OPTION                          = OBJECT_END + 0x025, // Size: 1, Flags: PUBLIC
    CORPSE_END                                                  = OBJECT_END + 0x026,
};

enum CorpseDynamicFields
{
    CORPSE_DYNAMIC_END                                          = OBJECT_DYNAMIC_END + 0x000,
};

enum AreaTriggerFields
{
    AREATRIGGER_OVERRIDE_SCALE_CURVE                            = OBJECT_END + 0x000, // Size: 7, Flags: PUBLIC, URGENT
    AREATRIGGER_EXTRA_SCALE_CURVE                               = OBJECT_END + 0x007, // Size: 7, Flags: PUBLIC, URGENT
    AREATRIGGER_CASTER                                          = OBJECT_END + 0x00E, // Size: 4, Flags: PUBLIC
    AREATRIGGER_DURATION                                        = OBJECT_END + 0x012, // Size: 1, Flags: PUBLIC
    AREATRIGGER_TIME_TO_TARGET                                  = OBJECT_END + 0x013, // Size: 1, Flags: PUBLIC, URGENT
    AREATRIGGER_TIME_TO_TARGET_SCALE                            = OBJECT_END + 0x014, // Size: 1, Flags: PUBLIC, URGENT
    AREATRIGGER_TIME_TO_TARGET_EXTRA_SCALE                      = OBJECT_END + 0x015, // Size: 1, Flags: PUBLIC, URGENT
    AREATRIGGER_SPELLID                                         = OBJECT_END + 0x016, // Size: 1, Flags: PUBLIC
    AREATRIGGER_SPELL_FOR_VISUALS                               = OBJECT_END + 0x017, // Size: 1, Flags: PUBLIC
    AREATRIGGER_SPELL_X_SPELL_VISUAL_ID                         = OBJECT_END + 0x018, // Size: 1, Flags: PUBLIC
    AREATRIGGER_BOUNDS_RADIUS_2D                                = OBJECT_END + 0x019, // Size: 1, Flags: DYNAMIC, URGENT
    AREATRIGGER_DECAL_PROPERTIES_ID                             = OBJECT_END + 0x01A, // Size: 1, Flags: PUBLIC
    AREATRIGGER_CREATING_EFFECT_GUID                            = OBJECT_END + 0x01B, // Size: 4, Flags: PUBLIC
    AREATRIGGER_END                                             = OBJECT_END + 0x01F,
};

enum AreaTriggerDynamicFields
{
    AREATRIGGER_DYNAMIC_END                                     = OBJECT_DYNAMIC_END + 0x000,
};

enum SceneObjectFields
{
    SCENEOBJECT_FIELD_SCRIPT_PACKAGE_ID                         = OBJECT_END + 0x000, // Size: 1, Flags: PUBLIC
    SCENEOBJECT_FIELD_RND_SEED_VAL                              = OBJECT_END + 0x001, // Size: 1, Flags: PUBLIC
    SCENEOBJECT_FIELD_CREATEDBY                                 = OBJECT_END + 0x002, // Size: 4, Flags: PUBLIC
    SCENEOBJECT_FIELD_SCENE_TYPE                                = OBJECT_END + 0x006, // Size: 1, Flags: PUBLIC
    SCENEOBJECT_END                                             = OBJECT_END + 0x007,
};

enum SceneObjectDynamicFields
{
    SCENEOBJECT_DYNAMIC_END                                     = OBJECT_DYNAMIC_END + 0x000,
};

enum ConversationFields
{
    CONVERSATION_LAST_LINE_END_TIME                             = OBJECT_END + 0x000, // Size: 1, Flags: DYNAMIC
    CONVERSATION_END                                            = OBJECT_END + 0x001,
};

enum ConversationDynamicFields
{
    CONVERSATION_DYNAMIC_FIELD_ACTORS                           = OBJECT_DYNAMIC_END + 0x000, // Flags: PUBLIC
    CONVERSATION_DYNAMIC_FIELD_LINES                            = OBJECT_DYNAMIC_END + 0x001, // Flags: 0x100
    CONVERSATION_DYNAMIC_END                                    = OBJECT_DYNAMIC_END + 0x002,
};

#endif // _UPDATEFIELDS_H
