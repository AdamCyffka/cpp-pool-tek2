/*
** EPITECH PROJECT, 2019
** cpp_d14m_2019
** File description:
** Lime.cpp
*/

#include "Lime.hpp"

Lime::Lime()
{
    this->_name = "lime";
    this->_vitamins = 2;
}

Lime::Lime(Lime const &l) : Lemon()
{
    this->_name = l.getName();
    this->_vitamins = l.getVitamins();
}

Lime &Lime::operator=(Lime const &Lime)
{
    this->_name = Lime.getName();
    this->_vitamins = Lime.getVitamins();

    return (*this);
}

std::string Lime::getName() const
{
    return (this->_name);
}

int Lime::getVitamins() const
{
    return (this->_vitamins);
}