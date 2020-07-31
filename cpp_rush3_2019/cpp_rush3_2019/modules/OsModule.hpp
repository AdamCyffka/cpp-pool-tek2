/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** OsModule
*/

#ifndef OSMODULE_HPP_
#define OSMODULE_HPP_

#include <sys/utsname.h>
#include "IMonitorModule.hpp"

class OsModule : public IMonitorModule {
	public:
		OsModule();
		~OsModule() override;

    void setModule(bool) override;
    bool isEnable() const override;
    bool refresh() override;

    std::string getNodename() const;
    std::string getRelease() const;
    std::string getSysname() const;
    std::string getVersion() const;

	private:
    std::string _nodename;
    std::string _release;
    std::string _sysname;
    std::string _version;
    bool _enable;
};

#endif /* !OSMODULE_HPP_ */
