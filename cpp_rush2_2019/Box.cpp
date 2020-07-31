/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Box
*/

#include "Box.hpp"

Box::Box() : Wrap(Wrap::BOX)
{
}

Box::Box(const Box &other) : Wrap(Wrap::BOX)
{
    this->_object = other._object;
}


Box::~Box()
{
}

Object *Box::getObject() const
{
    return (this->_object) ? this->_object : nullptr;
}

void Box::setObject(Object *object)
{
    this->_object = object;
}