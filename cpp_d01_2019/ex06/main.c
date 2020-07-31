/*
** EPITECH PROJECT, 2020
** ex06
** File description:
** main.c
*/

#include <ctype.h>
#include "bitmap.h"
#include "drawing.h"
#include "menger.h"

int	menger(int a, int lvl, int x, int y);

int my_getnbr(char *str)
{
    int i = 0;
    int n = 1;
    int nb = 0;

    while (str[i] != 0 && (str[i] == '-' || str[i] == '+')) {
        if (str[i++] == '-')
            n *= -1;
    }
    while (isdigit(str[i]))
        nb = nb * 10 + str[i++] - 48;
    return (nb * n);
}

int	checker(int size, int lvl)
{
    int	i = 0;

    if (size <= 0 && lvl <= 0)
        exit (84);
    while (size > 1) {
        if ((size % 3) == 0)
            size /= 3;
        else
            exit (84);
        i++;
    }
    if (lvl > i)
        exit (84);
    return (i);
}

int main(int ac, char **av)
{
    if (ac == 3)
        checker(my_getnbr(av[1]), my_getnbr(av[2]));
    else
        exit (84);
    return (0);
}