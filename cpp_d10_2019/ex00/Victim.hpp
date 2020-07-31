/*
** EPITECH PROJECT, 2019
** cpp_d10_2019
** File description:
** Victim.hpp
*/

#ifndef VICTIM_H_
    #define VICTIM_H_

    #include <iostream>
    
    class Victim {
        public:
            Victim(std::string name);
            ~Victim();
            virtual void getPolymorphed() const;
            std::string getName() const;
        protected:
            std::string _name;
    };

    std::ostream &operator<<(std::ostream &os, Victim const &slave);

#endif /* VICTIM_H_ */