/*
** EPITECH PROJECT, 2019
** cpp_d17_2019
** File description:
** find.hpp
*/

#ifndef FIND_HPP_
#define FIND_HPP_

#include <algorithm>
#include <iostream>

template <typename T> typename T::iterator do_find(T &container, int number)
{
    return (find(container.begin(), container.end(), number));    
}

#endif /* FIND_HPP_ */