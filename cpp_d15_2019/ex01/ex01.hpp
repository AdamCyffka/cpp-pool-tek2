/*
** EPITECH PROJECT, 2019
** cpp_d15_2019
** File description:
** ex01.hpp
*/

#ifndef EX01_HPP_
# define EX01_HPP

#include <cstring>

template <typename T>
int compare(T const &a, T const &b)
{
	if (a == b)
		return 0;
	return a < b ? -1 : 1;
}

int compare(const char *const &a, const char *const &b)
{
    if (strcmp(a, b) == 0)
        return 0;
    else if (strcmp(a, b) < 0)
        return -1;
    else
        return 1;
}

#endif