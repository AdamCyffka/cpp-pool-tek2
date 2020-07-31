/*
** EPITECH PROJECT, 2020
** cpp_d03
** File description:
** clear.c
*/

#include <string.h>
#include <stdlib.h>
#include "string.h"

void clear(string_t *this)
{
    if (!this || !this->str)
        return;
    this->str[0] = '\0';
}