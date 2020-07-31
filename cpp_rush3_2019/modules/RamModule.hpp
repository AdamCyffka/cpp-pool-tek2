/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** RamModule
*/

#ifndef RAMMODULE_HPP_
#define RAMMODULE_HPP_

#include <iostream>
#include <vector>
#include "IMonitorModule.hpp"

class RamModule : public IMonitorModule {
	public:
		RamModule();
		~RamModule();

		void setModule(bool);
        bool refresh();

		bool memInfoParser();

        bool isEnable() const;
        std::string getName() const;
		long getInstalledRAM() const;
		long getInstalledSwap() const;
		long getAllocatedRAM() const;
		long getAllocatedSwap() const;
	protected:
	private:
		std::vector<long> extractFigureWords(std::string str);

		bool _isEnable;
		std::string _name;
		float _installedRAM;
		float _installedSwap;
		float _allocatedRAM;
		float _allocatedSwap;

};

#endif /* !RAMMODULE_HPP_ */
