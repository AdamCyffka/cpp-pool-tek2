/*
** EPITECH PROJECT, 2020
** Table.hpp
** File description:
** Table.hpp
*/

#include <iostream>
#include <array>
#include "Table.hpp"

Table::Table()
{
    std::cout << "Table created" << std::endl;
}

Table::~Table()
{
    std::cout << "Table destroyed" << std::endl;
}

std::vector<Object*> Table::getTable()
{
    return this->_gifts;
}

void Table::setTable(Object *gift)
{
    this->_gifts.push_back(gift);
}

std::vector<std::string> Table::getTableTitle()
{
    Object *obj;
    std::vector<std::string> tmp;
    int end = this->_gifts.size();
    for (int i = 0; i < end; ++i) {
        obj = this->_gifts.at(i);
        tmp.push_back(obj->getTitle());
    }
    return tmp;
}