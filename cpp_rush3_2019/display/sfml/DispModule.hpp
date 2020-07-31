/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** sfml
*/

#ifndef SFML_HPP_
#define SFML_HPP_

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include "MySFML.hpp"
#include "../Display.hpp"

void drawShap(mySFML *mySFML);

void dispModNetwork(Display &display, mySFML *mySFML);
void dispModUser(Display &display, mySFML *mySFML);
void dispModTime(Display &display, mySFML *mySFML);
void dispModOS(Display &display, mySFML *mySFML);
void dispModCPU(Display &display, mySFML *mySFML);

void dispModRam(Display &display, mySFML *mySFML);

#endif /* !SFML_HPP_ */
