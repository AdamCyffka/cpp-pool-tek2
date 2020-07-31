/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** DispRam
*/

#include <SFML/Graphics.hpp>
#include "../Display.hpp"
#include "DispModule.hpp"

void drawGraphRam(mySFML *mySFML, Display &display)
{
    sf::RectangleShape rectangle(sf::Vector2f(display._ram->
    getAllocatedRAM() * 400.00 / display._ram->getInstalledRAM(), 40.f));
    sf::RectangleShape rectangle2(sf::Vector2f(410.f, 60.f));
    rectangle.setFillColor(sf::Color(0, 220, 100));
    rectangle2.setFillColor(sf::Color(60, 60, 60));
    rectangle.setPosition(50.f, 115.f);
    rectangle2.setPosition(40.f, 105.f);

    mySFML->window.draw(rectangle2);
    mySFML->window.draw(rectangle);
}

void drawGraphSwap(mySFML *mySFML, Display &display)
{
    sf::RectangleShape rectangle(sf::Vector2f(display._ram->
        getAllocatedSwap() * 400.00 / display._ram->getInstalledSwap(), 40.f));
    sf::RectangleShape rectangle2(sf::Vector2f(410.f, 60.f));
    rectangle.setFillColor(sf::Color(0, 220, 100));
    rectangle2.setFillColor(sf::Color(60, 60, 60));
    rectangle.setPosition(50.f, 210.f);
    rectangle2.setPosition(40.f, 200.f);

    mySFML->window.draw(rectangle2);
    mySFML->window.draw(rectangle);
}

void dispModRam(Display &display, mySFML *mySFML)
{
    if (!display._ram->isEnable())
        return;
    mySFML->text.setString("Memory");
    mySFML->text.setCharacterSize(18);
    mySFML->text.setFillColor(sf::Color::White);
    mySFML->text.setPosition(50.f, 80.f);
    mySFML->window.draw(mySFML->text);
    mySFML->text.setCharacterSize(20);
    mySFML->text.setPosition(390.f, 125.f);
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2) << display._ram->getAllocatedRAM
    () * 100 / display._ram->getInstalledRAM();
    std::string memUsed = ss.str();
    drawGraphRam(mySFML, display);
    mySFML->text.setString(memUsed + " %");
    mySFML->window.draw(mySFML->text);


    mySFML->text.setString("Swap");
    mySFML->text.setCharacterSize(18);
    mySFML->text.setFillColor(sf::Color::White);
    mySFML->text.setPosition(50.f, 170.f);
    mySFML->window.draw(mySFML->text);
    mySFML->text.setCharacterSize(20);
    mySFML->text.setPosition(390.f, 215.f);
    std::stringstream tmp_ss;
    tmp_ss << std::fixed << std::setprecision(2) << display
    ._ram->getAllocatedSwap()
    * 100 / display._ram->getInstalledSwap();
    std::string swapUsed = tmp_ss.str();
    drawGraphSwap(mySFML, display);
    mySFML->text.setString(swapUsed + " %");
    mySFML->window.draw(mySFML->text);
}