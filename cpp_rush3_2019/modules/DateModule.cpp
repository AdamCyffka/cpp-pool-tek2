/*
** EPITECH PROJECT, 2019
** cpp_rush3_2019
** File description:
** DateModule.cpp
*/

#include <ctime>
#include <chrono>
#include "DateModule.hpp"

DateModule::DateModule() : _enable(true)
{
}

DateModule::~DateModule()
{
}

void DateModule::setTime(std::string times)
{
    _time = times;
}

std::string DateModule::getTime() const
{
    return (_time);
}

bool DateModule::refresh()
{
    if (!this->_enable)
        return false;
    auto now = std::chrono::system_clock::now();
    std::time_t timeNow = std::chrono::system_clock::to_time_t(now);
    std::string timetemp = std::ctime(&timeNow);
    timetemp.erase(std::remove(timetemp.begin(), timetemp.end(), '\n'), timetemp.end());
    this->setTime(timetemp);
    return (true);
}

bool DateModule::isEnable() const
{
    return (_enable);
}

void DateModule::setModule(bool stat)
{
    _enable = stat;
}