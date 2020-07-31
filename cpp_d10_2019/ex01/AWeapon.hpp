/*
** EPITECH PROJECT, 2019
** cpp_d10_2019
** File description:
** AWeapon.hpp
*/

#ifndef AWEAPON_H_
    #define AWEAPON_H_

    #include <iostream>

    class AWeapon {
        public:
            AWeapon(std::string const &name, int apcost, int damage);
            virtual ~AWeapon();
            std::string const &getName() const;
            int getAPCost() const;
            int getDamage() const;
            virtual void attack() const = 0;
        protected:
            std::string _name;
            int _apcost;
            int _damage;
    };

#endif /* AWEAPON_H_ */