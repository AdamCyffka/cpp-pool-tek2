/*
** EPITECH PROJECT, 2020
** Teddy.cpp
** File description:
** Teddy.cpp
*/

#include <iostream>
#include "Teddy.hpp"

Teddy::Teddy() {}

Teddy::~Teddy() {}

bool Teddy::isTaken()
{
    if (this->_isTaken) {
        this->_isTaken = false;
        return false;
    } else {
        this->_isTaken = true;
        std::cout << "gra hu" << std::endl;
        return true;
    }
}

void Teddy::setTitle(std::string title)
{
    this->_title = title;
}

std::string Teddy::getTitle()
{
    return (this->_title);
}
