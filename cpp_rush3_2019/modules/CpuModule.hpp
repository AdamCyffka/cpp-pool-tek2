/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** CpuModule
*/

#ifndef CPUMODULE_HPP_
#define CPUMODULE_HPP_

#include <thread>
#include <chrono>
#include <iostream>
#include <vector>
#include <fstream>
#include "IMonitorModule.hpp"

const unsigned int _cpu_state = 10;

typedef struct CPUData {
    std::string cpu;
    size_t times[_cpu_state];
} CPUData;

class CpuModule : public IMonitorModule {
    public:
    CpuModule();
    ~CpuModule();

    unsigned int getNbrCores() const;
    int getUptime();
    void setModule(bool active);

    bool isEnable () const;
    bool refresh();
    std::vector<float> getIdleTime() const;
    std::vector<float> getActiveTime() const;
    void setCPUTime();

    std::vector<std::string> getCpuModel() const;
    std::vector<std::string> getCpuFrequency( ) const;

    private:
    void refreshUptime();
    void ReadStatsCPU(std::vector<CPUData> &entries);
    void refreshModelAndFrequency();
    void stockModelAndFrequency(std::string string);

    unsigned int _nbr_core;
    int _uptime;
    bool _enable;
    std::vector<std::string> _cpuModel;
    std::vector<std::string> _cpuFrequency;
    std::vector<CPUData> entries1;
    std::vector<float> idleTime;
    std::vector<float> activeTime;
};

#endif /* !CPUMODULE_HPP_ */
