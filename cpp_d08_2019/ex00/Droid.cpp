/*
** EPITECH PROJECT, 2019
** cpp_d08_2019
** File description:
** Droid.cpp
*/

#include "Droid.hpp"

Droid::Droid(const std::string serial) : Id(serial), Energy(50), Attack(25), Toughness(15)
{
    this->Status = new std::string("Standing by");
    std::cout << "Droid '" << this->Id << "' Activated" << std::endl;
}

Droid::Droid(Droid const &droid) : Id(droid.Id), Energy(droid.Energy), Attack(droid.Attack), Toughness(droid.Toughness)
{
    this->Status = new std::string(*(droid.Status));
    std::cout << "Droid '" << this->Id << "' Activated, Memory Dumped" << std::endl;
}

Droid::~Droid()
{
    delete this->Status;
    std::cout << "Droid '" << this->Id << "' Destroyed" << std::endl;
}

std::string Droid::getId() const
{
    return (this->Id);
}

size_t Droid::getEnergy() const
{
    return (this->Energy);
}

size_t Droid::getAttack() const
{
    return (this->Attack);
}

size_t Droid::getToughness() const
{
    return (this->Toughness);
}

std::string *Droid::getStatus() const
{
    return (this->Status);
}

void Droid::setStatus(std::string *status)
{
    delete this->Status;
    this->Status = status;
}

void Droid::setId(std::string id)
{
    this->Id = id;
}

void Droid::setEnergy(size_t energy)
{
    if (energy > 100)
        this->Energy = 100;
    else
        this->Energy = energy;
}

Droid &Droid::operator=(const Droid &droid)
{
    this->Id = droid.Id;
    this->Energy = droid.Energy;
    delete this->Status;
    this->Status = new std::string(*(droid.Status));
    return (*this);
}

bool Droid::operator==(Droid const &droid) const
{
    if (this->Id == droid.getId() && *this->Status == *droid.getStatus() && this->Energy == droid.getEnergy())
        return (true);
    return (false);
}

bool Droid::operator!=(Droid const &droid) const
{
    return (this->Id != droid.getId() || *this->Status != *droid.getStatus() || this->Energy != droid.getEnergy());
}

Droid &Droid::operator<<(size_t &energy)
{
    if (this->Energy + energy > 100) {
        energy = energy + this->Energy - 100;
        this->Energy = 100;
    } else {
        this->Energy += energy;
        energy = 0;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &os, const Droid &droid)
{
    return (os << "Droid '" << droid.getId() << "', " << *(droid.getStatus()) << ", " << droid.getEnergy());
}