/*
** EPITECH PROJECT, 2019
** cpp_d09_2019
** File description:
** Priest.hpp
*/

#ifndef PRIEST_H
    #define PRIEST_H

    #include "Mage.hpp"

    class Priest : public Mage {
        public:
            Priest(const std::string &name, int level);
            ~Priest();
            int CloseAttack();
            void Heal();
    };

#endif /* PRIEST_H */