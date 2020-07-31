/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** NetworkModule
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include "NetworkModule.hpp"

NetworkModule::NetworkModule() :
_isEnable(true), _name("NetWork Module")
{
    networkInfoParser();
}

NetworkModule::~NetworkModule()
{
}

void NetworkModule::setModule(bool enabling)
{
    this->_isEnable = enabling;
}

std::vector<long> NetworkModule::extractFigureWords(std::string str) 
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

bool NetworkModule::networkInfoParser()
{
    std::ifstream fs("/proc/net/dev");
    std::string line;
    std::vector<long> list;

    _interface.clear();
    _download.clear();
    _upload.clear();
    if (fs.is_open()) {
        getline(fs, line);
        getline(fs, line);
        while (getline(fs, line)) {
            _interface.push_back(line.substr(0, line.find(":")));
            list = extractFigureWords(line);
            _download.push_back(list.at(0));
            _upload.push_back(list.at(8));
        }
        fs.close();
    } else {
        return false;
    }
    return true;
}

bool NetworkModule::refresh()
{
    return networkInfoParser();
}

bool NetworkModule::isEnable() const {return this->_isEnable;}

std::string NetworkModule::getName() const {return this->_name;}

std::vector<std::string> NetworkModule::getInterface() const {return this->_interface;}

std::vector<long> NetworkModule::getUpload() const {return this->_upload;}

std::vector<long> NetworkModule::getDownload() const {return this->_download;}
