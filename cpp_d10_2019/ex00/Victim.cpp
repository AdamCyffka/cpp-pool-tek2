/*
** EPITECH PROJECT, 2019
** cpp_d10_2019
** File description:
** Victim.cpp
*/

#include "Victim.hpp"

Victim::Victim(std::string name)
{
    this->_name = name;
    std::cout << "Some random victim called " << this->_name << " just popped!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName() const
{
    return this->_name;
}

std::ostream &operator<<(std::ostream &os, Victim const &slave)
{
    return (os << "I'm " << slave.getName() << " and I like otters!" << std::endl);
}

void Victim::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}