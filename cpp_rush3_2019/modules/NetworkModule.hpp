/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** NetworkModule
*/

#ifndef NETWORKMODULE_HPP_
#define NETWORKMODULE_HPP_

#include <vector>
#include "IMonitorModule.hpp"
class NetworkModule : public IMonitorModule {
	public:
		NetworkModule();
		~NetworkModule();

		virtual void setModule(bool);
        virtual bool refresh();

		bool networkInfoParser();

        virtual bool isEnable() const;
        virtual std::string getName() const;
		std::vector<std::string> getInterface() const;
		std::vector<long> getUpload() const;
		std::vector<long> getDownload() const;
	protected:
	private:
		std::vector<long> extractFigureWords(std::string str);

		bool _isEnable;
		std::string _name;
		std::vector<std::string> _interface;
		std::vector<long> _upload;
		std::vector<long> _download;
};

#endif /* !NETWORKMODULE_HPP_ */
