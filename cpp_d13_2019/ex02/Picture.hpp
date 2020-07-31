/*
** EPITECH PROJECT, 2019
** cpp_d13_2019
** File description:
** Picture.hpp
*/

#ifndef PICTURE_HPP_
#define PICTURE_HPP_

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class Picture {
    public:
        std::string data;
        Picture();
        Picture(const std::string &filename);
        virtual ~Picture();
        bool getPictureFromFile(const std::string &filename);
        Picture &operator=(Picture const &picture);
};

#endif /* PICTURE_HPP_ */