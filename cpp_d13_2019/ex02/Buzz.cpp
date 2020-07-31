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

Buzz::~Buzz() = default;