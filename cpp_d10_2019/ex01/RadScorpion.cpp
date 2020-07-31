/*
** EPITECH PROJECT, 2019
** cpp_d10_2019
** File description:
** RadScorpion.cpp
*/

#include <iostream>
#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : AEnemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}