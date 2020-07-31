/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** DateModule
*/

#ifndef DATEMODULE_HPP_
#define DATEMODULE_HPP_

#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <fstream>
#include "IMonitorModule.hpp"

class DateModule : public IMonitorModule {
	public:
	DateModule();
	~DateModule() override;
    void setModule(bool) override;
    bool isEnable() const override;
    bool refresh() override;
    void setTime(std::string time);
    std::string getTime(void) const;

    private:
    std::string _time;
    bool _enable;
};

#endif /* !DATEMODULE_HPP_ */
