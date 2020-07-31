/*
** EPITECH PROJECT, 2020
** Elves.hpp
** File description:
** Elves.hpp
*/

#ifndef CPP_RUSH2_2019_HAND_HPP
#define CPP_RUSH2_2019_HAND_HPP

#include "Table.hpp"
#include "ConveyorBelt.hpp"

class Hand {
    public:
    // Constructor and destructor
    Hand();
    ~Hand();
    enum stateButton {
        IN,
        OUT
    };

    // Members Functions
    void pressButton(stateButton button, ConveyorBelt *convoyer);
    protected:
};

#endif //CPP_RUSH2_2019_HAND_HPP