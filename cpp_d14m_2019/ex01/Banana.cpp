/*
** EPITECH PROJECT, 2019
** cpp_d14m_2019
** File description:
** Banana.cpp
*/

#include "Banana.hpp"

Banana::Banana()
{
    this->_name = "banana";
    this->_vitamins = 5;
}

Banana::~Banana() {}

Banana::Banana(Banana const &Banana) : Fruit (Banana.getVitamins(), Banana.getName()) {}

Banana &Banana::operator=(Banana const &Banana)
{
    this->_name = Banana.getName();
    this->_vitamins = Banana.getVitamins();
    return (*this);
}

std::string Banana::getName() const
{
    return (this->_name);
}

int Banana::getVitamins() const
{
    return (this->_vitamins);
}