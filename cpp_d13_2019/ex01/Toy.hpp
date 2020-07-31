/*
** EPITECH PROJECT, 2019
** cpp_d13_2019
** File description:
** Toy.hpp
*/

#ifndef TOY_HPP_
#define TOY_HPP_

#include "Picture.hpp"
#include <string>

class Toy {
    public:
        enum ToyType {
            BASIC_TOY,
            ALIEN
        };
        Toy();
        Toy(ToyType type, std::string const &name, std::string const &picture);
        Toy(const Toy &copy);
        virtual ~Toy();
        int getType() const;
        std::string const &getName() const;
        std::string const &getAscii() const;
        void setName(std::string const &name);
        bool setAscii(std::string const &picture);
        Toy &operator=(const Toy &toy);
    protected:
        ToyType _type;
        std::string _name;
        Picture _picture;
};

#endif /* TOY_HPP */