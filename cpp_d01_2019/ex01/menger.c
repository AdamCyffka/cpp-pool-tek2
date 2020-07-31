/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** menger.c
*/

#include "menger.h"
#include <stdio.h>

void menger(int size, int level, int x, int y)
{
    int	new_size = size / 3;

    if (size == 0 || level % 3 != 0 || level != 0) {
        printf("%03d %03d %03d\n", new_size, new_size + x, new_size + y);
        level -= 1;
        menger(new_size, level, x, y);
        menger(new_size, level, x, y + new_size);
        menger(new_size, level, x, y + 2 * new_size);
        menger(new_size, level, x + new_size, y);
        menger(new_size, level, x + new_size, y + 2 * new_size);
        menger(new_size, level, x + 2 * new_size, y);
        menger(new_size, level, x + 2 * new_size, y + new_size);
        menger(new_size, level, x + 2 * new_size, y + 2 * new_size);
    }
}