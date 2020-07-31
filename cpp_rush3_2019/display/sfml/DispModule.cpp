/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** disp_module
*/

#include "DispModule.hpp"

void drawShap(mySFML *mySFML)
{
    sf::RectangleShape rectangle(sf::Vector2f(1000.f, 80.f));
    sf::RectangleShape rectangle2(sf::Vector2f(500.f, 200.f));
    sf::RectangleShape rectangle3(sf::Vector2f(500.f, 200.f));
    sf::RectangleShape rectangle4(sf::Vector2f(1000.f, 520.f));
    sf::RectangleShape rectangle5(sf::Vector2f(1000.f, 618.f));

    rectangle.setFillColor(sf::Color(50, 50, 50));
    rectangle2.setFillColor(sf::Color(50, 50, 50));
    rectangle3.setFillColor(sf::Color(50, 50, 50));
    rectangle4.setFillColor(sf::Color(50, 50, 50));

    rectangle.setOutlineThickness(-3);
    rectangle2.setOutlineThickness(-3);
    rectangle3.setOutlineThickness(-3);
    rectangle4.setOutlineThickness(-3);

    rectangle.setOutlineColor(sf::Color(200, 200, 200));
    rectangle2.setOutlineColor(sf::Color(200, 200, 200));
    rectangle3.setOutlineColor(sf::Color(200, 200, 200));
    rectangle4.setOutlineColor(sf::Color(200, 200, 200));

    rectangle.setPosition(0.f, 0.f);
    rectangle2.setPosition(0.f, 80.f);
    rectangle3.setPosition(500.f, 80.f);
    rectangle4.setPosition(0.f, 280.f);


    mySFML->window.draw(rectangle);
    mySFML->window.draw(rectangle2);
    mySFML->window.draw(rectangle3);
    mySFML->window.draw(rectangle4);
}

void dispModNetwork(Display &display, mySFML *mySFML)
{
    if (!display._network->isEnable())
        return;
    float swip_y = 0;
    mySFML->text.setCharacterSize(24);
    mySFML->text.setString("NETWORK");
    mySFML->text.setPosition(700.f, 80.f);
    mySFML->window.draw(mySFML->text);
    for (unsigned int i = 0; i < 2 && i < display._network->getInterface().size();
    i++)
        {
        int up = display._network->getUpload().at(i) / 125;

        mySFML->text.setCharacterSize(18);
        mySFML->text.setPosition(530.f, 80.f + swip_y);
        mySFML->text.setString(display._network->getInterface().at(i));
        mySFML->window.draw(mySFML->text);

        mySFML->text.setCharacterSize(18);
        mySFML->text.setPosition(530.f, 110.f + swip_y);
        std::stringstream ss;
        ss << std::fixed << up;
        std::string memUsed = ss.str();
        mySFML->text.setString("Debit montant :" + memUsed + " Kb/s");
        mySFML->window.draw(mySFML->text);

        up = display._network->getDownload().at(i) / 125;
        mySFML->text.setCharacterSize(18);
        mySFML->text.setPosition(530.f, 150.f + swip_y);
        std::stringstream sss;
        sss << std::fixed << up;
        memUsed = sss.str();
        mySFML->text.setString("Debit descendant :" + memUsed + " Kb/s");
        mySFML->window.draw(mySFML->text);
        swip_y += 100;
    }

}

void dispModUser(Display &display, mySFML *mySFML)
{
    if (!display._user->isEnable())
        return;
    mySFML->text.setString(display._user->getUserName());
    mySFML->text.setCharacterSize(16);
    mySFML->text.setFillColor(sf::Color::White);
    mySFML->text.setPosition(20.f, 5.f);
    mySFML->text.move(0, 10);
    mySFML->text.setFont(mySFML->font);
    mySFML->window.draw(mySFML->text);
    mySFML->text.setString(display._user->getHostName());
    mySFML->text.setPosition(20.f, 20.f);
    mySFML->text.move(0, 20);
    mySFML->text.setFont(mySFML->font);
    mySFML->window.draw(mySFML->text);
}

void dispModTime(Display &display, mySFML *mySFML)
{
    if (!display._date->isEnable())
        return;
    mySFML->text.setCharacterSize(20);
    mySFML->text.setString(display._date->getTime());
    mySFML->text.setPosition(300.f, 5.f);
    mySFML->text.move(0, 20);
    mySFML->window.draw(mySFML->text);
}

void dispModOS(Display &display, mySFML *mySFML)
{
    if (!display._os->isEnable())
        return;
    std::string part1 = display._os->getVersion();
    std::string part2 = "OS : ";
    std::string part3;
    mySFML->text.setCharacterSize(16);
    mySFML->text.setString(part2 + part1);
    mySFML->text.setPosition(610.f, 5.f);
    mySFML->text.move(0, 10);
    mySFML->text.setFont(mySFML->font);
    mySFML->window.draw(mySFML->text);
    part1 = "Kernel : ";
    part2 = display._os->getSysname();
    part3 = display._os->getRelease();
    mySFML->text.setString(part1 + part2 + ' ' + part3);
    mySFML->text.setPosition(610.f, 20.f);
    mySFML->text.move(0, 20);
    mySFML->text.setFont(mySFML->font);
    mySFML->window.draw(mySFML->text);
}

void DispGraphCPU(Display &display, mySFML *mySFML, float swip_x, float
swip_y, int i)
{
    int size = display._cpu->getActiveTime()
        .at(i) * 410 / (display._cpu->getActiveTime().at(i) + display
        ._cpu->getIdleTime().at(i));

    sf::RectangleShape rectangle(sf::Vector2f(display._cpu->getActiveTime()
    .at(i) * 410 / (display._cpu->getActiveTime().at(i) + display
    ._cpu->getIdleTime().at(i)), 40.f));
    sf::RectangleShape rectangle2(sf::Vector2f(410.f, 60.f));
    rectangle.setFillColor(sf::Color(0, 220, 100));
    rectangle2.setFillColor(sf::Color(60, 60, 60));
    if (size > 307) {
        rectangle.setFillColor(sf::Color(255, 0, 0));
    }
    else if (size > 123) {
        rectangle.setFillColor(sf::Color(255, 220, 100));
    }
    rectangle.setPosition(50.f + swip_x, 340.f + swip_y);
    rectangle2.setPosition(40.f + swip_x, 330.f + swip_y);

    mySFML->window.draw(rectangle2);
    mySFML->window.draw(rectangle);
}

void dispModCPU(Display &display, mySFML *mySFML)
{
    if (!display._cpu->isEnable())
        return;

    float swip_x = 0;
    float swip_y = 0;
    float to_swip_y = 520 / display._cpu->getNbrCores() + 70;

    for (unsigned int i = 0; i < display._cpu->getNbrCores(); i++) {
        if (i % 2 == 0) {
            swip_x = 0;
        }
        if (i % 2 == 0 && i != 0) {
            swip_y += to_swip_y;
        }
        mySFML->text.setCharacterSize(16);
        mySFML->text.setString("CPU " + std::to_string(i));
        mySFML->text.setPosition(20.f + swip_x, 280.f + swip_y);
        mySFML->window.draw(mySFML->text);
        mySFML->text.setString(display._cpu->getCpuModel().at(0) + " @ "
        +display
        ._cpu->getCpuFrequency().at(0));
        mySFML->text.setPosition(20.f + swip_x, 300.f + swip_y);
        mySFML->window.draw(mySFML->text);
        DispGraphCPU(display, mySFML, swip_x, swip_y, i);
        swip_x = 500;
    }
}