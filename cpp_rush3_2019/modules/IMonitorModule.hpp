/*
** EPITECH PROJECT, 2019
** cpp_rush3_2019
** File description:
** IMonitorModule.hpp
*/

#ifndef IMONITORMODULE_HPP_
#define IMONITORMODULE_HPP_

#include <string>

class IMonitorModule {
	public:
	virtual ~IMonitorModule() = default;
	virtual void setModule(bool) = 0;
	virtual bool isEnable() const = 0;
	virtual bool refresh() = 0;
	//virtual std::string getName() = 0;
};

#endif /* !IMONITORMODULE_HPP_ */
