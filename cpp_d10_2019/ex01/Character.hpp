/*
** EPITECH PROJECT, 2019
** cpp_d10_2019
** File description:
** Character.hpp
*/

#ifndef CHARACTER_H_
    #define CHARACTER_H_

    #include <iostream>
    #include "AWeapon.hpp"
    #include "AEnemy.hpp"

    class Character {
        public:
            Character(std::string const &name);
            virtual ~Character();
            void recoverAP();
            void equip(AWeapon *weapon);
            void attack(AEnemy *enemy);
            std::string const &getName() const;
            int getAP() const;
            AWeapon *getWeapon() const;
        protected:
            std::string _name;
            int _hp;
            int _ap;
            AWeapon *_weapon;
    };

    std::ostream &operator<<(std::ostream &os, Character const &elem);

#endif /* CHARACTER_H_ */