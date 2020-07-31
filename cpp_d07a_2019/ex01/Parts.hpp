/*
** EPITECH PROJECT, 2019
** cpp_d07a_2019
** File description:
** Parts.hpp
*/

#ifndef PARTS_H
    #define PARTS_H

    #include <iostream>

    class Arms {
        public:
            Arms(std::string serial = "A-01", bool functional=true);
            bool isFunctionnal() const;
	        std::string serial();
	        void informations() const;
        private:
            std::string _name;
            std::string _serial;
            bool _functional;
    };

    class Legs {
        public:
            Legs(std::string serial="L-01", bool functional = true);
            bool isFunctionnal() const;
            std::string serial();
            void informations() const;
        private:
            std::string _name;
            std::string _serial;
            bool _functional;
    };

    class Head {
        public:
            Head(std::string serial = "H-01", bool functional = true);
            bool isFunctionnal() const;
            std::string serial();
            void informations() const;
        private:
            std::string _name;
            std::string _serial;
            bool _functional;
    };

#endif /*PARTS_H */