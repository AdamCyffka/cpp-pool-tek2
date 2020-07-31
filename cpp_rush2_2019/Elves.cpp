/*
** EPITECH PROJECT, 2020
** Elves.cpp
** File description:
** Elves.cpp
*/

#include <iostream>
#include <array>
#include "Elves.hpp"

Elves::Elves() : _box(nullptr), _giftpaper(nullptr), _toy(nullptr)
{
    std::cout << "Elves created!" << std::endl;
}

Elves::~Elves()
{
    std::cout << "Elves deleted!" << std::endl;
}

std::vector<std::string> Elves::look(Table *table)
{
    std::cout << "Look at this table!" << std::endl;
    return table->getTableTitle();
}

void Elves::wrapMeThat()
{
    if (this->_box) {
        if (!this->_box->isOpen())
            this->_box->openMe();
        this->_box->setObject(this->_toy);
        this->_box->closeMe();
        this->_giftpaper->setBox(this->_box);
        this->_giftpaper->closeMe();
        std::cout << "tuuuut tuuut tuut" << std::endl;
    }
}

bool Elves::put(Table *table, Object *object)
{
    if (table != nullptr) {
        if (table->getTable().size() < 10) {
            table->setTable(object);
            return true;
        } else {
            std::cout << "Table collapsed" << std::endl;
            exit(0);
            /*table->setTable(object);
            int end = table->getTable().size();
            for (int i = 0; i < end; ++i)
                delete table->getTable().at(i);
            delete table;*/
        }
    }
    return false;
}

bool Elves::take(Table *table)
{
    if (table != nullptr) {
        Object *obj;
        int end = table->getTable().size();
        for (int i = 0; i < end; ++i) {
            obj = table->getTable().at(i);
            if (obj != nullptr && obj->getType() == Object::BOX &&
                this->_box == nullptr) {
                this->_box = (Box *)obj;
                return true;
            } else if (obj != nullptr && obj->getType() == Object::GIFTPAPER &&
                this->_giftpaper == nullptr) {
                this->_giftpaper = (GiftPaper *)obj;
                return true;
            } else if (obj != nullptr && obj->getType() == Object::TOY &&
                this->_toy == nullptr) {
                this->_toy = (Toy *)obj;
                return true;
            }
        }
    }
    return false;
}

bool Elves::put(ConveyorBelt *convoyer, Object *object)
{
    if (convoyer != nullptr) {
        if (convoyer->isFree() && object->getType() == Object::GIFTPAPER) {
            convoyer->setWrap((Wrap *)object);
            object = nullptr;
            return true;
        }
    }
    return false;
}

bool Elves::take(ConveyorBelt *convoyer)
{
    if (convoyer != nullptr) {
        if (!convoyer->isFree()) {
            Object *obj = convoyer->getWrap();
            if (obj != nullptr && obj->getType() == Object::BOX &&
                this->_box == nullptr) {
                this->_box = (Box *)obj;
                return true;
            } else if (obj != nullptr && obj->getType() == Object::GIFTPAPER &&
                this->_giftpaper == nullptr) {
                this->_giftpaper = (GiftPaper *)obj;
                return true;
            }
        }
    }
    return false;
}

bool Elves::hasToy()
{
    return (this->_toy) ? true : false;
}

bool Elves::hasBox()
{
    return (this->_box) ? true : false;
}

bool Elves::hasGiftPaper()
{
    return (this->_giftpaper) ? true : false;
}
