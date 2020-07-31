/*
** EPITECH PROJECT, 2019
** cpp_d17_2019
** File description:
** Encryption.hpp
*/

#ifndef ENCRYPTION_HPP_
#define ENCRYPTION_HPP_

#include <string>
#include "IEncryptionMethod.hpp"

class Encryption {
    public:
        Encryption(IEncryptionMethod &, void (IEncryptionMethod::*pFunction)(char));
        static void encryptString(IEncryptionMethod &, const std::string &);
        static void decryptString(IEncryptionMethod &, const std::string &);
        void operator()(int);
    protected:
        IEncryptionMethod &_encrypMethod;
        void (IEncryptionMethod::*_func)(char);
};

#endif /* ENCRYPTION_HPP_ */