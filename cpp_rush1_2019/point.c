/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "new.h"
#include "point.h"

typedef struct
{
    Class   base;
    int     x, y;
}   PointClass;

static void Point_ctor(PointClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
}

static void Point_dtor(PointClass *this)
{
    if (!this)
        raise("out of memory");
}

static char *Point_str(PointClass *this)
{
    char *str = malloc(38);

    if (!str)
        raise("out of memory");
    if (sprintf(str, "<Point (%d, %d)>", this->x, this->y) == -1)
        raise("out of memory");
    return str;
}

static Object *Point_sub(PointClass *this, PointClass *other)
{
    Object *subtraction = new(Point,
        ((PointClass *)this)->x - ((PointClass *)other)->x,
        ((PointClass *)this)->y - ((PointClass *)other)->y);
    return (subtraction);
}

static Object *Point_add(const PointClass *this, const PointClass *other)
{
    Object *addition = new(Point,
                       ((PointClass *)this)->x + ((PointClass *)other)->x,
                       ((PointClass *)this)->y + ((PointClass *)other)->y);

    return addition;
}

static const PointClass _description = {
    {
        .__size__ = sizeof(PointClass),
        .__name__ = "Point",
        .__ctor__ = (ctor_t)&Point_ctor,
        .__dtor__ = (dtor_t)&Point_dtor,
        .__str__ = (to_string_t)&Point_str,
        .__sub__ = (binary_operator_t)&Point_sub,
        .__add__ = (binary_operator_t)&Point_add,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0
};

const Class   *Point = (const Class *)&_description;
