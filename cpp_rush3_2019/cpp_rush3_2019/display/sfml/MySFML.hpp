/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** mySFML
*/

#ifndef MYSFML_HPP_
#define MYSFML_HPP_

#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "../Display.hpp"

class mySFML {
    public:
    mySFML();
    ~mySFML();

    sf::RenderWindow window;
    sf::Event event;
    sf::Clock clock;
    sf::Time time;
    sf::Font font;
    sf::Text text;
    int **GraphRam;
};

int displaySFML(Display &display);

#endif /* MYSFML_HPP_ */
