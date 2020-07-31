/*
** EPITECH PROJECT, 2020
** cpp_rush1_2019
** File description:
** vertex
*/

#include <stdio.h>
#include "vertex.h"
#include "new.h"

typedef struct
{
    Class   base;
    int     x, y, z;
}   VertexClass;

static void Vertex_ctor(VertexClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
    this->z = va_arg(*args, int);
}

static void Vertex_dtor(VertexClass *this)
{
    if (!this)
        raise("no memory");
}

static char *Vertex_str(VertexClass *this)
{
    char *str = malloc(50);

    if (!str)
        raise("no memory");
    if (sprintf(str, "<Vertex (%d, %d, %d)>", this->x, this->y, this->z) == -1)
        raise("no memory");
    return str;
}

static Object *Vertex_add(VertexClass *this, VertexClass *other)
{
    Object *vertex;
    
    if (!this || !other)
        raise("no memory");
    vertex = new(Vertex, this->x + other->x,
    this->y + other->y,
    this->z + other->z);

    return vertex;
}

static Object *Vertex_sub(VertexClass *this, VertexClass *other)
{
    Object *vertex;
    
    if (!this || !other)
        raise("no memory");
    vertex = new(Vertex, this->x - other->x,
    this->y - other->y,
    this->z - other->z);

    return vertex;
}

static const VertexClass _description = {
    {
        .__size__ = sizeof(VertexClass),
        .__name__ = "Vertex",
        .__ctor__ = (ctor_t)&Vertex_ctor,
        .__dtor__ = (dtor_t)&Vertex_dtor,
        .__str__ = (to_string_t)&Vertex_str,
        .__add__ = (binary_operator_t)&Vertex_add,
        .__sub__ = (binary_operator_t)&Vertex_sub,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0,
    .z = 0
};

const Class   *Vertex = (const Class *)&_description;