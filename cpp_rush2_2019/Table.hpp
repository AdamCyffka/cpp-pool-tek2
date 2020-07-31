/*
** EPITECH PROJECT, 2020
** Table.hpp
** File description:
** Table.hpp
*/

#ifndef CPP_RUSH2_2019_TABLE_HPP
#define CPP_RUSH2_2019_TABLE_HPP

#include <vector>
#include <string>
#include "Object.hpp"

class Table {
    public:
    // Constructor and destructor
    Table();
    ~Table();
    std::vector<Object*> getTable();
    std::vector<std::string> getTableTitle();
    void setTable(Object *gift);
    private:
    std::vector<Object*> _gifts;
};

#endif //CPP_RUSH2_2019_TABLE_HPP
