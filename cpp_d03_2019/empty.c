/*
** EPITECH PROJECT, 2020
** cpp_d03
** File description:
** empty.c
*/

#include "string.h"

int empty(const string_t *this)
{
    if (this->str == NULL && this == NULL)
        return (1);
    return (0);
}