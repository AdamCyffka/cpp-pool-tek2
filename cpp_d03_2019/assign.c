/*
** EPITECH PROJECT, 2020
** cpp_d03
** File description:
** assign.c
*/

#include <stdlib.h>
#include "string.h"

void assign_c(string_t *this, const char *s)
{
    string_destroy(this);
    string_init(this, s);
}

void assign_s(string_t *this, const string_t *str)
{
    assign_c(this, str->str);
}