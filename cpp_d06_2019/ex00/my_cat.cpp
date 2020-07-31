/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** my_cat.c
*/

#include <iostream>
#include <fstream>

void my_cat(int ac, char **av)
{
    int i = 1;
    char c;

    while (i < ac) {
        std::ifstream file(av[i]);
        if (file.is_open()) {
            std::cout << file.rdbuf();
        }
        else
            std::cerr << "my_cat: " << av[i] << ": No such file or directory" << std::endl;
        i++;    
    }
    
}

int main(int ac, char **av)
{
    if (ac == 1) {
        std::cerr << "my_cat: Usage: ./my_cat file [...]" << std::endl;
        return (84);
    }
    my_cat(ac, av);
    return (0);
}