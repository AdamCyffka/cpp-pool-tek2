/*
** EPITECH PROJECT, 2020
** Hand.hpp
** File description:
** Hand.hpp
*/

#ifndef CPP_RUSH2_2019_ELVES_HPP
#define CPP_RUSH2_2019_ELVES_HPP

#include "GiftPaper.hpp"
#include "Table.hpp"
#include "LittlePony.hpp"
#include "Teddy.hpp"
#include "ConveyorBelt.hpp"
#include <vector>

class Elves {
    public:
    // Constructor and destructor
    Elves();
    ~Elves();

    // Members Functions
    std::vector<std::string> look(Table *table);
    void wrapMeThat();
    bool put(Table *table, Object *object);
    bool take(Table *table);
    bool put (ConveyorBelt *convoyer, Object *object);
    bool take(ConveyorBelt *convoyer);
    bool hasToy();
    bool hasBox();
    bool hasGiftPaper();

    public:
    Box *_box;
    GiftPaper *_giftpaper;
    Toy *_toy;
};

#endif //CPP_RUSH2_2019_ELVES_HPP
