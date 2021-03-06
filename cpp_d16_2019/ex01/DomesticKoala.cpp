/*
** EPITECH PROJECT, 2019
** cpp_d16_2019
** File description:
** DomesticKoala.cpp
*/

#include "DomesticKoala.hpp"

DomesticKoala::DomesticKoala(KoalaAction& action) : _action(action), _actPtr(256)
{
}

DomesticKoala::DomesticKoala(const DomesticKoala &koala) : _action(koala._action), _actPtr(koala._actPtr)
{
}

DomesticKoala::~DomesticKoala()
{
}

DomesticKoala &DomesticKoala::operator=(const DomesticKoala &koala)
{
    this->_action = koala._action;
    this->_actPtr = koala._actPtr;
    return *this;
}

const std::vector<DomesticKoala::methodPointer_t> *DomesticKoala::getActions(void) const
{
    return &this->_actPtr;
}

void DomesticKoala::learnAction(unsigned char c, DomesticKoala::methodPointer_t ptr)
{
    this->_actPtr[c] = ptr;
}

void DomesticKoala::unlearnAction(unsigned char c)
{
    this->_actPtr[c] = NULL;
}

void DomesticKoala::doAction(unsigned char c, const std::string &str)
{
    methodPointer_t func = this->_actPtr[c];
    if (func)
        (this->_action.*func)(str);
}

void DomesticKoala::setKoalaAction(KoalaAction &action)
{
    this->_action = action;
}