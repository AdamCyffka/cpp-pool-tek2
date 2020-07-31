/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** ConveyorBeltRand
*/

#include <cstdlib>
#include "ConveyorBeltRand.hpp"
#include "GiftPaper.hpp"
ConveyorBeltRand::ConveyorBeltRand()
{
}

ConveyorBeltRand::~ConveyorBeltRand()
{
}

Wrap *ConveyorBeltRand::getRandomWrap()
{
    GiftPaper *giftPaper = new GiftPaper();
    Box *box = new Box();
    if (rand() % 2 == 1) {
        delete box;
        std::cout << "A gift paper come from the convoyerbelt!" << std::endl;
        return giftPaper;
    }
    delete giftPaper;
    std::cout << "A box come from the convoyerbelt!" << std::endl;
    return box;
}