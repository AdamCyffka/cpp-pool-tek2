/*
** EPITECH PROJECT, 2019
** cpp_d13_2019
** File description:
** Woody.cpp
*/

#include "Woody.hpp"

Woody::Woody(std::string const &name, const std::string &filename) : Toy(WOODY, name, filename)
{
}

Woody::~Woody()
{
}

void Woody::speak(std::string const &message)
{
    std::cout << "WOODY: " << this->_name << " \"" << message << "\"" << std::endl;
}