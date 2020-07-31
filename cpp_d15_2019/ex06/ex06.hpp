/*
** EPITECH PROJECT, 2019
** cpp_d15_2019
** File description:
** ex06.hpp
*/

#ifndef EX06_HPP_
#define EX06_HPP_

#include <sstream>
#include <iostream>
#include <string>

template<typename T1, typename T2 = T1>
class Tuple {
    public:
        T1 a;
        T2 b;

        std::string toString() const
        {
            return std::string("[TUPLE [") + print(a) + "] [" + print(b) + "]]";
        }

    template<typename T>
    std::string print(T) {
        return std::string("???");
    }

    std::string print(int a)
    {
        std::stringstream oss;
        oss << a;
        return std::string("int:") + oss.str();
    }

    std::string print(float a)
    {
        std::stringstream oss;
        oss << a;
        return std::string("float:") + oss.str();
    }

    std::string print(std::string a)
    {
        return std::string("string:\"") + a + "\"";
    }
};

#endif