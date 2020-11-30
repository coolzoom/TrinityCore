ALTER TABLE `creature_template` 
    DROP COLUMN `difficulty_entry_1`,
    DROP COLUMN `difficulty_entry_2`,
    DROP COLUMN `difficulty_entry_3`,
    ADD `ModelId1` INT(11) UNSIGNED DEFAULT 0 AFTER `KillCredit2`,
    ADD `ModelId2` INT(11) UNSIGNED DEFAULT 0 AFTER `ModelId1`,
    ADD `ModelId3` INT(11) UNSIGNED DEFAULT 0 AFTER `ModelId2`,
    ADD `ModelId4` INT(11) UNSIGNED DEFAULT 0 AFTER `ModelId3`;
