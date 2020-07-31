/*
** EPITECH PROJECT, 2019
** cpp_d10_2019
** File description:
** PowerFist.hpp
*/

#ifndef POWER_FIST_H
    #define POWER_FIST_H

    #include "AWeapon.hpp"

    class PowerFist : public AWeapon {
        public:
            PowerFist();
            virtual ~PowerFist();
            virtual void attack() const;
    };

#endif /* POWER_FIST_H */
