/*
** EPITECH PROJECT, 2020
** ex05
** File description:
** ex05.h
*/

#ifndef EX05_H_
    #define EX05_H_

    typedef union s_nbr {
        short bar;
        short foo;
    } t_nbr;

    typedef struct s_strct {
        short foo;
        union s_nbr bar;
    } t_strct;

    typedef union s_foo {
        unsigned int bar;
        struct s_strct foo;
    } foo_t;

#endif /* EX05_H_ */