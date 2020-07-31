/*
** EPITECH PROJECT, 2019
** cpp_d09_2019
** File description:
** Warrior.cpp
*/

#include "Warrior.hpp"

Warrior::Warrior(const std::string &name, int level) : Character(name, level)
{
    this->_name = name;
    this->_level = level;
    this->_pv = 100;
    this->_power = 100;
    this->_strength = 12;
    this->_stamina = 12;
    this->_intelligence = 6;
    this->_spirit = 5;
    this->_agility = 7;
    this->Range = Character::CLOSE;
    this->weaponName = std::string("hammer");
    std::cout << "I'm " << this->_name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior() {}

int Warrior::CloseAttack()
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

int Warrior::RangeAttack()
{
    if (this->_power >= 10) {
        this->_power -= 10;
        std::cout << this->_name << " intercepts" << std::endl;
        this->Range = Character::CLOSE;
        return 0;
    }
    else {
        std::cout << this->_name << " out of power" << std::endl;
        return 0;
    }
}