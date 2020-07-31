/*
** EPITECH PROJECT, 2020
** cpp_d03
** File description:
** string.h
*/

#ifndef STRING_H_
    #define STRING_H_

    #include <stddef.h>

    typedef struct string_s {
        char *str;
        void (*assign_c)(struct string_s *this, const char *s);
        void (*assign_s)(struct string_s *this, const struct string_s *str);
        void (*append_c)(struct string_s *this, const char *ap);
        void (*append_s)(struct string_s *this, const struct string_s *ap);
        char (*at)(struct string_s *this, size_t pos);
        void (*clear)(struct string_s *this);
        int (*size)(struct string_s *this);
        int (*compare_c)(struct string_s *this, const char *str);
        int (*compare_s)(struct string_s *this, const struct string_s *str);
        size_t (*copy)(struct string_s *this, char *s, size_t n, size_t pos);
        const char *(*c_str) (struct string_s *this);
        int (*empty) (struct string_s *this);
        int (*find_c)(struct string_s *this, char const *str, size_t pos);
        int (*find_s)(struct string_s *this, const struct string_s *str,
        size_t pos);
    } string_t;

    void string_init(string_t *this, const char *s);
    void string_destroy(string_t *this);
    void assign_s(string_t *this, const string_t *str);
    void assign_c(string_t *this, const char *s);
    void append_c(string_t *this, const char *ap);
    void append_s(string_t *this, const string_t *ap);
    char at(const string_t *this, size_t pos);
    void clear(string_t *this);
    int size(const string_t *this);
    int compare_c(const string_t *this, const char *str);
    int compare_s(const string_t *this, const string_t *str);
    size_t copy(const string_t *this, char *s, size_t n, size_t pos);
    int empty(const string_t *this);
    int find_s(const string_t *this, const string_t *str, size_t pos);
    int find_c(const string_t *this, const char *str, size_t pos);
    const char *c_str(const string_t *this);

#endif /* !STRING_H_ */