/*
** EPITECH PROJECT, 2019
** cpp_d09_2019
** File description:
** Character.cpp
*/

#include "Character.hpp"

Character::Character(const std::string &name, int level)
{
    this->_name = name;
    this->_level = level;
    this->_pv = 100;
    this->_power = 100;
    this->_strength = 5;
    this->_stamina = 5;
    this->_intelligence = 5;
    this->_spirit = 5;
    this->_agility = 5;
    this->Range = Character::CLOSE;
    std::cout << this->_name << " Created" << std::endl;
}

Character::~Character() {}

const std::string &Character::getName() const
{
    return (this->_name);
}

int Character::getLvl() const
{
    return (this->_level);
}

int Character::getPv() const
{
    return (this->_pv);
}

int Character::getPower() const
{
    return (this->_power);
}

int Character::CloseAttack()
{
    if (this->_power >= 10) {
        this->_power -= 10;
        std::cout << this->_name << " strikes with a wooden stick" << std::endl;
        return 10 + this->_strength;
    }
    else {
        std::cout << this->_name << " out of power" << std::endl;
        return 0;
    }
}

int Character::RangeAttack()
{
    if (this->_power >= 10) {
        this->_power -= 10;
        std::cout << this->_name << " tosses a stone" << std::endl;
        return 5 + this->_strength;
    }
    else {
        std::cout << this->_name << " out of power" << std::endl;
        return 0;
    }
}

void Character::Heal()
{
    int heal;

    if (this->_pv < 100) {
        heal = 100 - this->_pv;
        if (heal < 50)
            this->_pv = 100;
        else
            this->_pv += 50;
        std::cout << this->_name << " takes a potion" << std::endl;
    }
}

void Character::RestorePower()
{
    this->_power = 100;
    std::cout << this->_name << " eats" << std::endl;
}

void Character::TakeDamage(int _damage)
{
    this->_pv -= _damage;
    if (this->_pv <= 0)
        std::cout << this->_name << " out of combat" << std::endl;
    else
        std::cout << this->_name << " takes " << _damage << " damage" << std::endl;
}