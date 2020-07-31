/*
** EPITECH PROJECT, 2019
** cpp_rush3_2019
** File description:
** IMonitorDisplay.cpp
*/

#ifndef IMONITORDISPLAY_HPP_
#define IMONITORDISPLAY_HPP_

#include "../modules/IMonitorModule.hpp"
#include "../modules/RamModule.hpp"
#include "../modules/NetworkModule.hpp"
#include "../modules/UserModule.hpp"
#include "../modules/CpuModule.hpp"
#include "../modules/DateModule.hpp"
#include "../modules/OsModule.hpp"

class IMonitorDisplay {
	public:
		virtual RamModule *getRam() const = 0;
		virtual const NetworkModule *getNetwork() const = 0;
		virtual const UserModule *getUser() const = 0;
		virtual const CpuModule *getCpu() const = 0;
		virtual const DateModule *getDate() const = 0;
		virtual const OsModule *getOs() const = 0;
};

#endif /* !IMONITORDISPLAY_HPP_ */