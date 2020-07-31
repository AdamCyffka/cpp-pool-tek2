/*
** EPITECH PROJECT, 2019
** cpp_d07m_2019
** File description:
** Borg.hpp
*/

#ifndef BORG_H
# define BORG_H

#include "WarpSystem.hpp"
#include "Destination.hpp"

namespace Federation {
    class Ship;
    namespace Starfleet {
        class Ship;
    }
}

namespace Borg {
    class Ship {
        public:
            Ship(int weaponFrequency = 20, short repair = 3);
            ~Ship();
            void setupCore(WarpSystem::Core *core);
            void checkCore();
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
            int getShield(void);
            void setShield(int shield);
            int getWeaponFrequency();
            void setWeaponFrequency(int frequency);
            short getRepair();
            void setRepair(short repair);
            void fire(Federation::Starfleet::Ship *target);
            void fire(Federation::Ship *target);
            void repair();
        private:
            int _side;
            short _maxWarp;
            int _shield;
            int _weaponFrequency;
            short _repair;
            WarpSystem::Core *_core;
            Destination _home;
            Destination _location;
    };
}

#endif /* BORG_H */