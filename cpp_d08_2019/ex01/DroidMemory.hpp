/*
** EPITECH PROJECT, 2019
** cpp_d08_2019
** File description:
** DroidMemor.hpp
*/

#ifndef DROID_MEMORY_H
    #define DROID_MEMORY_H

    #include <iostream>

    class DroidMemory {
        public:
            DroidMemory();
            ~DroidMemory();
            size_t getFingerprint() const;
            size_t getExp() const;
            void setFingerprint(size_t Fingerprint);
            void setExp(size_t exp);
            DroidMemory &operator=(const DroidMemory &droid);
            DroidMemory &operator<<(const DroidMemory &right);
            DroidMemory const &operator>>(DroidMemory &right) const;
            DroidMemory &operator+=(const DroidMemory &right);
            DroidMemory &operator+=(size_t exp);
            DroidMemory &operator+(const DroidMemory &right) const;
            DroidMemory &operator+(size_t exp) const;
            bool operator==(DroidMemory const &droid) const;
            bool operator!=(DroidMemory const &droid) const;
        private:
            size_t Fingerprint;
            size_t Exp;
    };

    std::ostream &operator<<(std::ostream &os, DroidMemory const &droid);

#endif /* DROID */