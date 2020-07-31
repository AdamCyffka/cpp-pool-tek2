/*
** EPITECH PROJECT, 2019
** cpp_d10_2019
** File description:
** AEnemy.hpp
*/

#ifndef AENEMY_H_
    #define AENEMY_H_

    #include <iostream>

    class AEnemy {
        public:
            AEnemy(int hp, std::string const &type);
            virtual ~AEnemy();
            virtual void takeDamage(int damage);
            std::string const &getType() const;
            int getHP() const;
        protected:
            std::string _type;
            int _hp;
    };

#endif /* AENEMY_H_ */