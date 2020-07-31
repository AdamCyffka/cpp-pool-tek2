/*
** EPITECH PROJECT, 2019
** cpp_d09_2019
** File description:
** Paladin.hpp
*/

#ifndef PALADIN_H
    #define PALADIN_H

    #include "Warrior.hpp"
    #include "Priest.hpp"

    class Paladin : public Warrior, public Priest {
        public:
            Paladin(const std::string &name, int level);
            ~Paladin();
            int CloseAttack();
            int RangeAttack();
            void Heal();
            void RestorePower();
            int Intercept();
    };

#endif /* PALADIN_H */