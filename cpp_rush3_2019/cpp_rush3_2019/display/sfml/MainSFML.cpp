/*
** EPITECH PROJECT, 2018
** project
** File description:
** definition
*/

#include <SFML/Graphics.hpp>
#include "../Display.hpp"
#include "DispModule.hpp"
#include "MySFML.hpp"

void refreshAllMod(Display &display)
{
    display.refreshAll();
}

int displaySFML(Display &display)
{
    mySFML *dispWindow = new mySFML();

    sf::Clock clock2;
    sf::Time time;
    sf::Music music;
    /*
    if (!music.openFromFile("music.ogg"))
        return 84;
    music.play();
    music.setVolume(30);*/

    refreshAllMod(display);
    dispWindow->window.setFramerateLimit(30);
    while (dispWindow->window.isOpen())
    {
        while (dispWindow->window.pollEvent(dispWindow->event))
        {
            if (dispWindow->event.type == sf::Event::Closed)
                dispWindow->window.close();
            if (dispWindow->event.type == sf::Event::KeyReleased) {
                if (dispWindow->event.key.code == sf::Keyboard::C) {
                    if (display._cpu->isEnable())
                        display._cpu->setModule(false);
                    else if (!display._cpu->isEnable())
                        display._cpu->setModule(true);
                }
                if (dispWindow->event.key.code == sf::Keyboard::M) {
                    if (display._ram->isEnable())
                        display._ram->setModule(false);
                    else if (!display._ram->isEnable())
                        display._ram->setModule(true);
                }
                if (dispWindow->event.key.code == sf::Keyboard::N) {
                    if (display._network->isEnable())
                        display._network->setModule(false);
                    else if (!display._network->isEnable())
                        display._network->setModule(true);
                }
                if (dispWindow->event.key.code == sf::Keyboard::A) {
                    dispWindow->window.close();
                    return 1;
                }
            }
        }
        dispWindow->window.clear(sf::Color(50, 50, 50));
        time = clock2.getElapsedTime();
        if (time.asSeconds() >= 1) {
            refreshAllMod(display);
            clock2.restart();
        }
        drawShap(dispWindow);
        dispModUser(display, dispWindow);
        dispModTime(display, dispWindow);
        dispModOS(display, dispWindow);
        if (display._ram->isEnable())
            dispModRam(display, dispWindow);
        if (display._network->isEnable())
            dispModNetwork(display, dispWindow);
        if (display._cpu->isEnable())
            dispModCPU(display, dispWindow);
        dispWindow->window.display();
    }
    return 0;
}