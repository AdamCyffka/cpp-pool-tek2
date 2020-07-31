/*
** EPITECH PROJECT, 2019
** cpp_d15_2019
** File description:
** ex03.hpp
*/

#ifndef EX03_HPP_
# define EX03_HPP_

#include <iostream>

template<typename T>
void foreach(const T *array, void (func)(const T &), int size)
{
    for (int i = 0; i < size; i++) {
        func(array[i]);
    }
}

template<typename T>
void print(const T &val)
{
    std::cout << val << std::endl;
}

#endif