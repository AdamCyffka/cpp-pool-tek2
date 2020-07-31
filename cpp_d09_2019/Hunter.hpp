/*
** EPITECH PROJECT, 2019
** cpp_d09_2019
** File description:
** Hunter.hpp
*/

#ifndef HUNTER_H
    #define HUNTER_H

    #include "Warrior.hpp"

    class Hunter : public virtual Character, private Warrior {
        public:
            Hunter(const std::string &name, int level);
            ~Hunter();
            int CloseAttack();
            int RangeAttack();
            void Heal();
            void RestorePower();
        private:
		    std::string const _weapon;
    };

#endif /* HUNTER_H */