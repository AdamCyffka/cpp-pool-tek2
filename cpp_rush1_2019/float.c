/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "new.h"
#include "float.h"

typedef struct
{
    Class   base;
    float     x;
}   FloatClass;

static void Float_ctor(FloatClass *this, va_list *args)
{
    this->x = va_arg(*args, double);
}

static void Float_dtor(FloatClass *this)
{
    if (!this)
        raise("no memory");
}

static char *Float_str(FloatClass *this)
{
    char *str = malloc(100);

    if (!str)
        raise("no memory");
    if (sprintf(str, "<Float (%f)>", this->x) == -1)
        raise("no memory");
    return str;
}

static Object *Float_sub(FloatClass *this, FloatClass *other)
{
    Object *subtraction = new(Float, this->x - other->x);

    return (subtraction);
}

static Object *Float_add(const FloatClass *this, const FloatClass *other)
{
    Object *addition = new(Float, this->x + other->x);

    return addition;
}

static Object *Float_mul(const FloatClass *this, const FloatClass *other)
{
    Object *multiplication = new(Float, this->x * other->x);

    return multiplication;
}

static Object *Float_div(const FloatClass *this, const FloatClass *other)
{
    Object *division;
    
    if (other->x == 0)
        raise("Division by 0");
    division = new(Float,
        this->x / other->x);
    return division;
}

static bool Float_gt(const FloatClass *this, const FloatClass *other)
{
    return (this->x > other->x) ? true : false;
}

static bool Float_lt(const FloatClass *this, const FloatClass *other)
{
    return (this->x < other->x) ? true : false;
}

static bool Float_eq(const FloatClass *this, const FloatClass *other)
{
    return (this->x == other->x) ? true : false;
}

static const FloatClass _description = {
    {
        .__size__ = sizeof(FloatClass),
        .__name__ = "Float",
        .__ctor__ = (ctor_t)&Float_ctor,
        .__dtor__ = (dtor_t)&Float_dtor,
        .__str__ = (to_string_t)&Float_str,
        .__sub__ = (binary_operator_t)&Float_sub,
        .__add__ = (binary_operator_t)&Float_add,
        .__mul__ = (binary_operator_t)&Float_mul,
        .__div__ = (binary_operator_t)&Float_div,
        .__eq__ = (binary_comparator_t)&Float_eq,
        .__gt__ = (binary_comparator_t)&Float_gt,
        .__lt__ = (binary_comparator_t)&Float_lt,
    },
    .x = 0
};

const Class *Float = (const Class *)&_description;
