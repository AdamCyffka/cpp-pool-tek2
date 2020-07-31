/*
** EPITECH PROJECT, 2019
** cpp_rush3_2019
** File description:
** UserModule.cpp
*/

#include "UserModule.hpp"
#include <iostream>

UserModule::UserModule()
{
    this->_enable = true;
    refresh();
}

UserModule::~UserModule()
{
    this->_enable = false;
}

bool UserModule::isEnable() const
{
    return (this->_enable);
}

void UserModule::setModule(bool status)
{
    this->_enable = status;
}

void UserModule::setUserName(std::string userName)
{
    _userName = userName;
}

void UserModule::setHostName(std::string hostName)
{
    _hostName = hostName;
}

std::string UserModule::getUserName() const
{
    return (_userName);
}

std::string UserModule::getHostName() const
{
    return (_hostName);
}

bool UserModule::refresh()
{
    if (!this->_enable)
        return (false);
    const char *env_var[2] = {"USER", "HOSTNAME"};
    char *env_val[2];
    for (int i = 0; i < 2; ++i) {
        env_val[i] = getenv(env_var[i]);
        if (env_val[i] == NULL)
            env_val[i] = (char *)"ERROR";
    } 
    setUserName(env_val[0]);
    setHostName(env_val[1]);
    return (true);
}