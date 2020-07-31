/*
** EPITECH PROJECT, 2019
** cpp_d14m_2019
** File description:
** Banana.hpp
*/

#ifndef BANANA_HPP_ 
#define BANANA_HPP_

#include <iostream>
#include <string>
#include "Fruit.hpp"

class Banana : public Fruit {
    public:
        Banana();
        Banana(Banana const &Banana);
        ~Banana();
        Banana &operator=(Banana const &Banana);
        virtual std::string getName() const;
        virtual int getVitamins() const;
};

#endif /* BANANA_HPP_ */