/*
** EPITECH PROJECT, 2020
** Teddy.hpp
** File description:
** Teddy.hpp
*/

#ifndef TMP_RUSH_TEDDY_HPP
#define TMP_RUSH_TEDDY_HPP

#include "Toy.hpp"

class Teddy : public Toy {
    public:
    // Constructor and destructor
    Teddy();
    ~Teddy();

    // Setters and getters
    void setTitle(std::string title);
    std::string getTitle();

    // Members Functions
    bool isTaken();

    private:

    // Attributes
    bool _isTaken;
    std::string _title;
};

#endif //TMP_RUSH_TEDDY_HPP
