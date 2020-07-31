/*
** EPITECH PROJECT, 2020
** ex04
** File description:
** drawing.c
*/

#include "drawing.h"

void draw_square(uint32_t **img, const point_t *origin, size_t size,
uint32_t color)
{
    size_t i = 0;
    size_t j;

    while (i < size) {
        j = -1;
        while (++j < size)
            img[origin->x + i][origin->y + 1] = color;
        ++i;
    }
}