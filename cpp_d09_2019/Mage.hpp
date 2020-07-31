/*
** EPITECH PROJECT, 2019
** cpp_d09_2019
** File description:
** Mage.hpp
*/

#ifndef MAGE_H
    #define MAGE_H

    #include <iostream>
    #include "Character.hpp"

    class Mage : virtual public Character {
        public:
            Mage(const std::string &name, int level);
            ~Mage();
            int CloseAttack();
            int RangeAttack();
            void RestorePower();
    };

#endif /* MAGE_H */