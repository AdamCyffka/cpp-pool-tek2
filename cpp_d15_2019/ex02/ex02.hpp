/*
** EPITECH PROJECT, 2019
** cpp_d15_2019
** File description:
** ex02.hpp
*/

#ifndef EX02_HPP_
#define EX02_HPP_

#include <iostream>

template<typename T>
const T &min(const T &a, const T &b)
{
    std::cout << "template min" << std::endl;
    return a <= b ? a : b;
}

int min(int a, int b)
{
    std::cout << "non-template min" << std::endl;
    return a <= b ? a : b;
}

template<typename T>
const T &templateMin(const T *array, int size)
{
    T &res = const_cast<T &>(array[0]);

    for (int i = 1; i < size; i++)
        res = min<T>(res, array[i]);
    return res;
}

int nonTemplateMin(int *array, int size)
{
    int res = array[0];

    for (int i = 1; i < size; i++)
        res = min(res, array[i]);
    return res;
}

#endif