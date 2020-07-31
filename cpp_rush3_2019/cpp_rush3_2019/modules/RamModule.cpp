/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** RamModule
*/

#include <fstream>
#include <sstream>
#include <algorithm>
#include "RamModule.hpp"

RamModule::RamModule() :
_isEnable(true), _name("Ram Module"), _installedRAM(0),
_installedSwap(0), _allocatedRAM(0), _allocatedSwap(0)
{
    memInfoParser();
}

RamModule::~RamModule()
{
}

void RamModule::setModule(bool enabling)
{
    this->_isEnable = enabling;
}

std::vector<long> RamModule::extractFigureWords(std::string str) 
{ 
    std::stringstream ss;
    std::vector<long> list;

    ss << str; 
    std::string temp; 
    long found; 
    while (!ss.eof()) { 
        ss >> temp;
        if (std::stringstream(temp) >> found) 
            list.push_back(found);
    }
    return list;
} 

bool RamModule::memInfoParser()
{
    std::ifstream fs("/proc/meminfo");
    std::string line;
    std::vector<long> list;

    if (fs.is_open()) {
        while (getline (fs,line)) {
            if (line.find("MemTotal:") == 0) {
                list = extractFigureWords(line);
                this->_installedRAM = list.at(0);
            } else if (line.find("MemFree:") == 0) {
                list = extractFigureWords(line);
                this->_allocatedRAM = this->_installedRAM - list.at(0);
            } else if (line.find("Cached:") == 0) {
                list = extractFigureWords(line);
                this->_allocatedRAM -= list.at(0);
            } else if (line.find("SwapTotal:") == 0) {
                list = extractFigureWords(line);
                this->_installedSwap = list.at(0);
            } else if (line.find("SwapFree:") == 0) {
                list = extractFigureWords(line);
                this->_allocatedSwap = this->_installedSwap - list.at(0);
            }
        }
        fs.close();
    } else {
        _installedRAM = 0;
        _installedSwap = 0;
        _allocatedRAM = 0;
        _allocatedSwap = 0;
        return false;
    }
    return true;
}

bool RamModule::refresh()
{
    return memInfoParser();
}

bool RamModule::isEnable() const {return this->_isEnable;}

std::string RamModule::getName() const {return this->_name;}

long RamModule::getInstalledRAM() const {return this->_installedRAM;}

long RamModule::getInstalledSwap() const {return this->_installedSwap;}

long RamModule::getAllocatedRAM() const {return this->_allocatedRAM;}

long RamModule::getAllocatedSwap() const {return this->_allocatedSwap;}

