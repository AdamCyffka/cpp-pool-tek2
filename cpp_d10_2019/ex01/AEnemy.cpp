/*
** EPITECH PROJECT, 2019
** cpp_d10_2019
** File description:
** AEnemy.cpp
*/

#include "AEnemy.hpp"

AEnemy::AEnemy(int hp, std::string const &type)
{
    this->_hp = hp;
    this->_type = type;
}

AEnemy::~AEnemy() {}

std::string const &AEnemy::getType() const
{
    return this->_type;
}

int AEnemy::getHP() const
{
    return this->_hp;
}

void AEnemy::takeDamage(int damage)
{
    if (damage > 0)
        this->_hp -= damage;
}