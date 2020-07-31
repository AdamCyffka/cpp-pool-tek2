/*
** EPITECH PROJECT, 2019
** cpp_d13_2019
** File description:
** Buzz.cpp
*/

#include "Buzz.hpp"

Buzz::Buzz(std::string const &name, const std::string &filename) : Toy(BUZZ, name, filename)
{
}

Buzz::~Buzz()
{
}

void Buzz::speak(std::string const &message)
{
    std::cout << "BUZZ: " << this->_name << " \"" << message << "\"" << std::endl;
}