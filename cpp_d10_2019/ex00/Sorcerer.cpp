/*
** EPITECH PROJECT, 2019
** cpp_d10_2019
** File description:
** Sorcerer.cpp
*/

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->_name = name;
    this->_title = title;
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getName() const
{
    return (this->_name);
}

std::string Sorcerer::getTitle() const
{
    return (this->_title);
}

std::ostream &operator<<(std::ostream &os, Sorcerer const &mage)
{
    return (os << "I am " << mage.getName() << ", " << mage.getTitle() << ", and I like ponies!" << std::endl);
}

void Sorcerer::polymorph(const Victim &victim) const
{
    victim.getPolymorphed();
}