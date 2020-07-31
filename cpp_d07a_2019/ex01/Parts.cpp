/*
** EPITECH PROJECT, 2019
** cpp_d07a_2019
** File description:
** Parts.cpp
*/

#include <iostream>
#include "Parts.hpp"

Arms::Arms(std::string serial, bool functional)
{
	this->_name = "Arms";
	this->_serial = serial;
	this->_functional = functional;
}

Legs::Legs(std::string serial, bool functional)
{
	this->_name = "Legs";
	this->_serial = serial;
	this->_functional = functional;
}

Head::Head(std::string serial, bool functional)
{
	this->_name = "Head";
	this->_serial = serial;
	this->_functional = functional;
}

bool Arms::isFunctionnal() const
{
	return (this->_functional);
}

bool Legs::isFunctionnal() const
{
	return (this->_functional);
}

bool Head::isFunctionnal() const
{
	return (this->_functional);
}

std::string Arms::serial()
{
	return (this->_serial);
}

std::string Legs::serial()
{
	return (this->_serial);
}

std::string Head::serial()
{
	return (this->_serial);
}

void Arms::informations() const
{
	std::string isFunctionalStr;
	if (this->_functional)
		isFunctionalStr = "OK";
			else
		isFunctionalStr = "KO";
	std::cout << "[Parts] "<< this->_name << " " << this->_serial
	<< " status : " << isFunctionalStr << std::endl;
}

void Legs::informations() const
{
	std::string isFunctionalStr;
	if (this->_functional)
		isFunctionalStr = "OK";
	else
		isFunctionalStr = "KO";
	std::cout << "[Parts] "<< this->_name << " " << this->_serial
		  << " status : " << isFunctionalStr << std::endl;
}

void Head::informations() const
{
	std::string isFunctionalStr;
	if (this->_functional)
		isFunctionalStr = "OK";
	else
		isFunctionalStr = "KO";
	std::cout << "[Parts] "<< this->_name << " " << this->_serial
		  << " status : " << isFunctionalStr << std::endl;
}