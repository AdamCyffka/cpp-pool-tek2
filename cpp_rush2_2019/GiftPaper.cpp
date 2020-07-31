/*
** EPITECH PROJECT, 2019
** cpp_rush2_2019
** File description:
** GiftPaper.cpp
*/

#include "GiftPaper.hpp"

GiftPaper::GiftPaper() : Wrap(Object::GIFTPAPER)
{

}

GiftPaper::GiftPaper(const GiftPaper &other) : Wrap(Object::GIFTPAPER)
{
    this->_box = other._box;
}

GiftPaper::~GiftPaper() {}

Box *GiftPaper::getBox() const
{
    return (this->_box) ? this->_box : nullptr;
}

void GiftPaper::setBox(Box *box)
{
    this->_box = box;
}