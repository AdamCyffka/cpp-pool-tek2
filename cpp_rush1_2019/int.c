/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "new.h"
#include "int.h"

typedef struct
{
    Class   base;
    int     x;
}   IntClass;

static void Int_ctor(IntClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
}

static void Int_dtor(IntClass *this)
{
    if (!this)
        raise("no memory");
}

static char *Int_str(IntClass *this)
{
    char *str = malloc(100);

    if (!str)
        raise("no memory");
    if (sprintf(str, "<Int (%d)>", this->x) == -1)
        raise("no memory");
    return str;
}

static Object *Int_sub(IntClass *this, IntClass *other)
{
    Object *subtraction = new(Int, this->x - other->x);
    return (subtraction);
}

static Object *Int_add(const IntClass *this, const IntClass *other)
{
    Object *addition = new(Int, this->x + other->x);
    return addition;
}

static Object *Int_mul(const IntClass *this, const IntClass *other)
{
    Object *multiplication = new(Int, this->x * other->x);
    return multiplication;
}

static Object *Int_div(const IntClass *this, const IntClass *other)
{
    if (other->x == 0)
        raise("Division by 0");
    Object *division = new(Int,
        this->x / other->x);
    return division;
}

static bool Int_gt(const IntClass *this, const IntClass *other)
{
    return (this->x > other->x) ? true : false;
}

static bool Int_lt(const IntClass *this, const IntClass *other)
{
    return (this->x < other->x) ? true : false;
}

static bool Int_eq(const IntClass *this, const IntClass *other)
{
    return (this->x == other->x) ? true : false;
}

static const IntClass _description = {
    {
        .__size__ = sizeof(IntClass),
        .__name__ = "Int",
        .__ctor__ = (ctor_t)&Int_ctor,
        .__dtor__ = (dtor_t)&Int_dtor,
        .__str__ = (to_string_t)&Int_str,
        .__sub__ = (binary_operator_t)&Int_sub,
        .__add__ = (binary_operator_t)&Int_add,
        .__mul__ = (binary_operator_t)&Int_mul,
        .__div__ = (binary_operator_t)&Int_div,
        .__eq__ = (binary_comparator_t)&Int_eq,
        .__gt__ = (binary_comparator_t)&Int_gt,
        .__lt__ = (binary_comparator_t)&Int_lt,
    },
    .x = 0
};

const Class *Int = (const Class *)&_description;
