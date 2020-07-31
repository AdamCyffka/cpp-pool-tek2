/*
** EPITECH PROJECT, 2019
** cpp_d10_2019
** File description:
** SuperMutant.hpp
*/

#ifndef SUPER_MUTANT_H_
    #define SUPER_MUTANT_H_

    #include "AEnemy.hpp"

    class SuperMutant : public AEnemy {
        public:
            SuperMutant();
            virtual ~SuperMutant();
            virtual void takeDamage(int damage);
    };

#endif /* SUPER_MUTANT_H_ */