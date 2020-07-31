/*
** EPITECH PROJECT, 2019
** cpp_d17_2019
** File description:
** OneTime.cpp
*/

#include "OneTime.hpp"

OneTime::OneTime(const std::string &key) : _key(key), _index(0)
{
}

OneTime::~OneTime()
{
}

void OneTime::encryptChar(char plainchar)
{
    if (isalpha(plainchar)) {
        int base = plainchar > 96 ? 97 : 65;
        int mask = _key[_index] > 96 ? 97 : 65;
        plainchar = static_cast<char>((plainchar - base + (_key[_index] - mask)) % 26 + base);
    }
    std::cout << plainchar;
    _index = (_index + 1) % _key.size();
}

void OneTime::decryptChar(char cipherchar)
{
    if (isalpha(cipherchar)) {
        int base = cipherchar > 96 ? 122 : 90;
        int mask = _key[_index] > 96 ? 97 : 65;
        cipherchar = static_cast<char>((cipherchar - base - (_key[_index] - mask)) % 26 + base);
    }
    std::cout << cipherchar;
    _index = (_index + 1) % _key.size();
}

void OneTime::reset()
{
    _index = 0;
}