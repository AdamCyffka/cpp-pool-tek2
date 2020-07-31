/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** UserModule
*/

#ifndef USERMODULE_HPP_
#define USERMODULE_HPP_

#include <unistd.h>
#include <limits.h>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <fstream>
#include <ctime>
#include <chrono>
#include <sys/utsname.h>
#include "IMonitorModule.hpp"

class UserModule : public IMonitorModule {
    public:
    UserModule();
    ~UserModule() override;

    void setModule(bool) override;
    bool isEnable() const override;
    bool refresh() override;

    std::string getUserName() const;
    std::string getHostName() const;
    void setUserName(std::string userName);
    void setHostName(std::string userName);

    private:
    std::string _userName;
    std::string _hostName;
    bool _enable;
};

#endif /* !USERMODULE_HPP_ */
