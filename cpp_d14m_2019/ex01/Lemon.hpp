/*
** EPITECH PROJECT, 2019
** cpp_d14m_2019
** File description:
** Lemon.hpp
*/

#ifndef LEMON_HPP_ 
#define LEMON_HPP_

#include <iostream>
#include <string>
#include "Fruit.hpp"

class Lemon : public Fruit {
    public:
        Lemon();
        Lemon(Lemon const &Lemon);
        ~Lemon() {};
        Lemon &operator=(Lemon const &Lemon);
        virtual std::string getName() const;
        virtual int getVitamins() const;
};

#endif /* LEMON_HPP_ */