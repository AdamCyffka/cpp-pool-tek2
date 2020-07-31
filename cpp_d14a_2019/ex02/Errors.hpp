/*
** EPITECH PROJECT, 2019
** cpp_d14a_2019
** File description:
** Errors.hpp
*/

#ifndef ERRORS_HPP_
#define ERRORS_HPP_

#include <string>
#include <iostream>
#include <stdexcept>

class NasaError : public std::exception {
    public:
        NasaError(const std::string &message, const std::string &component = "Unknown");
        ~NasaError();
        std::string const &getComponent() const;
        const char *what() const noexcept;
    private:
        std::string _message;
        std::string _component;
};

class MissionCriticalError : public NasaError {
    public:
        MissionCriticalError(const std::string &message, std::string const &component = "Unknown"
    );
};

class LifeCriticalError : public NasaError {
    public:
        LifeCriticalError(const std::string &message, std::string const &component = "Unknown");
};

class UserError : public NasaError {
    public:
        UserError(const std::string &message, std::string const &component = "Unknown");
};

class CommunicationError : public NasaError {
    public:
        explicit CommunicationError(const std::string &message);
};

#endif