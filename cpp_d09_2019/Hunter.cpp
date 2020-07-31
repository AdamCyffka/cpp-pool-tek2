/*
** EPITECH PROJECT, 2019
** cpp_d09_2019
** File description:
** Hunter.cpp
*/

#include "Hunter.hpp"

Hunter::Hunter(const std::string &name, int level) : Character(name, level), Warrior(name, level)
{
    this->_name = name;
    this->_level = level;
    this->_pv = 100;
    this->_power = 100;
    this->_strength = 9;
    this->_stamina = 9;
    this->_intelligence = 5;
    this->_spirit = 6;
    this->_agility = 25;
    this->Range = Character::CLOSE;
    this->weaponName = std::string("sword");
    this->_class = "Hunter";
    this->_race = "Elf";
    std::cout << this->_name << " is born from a tree" << std::endl;
}

Hunter::~Hunter() {}

int Hunter::CloseAttack()
{
    if (this->_power >= 30) {
        this->_power -= 30;
        std::cout << this->_name << " strikes with his " << this->weaponName << std::endl;
        return 20 + this->_strength;
    }
    else {
        std::cout << this->_name << " out of power" << std::endl;
        return 0;
    }
}

int Hunter::RangeAttack()
{
    if (this->_power >= 25) {
        this->_power -= 25;
        std::cout << this->_name << " uses his bow" << std::endl;
        return 20 + this->_agility;
    }
    else {
        std::cout << this->_name << " out of power" << std::endl;
        return 0;
    }
}

void Hunter::Heal()
{
    this->_pv += 50;
    if (this->_pv > 100)
        this->_pv = 100;
    std::cout << this->_name << " takes a potion" << std::endl;
}

void Hunter::RestorePower()
{
    this->_power = 100;
    std::cout << this->_name << " meditates" << std::endl;
}