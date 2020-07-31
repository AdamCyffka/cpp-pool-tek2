/*
** EPITECH PROJECT, 2019
** cpp_d10_2019
** File description:
** Peon.hpp
*/

#ifndef PEON_H_
    #define PEON_H_

    #include "Victim.hpp"

    class Peon : public Victim {
        public:
            Peon(std::string name);
            ~Peon();
            void getPolymorphed() const override;
    };

#endif /* PEON_H_ */