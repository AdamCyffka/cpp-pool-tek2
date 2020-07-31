/*
** EPITECH PROJECT, 2019
** cpp_d14m_2019
** File description:
** Fruit.cpp
*/

#include "Fruit.hpp"

Fruit::Fruit(int vitamins, const std::string &name)
{
    this->_vitamins = vitamins;
    this->_name = name;
}

Fruit::Fruit(Fruit const &Fruit)
{
    this->_vitamins = Fruit._vitamins;
    this->_name = Fruit._name;
}

Fruit& Fruit::operator=(Fruit const &Fruit)
{
    this->_name = Fruit._name;
    this->_vitamins = Fruit._vitamins;
    return (*this);
}