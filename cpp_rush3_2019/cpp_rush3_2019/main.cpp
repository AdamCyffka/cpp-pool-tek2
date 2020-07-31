/*
** EPITECH PROJECT, 2019
** cpp_rush3_2019
** File description:
** main.cpp
*/

#include <iostream>
#include "display/sfml/MySFML.hpp"
#include "display/Display.hpp"

int windowCreation(Display d);

int startTextMode();

int loop(std::string arg, Display d)
{
    int end = 1;
    if (std::string("graphical") == arg)
        end = 2;
    while (end != 0) {
        if (end == 1) {
            end = windowCreation(d);
        } else if (end == 2) {
            end = displaySFML(d);
        }
    }
    return 0;
}

int main(int ac, char **av)
{
    Display d;
    if (ac != 2) {
        std::cout << "Usage : ./my_top [text|graphical]" << std::endl;
        return 0;
    } else if (std::string("text") == av[1] || std::string("graphical") == av[1]) {
        return loop(std::string(av[1]), d);
    } else if (std::string("-h") == av[1]) {
        std::cout << "Usage : ./my_top [text|graphical]" << std::endl;
        return 0;
    }
    return 1;
}