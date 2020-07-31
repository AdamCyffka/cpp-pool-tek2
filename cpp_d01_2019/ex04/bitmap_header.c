/*
** EPITECH PROJECT, 2020
** ex02
** File description:
** bitmap_header.c
*/

#include <stdlib.h>
#include "bitmap.h"

void make_bmp_header(bmp_header_t *header, size_t size)
{
    unsigned int i = 1;
    char *c = (char *)&i;

    if (*c)
        header->magic = 0x4D42;
    else
        header->magic = 0x424D;
    header->size = size * size * 4 + 54;
    header->_app1 = 0;
    header->_app2 = 0;
    header->offset = 54;
}

void make_bmp_info_header(bmp_info_header_t *header, size_t size)
{
    header->size = 40;
    header->width = size;
    header->height = size;
    header->planes = 1;
    header->bpp = 32;
    header->compression = 0;
    header->raw_data_size = size * size * 4;
    header->h_resolution = 0;
    header->v_resolution = 0;
    header->palette_size = 0;
    header->important_colors = 0;
}