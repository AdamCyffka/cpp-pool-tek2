/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** main.c
*/

#include "menger.h"

static int my_getnbr(char *str)
{
    int nb = 0;

    while (*str) {
        if (*str >= '0' && *str <= '9') {
            nb *= 10;
            nb += *str - '0';
        }
        else
            return (-1);
        str++;
    }
    return (nb);
}

int main(int ac, char **av)
{
    int size;
    int level;

    if (ac < 3)
        return (84);
    size = my_getnbr(av[1]);
    level = my_getnbr(av[2]);
    if (level > 3 || size % 3 != 0)
        return (84);
    menger(size, level, 0, 0);
}