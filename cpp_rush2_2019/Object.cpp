/*
** EPITECH PROJECT, 2020
** Object.cpp
** File description:
** Object.cpp
*/

#include "Object.hpp"

Object::Object(objectType type) : _type(type)
{
}

Object::~Object()
{
}

Object::objectType Object::getType() const
{
    return this->_type;
}

