/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 04
*/

#include <stdio.h>
#include "new.h"
#include "char.h"

typedef struct
{
    Class   base;
    char     x;
}   CharClass;

static void char_ctor(CharClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
}

static void char_dtor(CharClass *this)
{
    if (!this)
        raise("no memory");
}

static char *char_str(CharClass *this)
{
    char *str = malloc(100);

    if (!str)
        raise("no memory");
    if (sprintf(str, "<char (%d)>", this->x) == -1)
        raise("no memory");
    return str;
}

static Object *char_sub(CharClass *this, CharClass *other)
{
    Object *subtraction = new(Char, this->x - other->x);
    return (subtraction);
}

static Object *char_add(const CharClass *this, const CharClass *other)
{
    Object *addition = new(Char, this->x + other->x);

    return addition;
}

static Object *char_mul(const CharClass *this, const CharClass *other)
{
    Object *multiplication = new(Char, this->x * other->x);

    return multiplication;
}

static Object *char_div(const CharClass *this, const CharClass *other)
{
    Object *division = new(Char, this->x / other->x);

    return division;
}

static bool char_gt(const CharClass *this, const CharClass *other)
{
    return (this->x > other->x) ? true : false;
}

static bool char_lt(const CharClass *this, const CharClass *other)
{
    return (this->x < other->x) ? true : false;
}

static bool char_eq(const CharClass *this, const CharClass *other)
{
    return (this->x == other->x) ? true : false;
}

static const CharClass _description = {
        {
                .__size__ = sizeof(CharClass),
                .__name__ = "char",
                .__ctor__ = (ctor_t)&char_ctor,
                .__dtor__ = (dtor_t)&char_dtor,
                .__str__ = (to_string_t)&char_str,
                .__sub__ = (binary_operator_t)&char_sub,
                .__add__ = (binary_operator_t)&char_add,
                .__mul__ = (binary_operator_t)&char_mul,
                .__div__ = (binary_operator_t)&char_div,
                .__eq__ = (binary_comparator_t)&char_eq,
                .__gt__ = (binary_comparator_t)&char_gt,
                .__lt__ = (binary_comparator_t)&char_lt
        },
        .x = 0
};

const Class   *Char = (const Class *)&_description;
