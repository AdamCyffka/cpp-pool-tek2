/*
** EPITECH PROJECT, 2019
** cpp_d14m_2019
** File description:
** LIttleHand.hpp
*/

#ifndef LITTLEHAND_HPP_
#define LITTLEHAND_HPP_

#include <iostream>
#include <string>
#include "FruitBox.hpp"

class LittleHand {
    public:
        static void sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes);
};

#endif /* LITTLEHAND_HPP_ */