/*
** EPITECH PROJECT, 2019
** cpp_d13_2019
** File description:
** Picture.cpp
*/

#include "Picture.hpp"

Picture::Picture()
{
    this->data = "";
}

Picture::Picture(const std::string &file)
{
    this->getPictureFromFile(file);
}

Picture::~Picture()
{
}

bool Picture::getPictureFromFile(const std::string &filename)
{
    std::ifstream is(filename.data());
	if (is.is_open()) {
		std::stringstream buffer;
		buffer << is.rdbuf();
		data = buffer.str();
        is.close();
        return true;
    }
    data = "ERROR";
    return false;
}

Picture &Picture::operator=(Picture const &picture)
{
	data = picture.data;
	return *this;
}