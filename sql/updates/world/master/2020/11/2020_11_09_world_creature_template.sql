ALTER TABLE `creature_template`
    ADD `petSpellDataID` INT(11) UNSIGNED DEFAULT 0 AFTER `rank`,
    ADD `Civilian` BOOLEAN AFTER `RacialLeader`;