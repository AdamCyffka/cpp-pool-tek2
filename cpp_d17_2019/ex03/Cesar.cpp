/*
** EPITECH PROJECT, 2019
** cpp_d17_2019
** File description:
** Cesar.cpp
*/

#include "Cesar.hpp"

Cesar::Cesar() : _digit(3)
{
}

Cesar::~Cesar()
{
}

void Cesar::encryptChar(char plainchar)
{
    if (isalpha(plainchar)) {
        int base = plainchar > 96 ? 97 : 65;
        plainchar = static_cast<char>((plainchar - base + _digit) % 26 + base);
    }
    _digit = (_digit + 1) % 26;
    std::cout << plainchar;
}

void Cesar::decryptChar(char cipherchar)
{
    if (isalpha(cipherchar)) {
        int base = cipherchar > 96 ? 122 : 90;
        cipherchar = static_cast<char>((cipherchar - base - _digit) % 26 + base);
    }
    _digit = (_digit + 1) % 26;
    std::cout << cipherchar;
}

void Cesar::reset()
{
    _digit = 3;
}