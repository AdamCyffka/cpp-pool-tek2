/*
** EPITECH PROJECT, 2019
** cpp_d07m_2019
** File description:
** Federation.hpp
*/

#ifndef FEDERATION_H
#define FEDERATION_H

#include <iostream>
#include <string>
#include "WarpSystem.hpp"
#include "Destination.hpp"

namespace Borg {
    class Ship;
}

namespace Federation {
    namespace Starfleet {
        class Captain {
            public:
                Captain(std::string name);
                ~Captain();
                std::string getName();
                int getAge();
                void setAge(int age);
            private:
                std::string _name;
                int _age;
        };
        class Ship {
            public:
                Ship(int length, int width, std::string name, short maxWarp, int torpedo = 0);
                Ship();
                ~Ship();
                void setupCore(WarpSystem::Core *core);
                void checkCore();
                void promote(Captain *captain);
                bool move(int warp, Destination d);
                bool move(int warp);
                bool move(Destination d);
                bool move();
                int getShield();
                void setShield(int shield);
                int getTorpedo();
                void setTorpedo(int torpedo);
                void fire(Borg::Ship *target);
                void fire(int torpedoes, Borg::Ship *target);
            private:
                int _length;
                int _width;
                int _shield;
                int _photonTorpedo;
                short _maxWarp;
                std::string _name;
                WarpSystem::Core *_core;
                Captain *_captain;
                Destination _location;
                Destination _home;
        };
        class Ensign {
            public:
                Ensign(std::string name);
                ~Ensign();
            private:
                std::string _name;
        };
    }

    class Ship {
        public:
            Ship(int length, int width, std::string name);
            ~Ship();
            void setupCore(WarpSystem::Core *core);
            void checkCore();
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
            WarpSystem::Core *getCore();
        private:
            int _length;
            int _width;
            short _maxWarp;
            std::string _name;
            WarpSystem::Core *_core;
            Destination _location;
            Destination _home;
    };
}

#endif /* FEDERATION_H */