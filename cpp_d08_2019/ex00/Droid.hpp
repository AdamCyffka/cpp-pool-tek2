/*
** EPITECH PROJECT, 2019
** cpp_d08_2019
** File description:
** Droid.hpp
*/

#ifndef DROID_H
    #define DROID_H

    #include <string>
    #include <iostream>

    class Droid {
        public:
            Droid(std::string serial = "");
            Droid(const Droid &droid);
            ~Droid();
            std::string getId() const;
            size_t getEnergy() const;
            size_t getAttack() const;
            size_t getToughness() const;
            std::string *getStatus() const;
            void setId(std::string id);
            void setEnergy(size_t energy);
            void setStatus(std::string *status);
            Droid &operator=(const Droid &droid);
            bool operator==(const Droid &droid) const;
            bool operator!=(const Droid &droid) const;
            Droid &operator<<(size_t &energy);
        private:
            std::string Id;
            size_t Energy;
            const size_t Attack;
            const size_t Toughness;
            std::string *Status;
    };

std::ostream &operator<<(std::ostream &os, Droid const &droid);

#endif /* DROID_H */