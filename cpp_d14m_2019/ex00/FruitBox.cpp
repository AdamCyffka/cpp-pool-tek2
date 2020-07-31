/*
** EPITECH PROJECT, 2019
** cpp_d14m_2019
** File description:
** FruitBox.cpp
*/

#include "FruitBox.hpp"

FruitBox::FruitBox(int size)
{
    this->_size = size;
    this->_nbfruits = 0;
    this->_list = NULL;
}

int FruitBox::nbFruits() const
{
    return (this->_nbfruits);
}

FruitNode *FruitBox::head()
{
    if (this->_list == NULL)
        return (NULL);
    return (this->_list);
}

bool FruitBox::putFruit(Fruit *fruit)
{
    FruitNode *tmp = this->_list;
    FruitNode *f_list;

    if (this->_nbfruits != this->_size) {
        while (tmp != NULL && tmp->_fruit != fruit)
            tmp = tmp->next;
        f_list = new FruitNode();
        f_list->_fruit = fruit;
        f_list->next = NULL;
        tmp = this->_list;
        if (tmp == NULL)
            this->_list = f_list;
        else {
            while (tmp != NULL && tmp->next != NULL)
                tmp = tmp->next;
            tmp->next = f_list;
        }
        this->_nbfruits++;
        return (true);
    }
    return (false);
}

Fruit *FruitBox::pickFruit()
{
    if (this->_nbfruits) {
        FruitNode *node = this->_list;
        Fruit *fruit = node->_fruit;
        this->_list = this->_list->next;
        delete node;
        this->_nbfruits--;
        return fruit;
    }
    return nullptr;
}