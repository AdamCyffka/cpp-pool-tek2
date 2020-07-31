/*
** EPITECH PROJECT, 2019
** cpp_d14m_2019
** File description:
** FruitBox.hpp
*/

#ifndef FRUITOX_HPP_ 
#define FRUITOX_HPP_

#include <iostream>
#include <string>
#include "Fruit.hpp"
#include "FruitNode.hpp"

class FruitBox {
    protected:
        int _size;
        int _nbfruits;
        FruitNode *_list;
    public:
        FruitBox(int size);
        ~FruitBox() {};
        int nbFruits() const;
        bool putFruit(Fruit *fruit);
        Fruit *pickFruit();
        FruitNode *head() const;
};

#endif /* FRUITOX_HPP_ */