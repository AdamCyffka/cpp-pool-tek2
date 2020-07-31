/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** OsModule
*/

#include "OsModule.hpp"
#include <iostream>

OsModule::OsModule()
{
    struct utsname unameData{};
    uname(&unameData);
    this->_nodename = unameData.nodename;
    this->_release = unameData.release;
    this->_sysname = unameData.sysname;
    this->_version = unameData.version;
    _enable = true;
}

OsModule::~OsModule()
{
}

void OsModule::setModule(bool enabling)
{
    _enable = enabling;
}

bool OsModule::isEnable() const
{
    return _enable;
}

bool OsModule::refresh()
{
    return false;
}

std::string OsModule::getNodename() const
{
    return this->_nodename;
}

std::string OsModule::getRelease() const
{
    return this->_release;
}

std::string OsModule::getSysname() const
{
    return this->_sysname;
}

std::string OsModule::getVersion() const
{
    return this->_version;
}
