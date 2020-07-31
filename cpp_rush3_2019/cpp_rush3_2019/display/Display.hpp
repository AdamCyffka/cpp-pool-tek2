/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** display
*/


#ifndef CPP_RUSH3_2019_DISPLAY_HPP
#define CPP_RUSH3_2019_DISPLAY_HPP

#include "IMonitorDisplay.hpp"

class Display : public IMonitorDisplay {
    public:
    Display(bool cpu = true, bool ram = true, bool network = true, bool date
    = true, bool user = true, bool os = true);
    ~Display();

    CpuModule *getCpu() const override;
    RamModule *getRam() const override;
    NetworkModule *getNetwork() const override;
    DateModule *getDate() const override;
    UserModule *getUser() const override;
    OsModule *getOs() const override;

    void refreshAll();

    CpuModule *_cpu;
    RamModule *_ram;
    NetworkModule *_network;
    DateModule *_date;
    UserModule *_user;
    OsModule *_os;
};

#endif //CPP_RUSH3_2019_DISPLAY_HPP
