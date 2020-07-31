/*
** EPITECH PROJECT, 2020
** cpp_d02m
** File description:
** ex03
*/

#include "func_ptr.h"

void print_normal(const char *str)
{
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    int	i = strlen(str) - 1;

    while (i >= 0)
        putchar(str[i--]);
    putchar('\n');

void print_upper(const char *str)
{
    int i = 0;

    while (str[i]) {
        putchar(toupper(str[i]));
        i++;
    }
    putchar('\n');
}

void print_42(const char *str)
{
    (void)str;
    printf("42\n");
}

void do_action(action_t action, const char *str)
{
    void (*ptr[])(const char *) = {print_normal, print_reverse, print_upper,
    print_42};

    (ptr)[action](str);
}