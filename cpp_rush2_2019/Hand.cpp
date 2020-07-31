/*
** EPITECH PROJECT, 2020
** Elves.hpp
** File description:
** Elves.hpp
*/

#include "Hand.hpp"
#include "ConveyorBeltRand.hpp"

Hand::Hand() {}

Hand::~Hand() {}

void Hand::pressButton(stateButton button, ConveyorBelt *convoyer)
{
     if (button == Hand::IN) {
         convoyer->INButton(ConveyorBeltRand::getRandomWrap());
     } else if (button == Hand::OUT) {
         convoyer->OUTButton();
     }
}
