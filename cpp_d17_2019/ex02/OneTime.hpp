/*
** EPITECH PROJECT, 2019
** cpp_d17_2019
** File description:
** OneTime.hpp
*/

#ifndef ONETIME_HPP_
#define ONETIME_HPP_

#include <iostream>
#include <cstdlib>
#include "IEncryptionMethod.hpp"

class OneTime : public IEncryptionMethod {
    public:
        OneTime(const std::string &key);
        virtual ~OneTime();
        void encryptChar(char plainchar);
        void decryptChar(char cipherchar);
        void reset();
    protected:
        std::string _key;
        unsigned long _index;
};

#endif /* ONETIME_HPP_ */