/*
** EPITECH PROJECT, 2019
** cpp_d14a_2019
** File description:
** Errors.cpp
*/

#include "Errors.hpp"

NasaError::NasaError(const std::string &message, const std::string &component) : _message(message), _component(component)
{}

const std::string &NasaError::getComponent() const
{
    return this->_component;
}

const char *NasaError::what() const noexcept
{
    return this->_message.c_str();
}

NasaError::~NasaError()
{}

CommunicationError::CommunicationError(const std::string &message) : NasaError(message, "CommunicationDevice")
{}

MissionCriticalError::MissionCriticalError(const std::string &message, const std::string &component) : NasaError(message, component)
{}

UserError::UserError(const std::string &message, const std::string &component) : NasaError(message, component)
{}

LifeCriticalError::LifeCriticalError(std::string const &message, const std::string &component) : NasaError(message, component)
{}