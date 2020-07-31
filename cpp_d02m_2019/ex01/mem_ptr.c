/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** mem_ptr.c
*/

#include "mem_ptr.h"

void add_str( const char *str1, const char *str2, char **res)
{
    *res = malloc((strlen(str1) + strlen(str2) + 1) * sizeof(char));
    strcpy(*res, str1);
    strcat(*res, str2);
}

void add_str_struct(str_op_t *str_op)
{
    if (!str_op)
    return;
    add_str(str_op->str1, str_op->str2, &str_op->res);
}