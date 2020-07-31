/*
** EPITECH PROJECT, 2019
** cpp_d14m_2019
** File description:
** FruitNode.hpp
*/

#ifndef FRUITNODE_HPP_ 
#define FRUITNODE_HPP_

#include <iostream>
#include <string>
#include "Fruit.hpp"

struct FruitNode {
    Fruit *_fruit;
    FruitNode *next;
};

#endif /* FRUITNODE_HPP_ */