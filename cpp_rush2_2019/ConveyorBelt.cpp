/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** ConveyorBelt
*/

#include "ConveyorBelt.hpp"
#include "GiftPaper.hpp"

ConveyorBelt::ConveyorBelt() :
_isFree(true)
{
}

ConveyorBelt::~ConveyorBelt()
{
    if (this->_wrap)
        delete this->_wrap;
}

Wrap *ConveyorBelt::getWrap() const
{
    return this->_wrap;
}

void ConveyorBelt::setWrap(Wrap *wrap)
{
    this->_wrap = wrap;
    this->_isFree = false;
}

bool ConveyorBelt::isFree() const
{
    return this->_isFree;
}


void ConveyorBelt::INButton(Wrap *wrap)
{
    if (!this->_wrap) {
        this->setWrap(wrap);
        this->_isFree = false;
        std::cout << "The IN Button has been pressed!" << std::endl;
    }
}

void ConveyorBelt::OUTButton()
{
    if (this->_wrap) {
        if (this->_wrap->getType() == Wrap::GIFTPAPER
        && ((GiftPaper *) this->_wrap)->getBox()
        && ((GiftPaper *) this->_wrap)->getBox()->getObject()) {
            delete this->_wrap;
            this->_isFree = false;
            std::cout << "Present sent to Santa." << std::endl;
            return;
        } else if (this->_wrap->getType() == Wrap::GIFTPAPER
        && ((GiftPaper *) this->_wrap)->getBox()) {
            std::cout << "The Box is empty." << std::endl;
            return;
        }
        std::cout << "This type of Object cannot be sent." << std::endl;
        return;
    }
    std::cout << "There is nothing to send on the convoyerbelt." << std::endl;
}

