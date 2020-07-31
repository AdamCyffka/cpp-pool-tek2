/*
** EPITECH PROJECT, 2019
** cpp_d09_2019
** File description:
** ex00.h
*/

#ifndef EX_00_H
    #define EX_00_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    typedef struct s_cthulhu {
        int m_power;
        char *m_name;
    } cthulhu_t;

    typedef struct s_koala {
        cthulhu_t m_parent;
        char m_is_a_legend;
    } koala_t;

    cthulhu_t m_parent;
    cthulhu_t *new_cthulhu();
    void print_power(cthulhu_t *this);
    void attack(cthulhu_t *this);
    void sleeping(cthulhu_t *this);
    koala_t *new_koala(char *name, char is_a_legend);
    void eat(koala_t *this);

#endif /* EX_00_H */