/*
** EPITECH PROJECT, 2019
** cpp_d10_2019
** File description:
** PlasmaRifle.hpp
*/

#ifndef PLASMA_RIFLE_H_
    #define PLASMA_RIFLE_H_

    #include "AWeapon.hpp"

    class PlasmaRifle : public AWeapon {
        public:
            PlasmaRifle();
            virtual ~PlasmaRifle();
            virtual void attack() const;
    };

#endif /* PLASMA_RIFLE_H_ */