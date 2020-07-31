/*
** EPITECH PROJECT, 2019
** cpp_d14m_2019
** File description:
** Fruit.hpp
*/

#ifndef FRUIT_HPP_
#define FRUIT_HPP_

#include <string>
#include <iostream>

class Fruit {
    public:
        Fruit() {};
        Fruit(Fruit const &Fruit);
        Fruit(int vitamins, const std::string &name);
        virtual ~Fruit() {};
        Fruit& operator=(const Fruit&);
        virtual std::string getName() const = 0;
        virtual int getVitamins() const = 0;
     protected:
        int _vitamins;
        std::string _name;
};

#endif /* FRUIT_HPP_ */