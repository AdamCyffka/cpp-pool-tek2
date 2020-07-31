/*
** EPITECH PROJECT, 2019
** cpp_d14m_2019
** File description:
** Lemon.cpp
*/

#include "Lemon.hpp"

Lemon::Lemon() : Fruit(3, "lemon")
{
}

Lemon::Lemon(Lemon const &Lemon) : Fruit (Lemon.getVitamins(), Lemon.getName())
{   
}

Lemon &Lemon::operator=(Lemon const &Lemon)
{
    this->_name = Lemon.getName();
    this->_vitamins = Lemon.getVitamins();
    return (*this);
}

std::string Lemon::getName() const
{
    return (this->_name);
}

int Lemon::getVitamins() const
{
    return (this->_vitamins);
}