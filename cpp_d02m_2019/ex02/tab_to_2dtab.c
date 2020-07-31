/*
** EPITECH PROJECT, 2020
** ex02
** File description:
** tab_to_2tab.c
*/

#include <stdlib.h>
#include <stdio.h>

void tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    int i = 0;
    int y;

    *res = malloc(length * sizeof(**res));
    for (y = 0; y < length ; y++) {
        (*res)[i] = malloc(width * sizeof(**res));
        for (int x = 0; x < width; x++) {
            (*res)[i][y] = tab[i];
            i++;
        }
    }
}