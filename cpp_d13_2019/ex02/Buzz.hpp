/*
** EPITECH PROJECT, 2019
** cpp_d13_2019
** File description:
** Buzz.hpp
*/

#ifndef BUZZ_HPP_ 
#define BUZZ_HPP_

#include <iostream>
#include "Toy.hpp"

class Buzz : public Toy {
    public:
    Buzz(std::string const &name, std::string const &filename = "buzz.txt");
    virtual ~Buzz();
};

#endif /* BUZZ_HPP_ */