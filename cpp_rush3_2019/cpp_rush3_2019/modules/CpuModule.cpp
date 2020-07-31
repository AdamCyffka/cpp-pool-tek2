/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** CpuModule
*/

#include <sstream>
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include "CpuModule.hpp"

CpuModule::CpuModule()
{
    _nbr_core = std::thread::hardware_concurrency();
    _enable = true;
    refreshModelAndFrequency();
    setCPUTime();
}

CpuModule::~CpuModule()
{
}

unsigned int CpuModule::getNbrCores() const
{
    return _nbr_core;
}

int CpuModule::getUptime()
{
    return _uptime;
}

std::vector<float> CpuModule::getIdleTime() const
{
    return this->idleTime;
}

std::vector<float> CpuModule::getActiveTime() const
{
    return this->activeTime;
}

void CpuModule::refreshUptime()
{
    std::string res;
    std::string line;
    std::ifstream myfile ("/proc/uptime");
    if (myfile.is_open()) {
        while (getline (myfile,line))
        {
            res += line;
        }
        res.erase(7 , res.length());
        _uptime = atoi(res.c_str());
        myfile.close();
    } else {
        _uptime = -1;
    }
}

void CpuModule::setModule(bool active)
{
    _enable = active;
}

bool CpuModule::isEnable() const
{
    return _enable;
}

bool CpuModule::refresh()
{
    refreshUptime();
    setCPUTime();
    return true;
}

void CpuModule::ReadStatsCPU(std::vector<CPUData> &entries)
{
    std::ifstream fileStat("/proc/stat");

    std::string line;
    const std::string STR_CPU("cpu");
    const std::size_t LEN_STR_CPU = STR_CPU.size();
    const std::string STR_TOT("tot");

    std::getline(fileStat, line);
    while (std::getline(fileStat, line)) {
        if (!line.compare(0, LEN_STR_CPU, STR_CPU)) {
            std::istringstream ss(line);
            entries.emplace_back(CPUData());
            CPUData &entry = entries.back();
            ss >> entry.cpu;
            if (entry.cpu.size() > LEN_STR_CPU)
                entry.cpu.erase(0, LEN_STR_CPU);
            else
                entry.cpu = STR_TOT;
            for (unsigned long & time : entry.times)
                ss >> time;
        }
    }
}

float GetIdleTime(const CPUData &e)
{
    return (float)(e.times[0] + e.times[1] + e.times[2]);
}

float GetActiveTime(const CPUData &e)
{
    return (float)(e.times[3] + e.times[4] + e.times[5] + e.times[6] + e.times[7]);
}

void CpuModule::setCPUTime()
{

    if (this->activeTime.empty()) {
        std::vector<CPUData> entries2;
        ReadStatsCPU(entries1);
        ReadStatsCPU(entries2);
        for (size_t i = 0; i < entries1.size(); ++i) {
            this->idleTime.push_back((GetActiveTime(entries2[i]) - GetActiveTime(entries1[i])));
            this->activeTime.push_back((GetIdleTime(entries2[i]) - GetIdleTime(entries1[i])));
        }
    } else {
        this->activeTime.clear();
        this->idleTime.clear();
        std::vector<CPUData> entries2;
        ReadStatsCPU(entries2);
        for (size_t i = 0; i < entries1.size(); ++i) {
            this->idleTime.push_back((GetActiveTime(entries2[i]) - GetActiveTime(entries1[i])));
            this->activeTime.push_back((GetIdleTime(entries2[i]) - GetIdleTime(entries1[i])));
        }
        entries1.clear();
        ReadStatsCPU(entries1);
    }
}

void CpuModule::stockModelAndFrequency(std::string string)
{

    std::string name;
    std::string frequency;
    string = string.substr(string.find(':', 0) + 2, string.length());
    name = string.substr(0, string.find('@') - 1);
    frequency = string.substr(string.find('@') + 2, string.length());
    _cpuModel.push_back(name);
    _cpuFrequency.push_back(frequency);
}

void CpuModule::refreshModelAndFrequency()
{
    std::string line;
    std::ifstream myfile ("/proc/cpuinfo");
    if (myfile.is_open()) {
        while (getline (myfile,line))
        {
            if (line.find("model name") != std::string::npos) {
                stockModelAndFrequency(line);
            }
        }
    } else {
        _cpuModel[0] = nullptr;
        _cpuFrequency[0] = nullptr;
    }
}

std::vector<std::string> CpuModule::getCpuModel() const
{
    return _cpuModel;
}

std::vector<std::string> CpuModule::getCpuFrequency() const
{
    return _cpuFrequency;
}