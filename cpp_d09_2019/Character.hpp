/*
** EPITECH PROJECT, 2019
** cpp_d09_2019
** File description:
** Character.hpp
*/

#ifndef CHARACTER_H
    #define CHARACTER_H

    #include <iostream>

    class Character {
        public:
            Character(const std::string &name, int level);
            ~Character();
            const std::string &getName() const;
            int getLvl() const;
            int getPv() const;
            int getPower() const;
            int CloseAttack();
            int RangeAttack();
            void Heal();
            void RestorePower();
            void TakeDamage(int _damage);
            enum AttackRange {
                CLOSE,
                RANGE
            };
            AttackRange Range;
        protected:
            std::string _name;
            std::string _class;
		    std::string _race;
            int _level;
            int _pv;
            int _power;
            int _strength;
            int _stamina;
            int _intelligence;
            int _spirit;
            int _agility;
    };

#endif /* CHARACTER_H */