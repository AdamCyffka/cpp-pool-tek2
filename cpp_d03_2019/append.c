/*
** EPITECH PROJECT, 2020
** cpp_d03
** File description:
** apprend.c
*/

#include <stdlib.h>
#include <string.h>
#include "string.h"

void append_s(string_t *this, const string_t *ap)
{
    append_c(this, ap->str);
}

void append_c(string_t *this, const char *ap)
{
    if (ap) {
        this->str = realloc(this->str, ((strlen(this->str) + strlen(ap) + 2) *
        sizeof(char)));
        strcat(this->str, ap);
    }
}