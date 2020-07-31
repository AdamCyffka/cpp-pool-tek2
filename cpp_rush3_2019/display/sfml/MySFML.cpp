/*
** EPITECH PROJECT, 2019
** cpp_rush3_2019
** File description:
** main.cpp
*/

#include "MySFML.hpp"

mySFML::mySFML() : window(sf::VideoMode(1000, 800), "MY TOP TROP BEAU")
{
    this->font.loadFromFile("display/sfml/arial.ttf");
    this->text.setFont(this->font);
}

mySFML::~mySFML()
{
}