/*
** EPITECH PROJECT, 2019
** cpp_d09_2019
** File description:
** Warrior.hpp
*/

#ifndef WARRIOR_H
    #define WARRIOR_H

    #include <iostream>
    #include "Character.hpp"

    class Warrior : virtual public Character {
        public:
            Warrior(const std::string &name, int lvl);
            ~Warrior();
            int CloseAttack();
            int RangeAttack();
        protected:
            std::string weaponName;
    };

#endif /* WARRIOR_H */