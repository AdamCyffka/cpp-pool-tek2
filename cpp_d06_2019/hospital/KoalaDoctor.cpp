/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** The Nurse
*/

#include <fstream>
#include "KoalaDoctor.hpp"

KoalaDoctor::KoalaDoctor(std::string name)
{
    this->name = name;
    this->working = false;
    std::cout << "Dr." << this->name << ": I'm Dr." << this->name << "! How do you kreog?" << std::endl;
}

KoalaDoctor::~KoalaDoctor()
{
}

void KoalaDoctor::diagnose(SickKoala *patient)
{
    std::ofstream stream((patient->getName() + ".report").c_str());
    std::string	drugList[5] = {"Mars", "Buronzand", "Viagra", "Extasy", "Eucalyptus leaf"};
    std::string patientName;

    std::cout << "Dr." << this->name << ": So what's goerking you Mr." << patient->getName() << "?" << std::endl;
    patient->poke();
    if (stream)
        stream << drugList[random() % 5];
}

void KoalaDoctor::timeCheck()
{
    if (this->working == false) {
        std::cout << "Dr." << this->name << ": Time to get to work!" << std::endl;
        this->working = true;
    }
    else {
        std::cout << "Dr." << this->name << ": Time to go home to my eucalyptus forest!" << std::endl;
        this->working = false;
    }
}

std::string KoalaDoctor::getName()
{
    return (this->name);
}