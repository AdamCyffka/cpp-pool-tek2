/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** sickkoala.c
*/

#include "SickKoala.hpp"

SickKoala::SickKoala(std::string name)
{
    if (name.empty())
        return;
    this->name = name;
}

SickKoala::~SickKoala()
{
    std::cout << "Mr." << this->name << ": Kreooogg!! I'm cuuuured!" << std::endl;
}

void SickKoala::poke()
{
	std::cout << "Mr." << this->name << ": Gooeeeeerrk!!" << std::endl;
}

bool SickKoala::takeDrug(std::string str)
{
    if (str.compare("Buronzand") == 0) {
        std::cout << "Mr." << this->name << ": And you'll sleep right away!" << std::endl;
        return (true);
    }
    else if (str.compare("Mars") == 0) {
        std::cout << "Mr." << this->name << ": Mars, and it kreogs!" << std::endl;
        return (true);
    }
    else {
        std::cout << "Mr." << this->name << ": Goerkreog!" << std::endl;
        return (false);
    }
}

void SickKoala::overDrive(std::string data)
{
    int pos;

    while ((pos = data.find("Kreog!")) != int(data.npos)) {
        data.replace(pos, 6, "1337!", 0, 6);
    }
    std::cout << "Mr." << this->name << ": " << data << std::endl;
}
