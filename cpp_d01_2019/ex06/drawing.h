/*
** EPITECH PROJECT, 2020
** ex04
** File description:
** drawing.h
*/

#ifndef DRAWING_H_
    #define DRAWING_H_

    #include <stdint.h>
    #include <sys/types.h>

    typedef struct s_point {
        unsigned int x;
        unsigned int y;
    } t_point;

    void draw_square(uint32_t **img, const point_t *origin, size_t size,
    uint32_t color)

#endif /* DRAWING_H_ */