/*
** EPITECH PROJECT, 2020
** cpp_d03
** File description:
** copy.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    int i = 0;

    while (i < n && i <= strlen(&this->str[pos])) {
        s[i] = this->str[pos + i];
        i++;
    }
    return i;
}