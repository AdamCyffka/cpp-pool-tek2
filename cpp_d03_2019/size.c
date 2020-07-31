/*
** EPITECH PROJECT, 2020
** cpp_d03
** File description:
** size.c
*/

#include <stdlib.h>
#include <string.h>
#include "string.h"

int size(const string_t *this)
{
    if (this->str == NULL)
        return (-1);
    return (strlen(this->str));
}