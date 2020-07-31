/*
** EPITECH PROJECT, 2020
** LittlePony.cpp
** File description:
** LittlePony.cpp
*/

#include <iostream>
#include "LittlePony.hpp"

LittlePony::LittlePony() {}

LittlePony::~LittlePony() {}

bool LittlePony::isTaken()
{
    if (this->_isTaken) {
        this->_isTaken = false;
        return false;
    } else {
        this->_isTaken = true;
        std::cout << "yo man" << std::endl;
        return true;
    }
}

void LittlePony::setTitle(std::string title)
{
    this->_title = title;
}

std::string LittlePony::getTitle()
{
    return this->_title;
}