/*
** EPITECH PROJECT, 2019
** cpp_d07a_2019
** File description:
** Skat.hpp
*/

#ifndef SKAT_H
    #define SKAT_H
    
    #include <string>
    #include <iostream>

    class Skat {
        public:
            Skat(const std::string &name = "bob", int stimPaks = 15);
            ~Skat();
            int &stimPaks();
            const std::string &name();
            void shareStimPaks(int, int&);
            void addStimPaks(unsigned int);
            void useStimPaks();
            void status();
        private:
            std::string _name;
            int _stimPaks;
    };

#endif /* SKAT_H */