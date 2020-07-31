/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** The Nurse
*/

#include <iostream>
#include <fstream>
#include "KoalaNurse.hpp"

KoalaNurse::KoalaNurse(int id)
{
    this->id = id;
    this->working = false;
}

KoalaNurse::~KoalaNurse()
{
    std::cout << "Nurse " << this->id << ": Finally some rest!" << std::endl;
}

void KoalaNurse::giveDrug(std::string str, SickKoala *patient)
{
    patient->takeDrug(str);
}

std::string KoalaNurse::readReport(std::string report)
{
    std::ifstream stream(report.c_str());
	std::string	drug("");
	std::string	patient;
    if (stream) {
        patient = report.substr(0, report.rfind(".report"));
		getline(stream, drug);
        std::cout << "Nurse " << this->id << ": Kreog! Mr." << patient << " needs a " << drug << "!" << std::endl;
    }
    return drug;
}

void KoalaNurse::timeCheck()
{
    if (this->working == false) {
        std::cout << "Nurse " << this->working << ": Time to get to work!" << std::endl;
        this->working = true;
    }
    else {
        std::cout << "Nurse " << this->working << ": Time to go home to my eucalyptus forest!" << std::endl;
        this->working = false;
    }
}

int KoalaNurse::getID()
{
    return (this->id);
}