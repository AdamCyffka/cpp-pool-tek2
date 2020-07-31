/*
** EPITECH PROJECT, 2019
** cpp_d17_2019
** File description:
** Cesar.hpp
*/

#ifndef CESAR_HPP_
#define CESAR_HPP_

#include <iostream>
#include <cstdio>
#include "IEncryptionMethod.hpp"

class Cesar : public IEncryptionMethod {
    public:
        Cesar();
        virtual ~Cesar();
        void encryptChar(char plainchar);
        void decryptChar(char cipherchar);
        void reset();
    protected:
        int _digit;
};

#endif /* CESAR_HPP_ */