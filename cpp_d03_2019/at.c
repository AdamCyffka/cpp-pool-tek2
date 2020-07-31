/*
** EPITECH PROJECT, 2020
** cpp_d03
** File description:
** at.c
*/

#include <stddef.h>
#include <string.h>
#include "string.h"

char at(const string_t *this, size_t pos)
{
    if (pos > strlen(this->str))
        return (-1);
    return (this->str[pos]);
}