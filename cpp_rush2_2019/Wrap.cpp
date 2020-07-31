/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Wrap
*/

#include "Wrap.hpp"

Wrap::Wrap(objectType type) : Object(type)
{
}

Wrap::Wrap(const Wrap &other)
{
    this->_isOpen = other._isOpen;
}

Wrap::~Wrap()
{
}

bool Wrap::isOpen() const
{
    return this->_isOpen;
}

void Wrap::openMe()
{
    this->_isOpen = true;
}

void Wrap::closeMe()
{
    this->_isOpen = false;
}