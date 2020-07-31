/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** TableRand
*/

#include "TableRand.hpp"
#include "LittlePony.hpp"
#include "Teddy.hpp"

TableRand::TableRand()
{
}

TableRand::~TableRand()
{
}

Toy *TableRand::getRandomToy()
{
    Teddy *teddy = new Teddy();
    LittlePony *pony = new LittlePony();
    if (rand() % 2 == 1) {
        delete pony;
        std::cout << "A random object comes to your table and you get a "
                     "teddy" <<
        std::endl;
        return teddy;
    }
    delete teddy;
    std::cout << "A random object comes to your table and you get a pony" <<
        std::endl;
    return pony;
}