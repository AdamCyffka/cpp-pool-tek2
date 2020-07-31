/*
** EPITECH PROJECT, 2019
** cpp_d13_2019
** File description:
** Woody.hpp
*/

#include "Toy.hpp"
#include <iostream>

class Woody : public Toy {
    public:
        Woody(std::string const &name, std::string const &filename = "woody.txt");
        virtual ~Woody();
};