/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** display
*/

#include "Display.hpp"

Display::Display(bool cpu, bool ram, bool network, bool date, bool user,
    bool os
) : _cpu(new CpuModule), _ram(new RamModule), _network(new NetworkModule),
_date(new DateModule), _user(new UserModule), _os(new OsModule)
{
    _cpu->setModule(cpu);
    _ram->setModule(ram);
    _network->setModule(network);
    _date->setModule(date);
    _user->setModule(user);
    _os->setModule(os);
}

Display::~Display()
{
}

CpuModule *Display::getCpu() const
{
    return _cpu;
}

RamModule *Display::getRam() const
{
    return _ram;
}

NetworkModule *Display::getNetwork() const
{
    return _network;
}

DateModule *Display::getDate() const
{
    return _date;
}

UserModule *Display::getUser() const
{
    return _user;
}

OsModule *Display::getOs() const
{
    return _os;
}

void Display::refreshAll()
{
    if (_cpu->isEnable()) {
        _cpu->refresh();
    }
    if (_ram->isEnable()) {
        _ram->refresh();
    }
    if (_network->isEnable()) {
        _network->refresh();
    }
    if (_date->isEnable()) {
        _date->refresh();
    }
}
