/*
** EPITECH PROJECT, 2020
** cpp_rush1_2019
** File description:
** new
*/

#include "new.h"

Object *new(const Class *class, ...) 
{
    Object *obj = NULL;
    va_list ap;

    va_start(ap, 0);
    obj = va_new(class, &ap);
    va_end(ap);
    return obj;
}

Object *va_new(const Class *class, va_list *ap)
{
    Object *obj = malloc(class->__size__);

    if (!obj)
        raise("Error: class or ap is null");
    obj = memcpy(obj, class, class->__size__);
    if (class->__ctor__)
        class->__ctor__(obj, ap);
    return obj;
}

void delete(Object *ptr)
{
    if (!ptr)
        raise("Error");
    if (((Class *)ptr)->__dtor__)
        ((Class *)ptr)->__dtor__(ptr);
    free(ptr);
}