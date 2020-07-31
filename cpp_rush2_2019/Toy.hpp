/*
** EPITECH PROJECT, 2020
** Toy.hpp
** File description:
** Toy.hpp
*/

#ifndef TMP_RUSH_TOY_HPP
#define TMP_RUSH_TOY_HPP

#include "Object.hpp"

class Toy : public Object {
    public:
    // Constructor and destructor
    Toy();
    Toy(const Toy &other);
    virtual ~Toy();

    // Setters and getters
    virtual std::string getTitle() {return "";};

    // Members Functions


};

#endif //TMP_RUSH_TOY_HPP
