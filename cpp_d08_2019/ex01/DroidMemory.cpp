/*
** EPITECH PROJECT, 2019
** cpp_d08_2019
** File description:
** DroidMemory.cpp
*/

#include "DroidMemory.hpp"

DroidMemory::DroidMemory() : Exp(0)
{
    this->Fingerprint = random();
}

DroidMemory::~DroidMemory()
{
}

size_t DroidMemory::getFingerprint() const
{
    return (this->Fingerprint);
}

size_t DroidMemory::getExp() const
{
    return (this->Exp);
}

void DroidMemory::setFingerprint(size_t Fingerprint)
{
    this->Fingerprint = Fingerprint;
}

void DroidMemory::setExp(size_t exp)
{
    this->Exp = exp;
}

DroidMemory &DroidMemory::operator=(const DroidMemory &droid)
{
    this->Fingerprint = droid.Fingerprint;
    this->Exp = droid.Exp;
    return (*this);
}

DroidMemory &DroidMemory::operator<<(const DroidMemory &right)
{
    this->Exp = this->Exp + right.Exp;
    this->Fingerprint = this->Fingerprint ^ right.Fingerprint;
    return (*this);
}

std::ostream &operator<<(std::ostream &os, DroidMemory const &droid)
{
    return (os << "DroidMemory '" << droid.getFingerprint() << "', "
        << droid.getExp());
}

DroidMemory const &DroidMemory::operator>>(DroidMemory &right) const
{
    right.Exp = this->Exp + right.Exp;
    right.Fingerprint = this->Fingerprint ^ right.Fingerprint;
    return (*this);
}

DroidMemory &DroidMemory::operator+=(const DroidMemory &right)
{
    *this << right;
    return (*this);
}

DroidMemory &DroidMemory::operator+=(size_t exp)
{
    this->Exp = this->Exp + exp;
    this->Fingerprint = this->Fingerprint ^ exp;
    return (*this);
}

DroidMemory &DroidMemory::operator+(const DroidMemory &right) const
{
    auto *memory = new DroidMemory();
    memory->Exp = this->Exp + right.Exp;
    memory->Fingerprint = this->Fingerprint;
    return (*memory);
}

DroidMemory &DroidMemory::operator+(size_t exp) const
{
    auto *memory = new DroidMemory();
    memory->Exp = this->Exp + exp;
    memory->setFingerprint(this->Fingerprint ^ exp);
    return (*memory);
}

bool DroidMemory::operator==(DroidMemory const &droid) const
{
    if (this->Fingerprint == droid.Fingerprint && this->Exp == droid.Exp)
        return (true);
    return (false);
}

bool DroidMemory::operator!=(DroidMemory const &droid) const
{
    return !(*this == droid);
}