/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** my_convert_temp.c
*/

#include <iostream>
#include <iomanip>

void fahrenheit(float temp)
{
    float res = 5.0 / 9.0 * (temp - 32);
    std::cout << std::setw(16);
	std::cout << std::fixed;
    std::cout << std::setprecision(3) << res;
    std::cout << std::setw(16) << "Celsius" << std::endl;
}

void celcius(float temp)
{
    float res = 9.0 / 5.0 * temp + 32;
    std::cout << std::setw(16);
    std::cout << std::fixed;
    std::cout << std::setprecision(3) << res;
    std::cout << std::setw(16) << "Fahrenheit" << std::endl;
}

int main()
{
    std::string type;
    float temp = 0;
    std::cin >> temp >> type;
    if (type == "Celsius")
        celcius(temp);
    if (type == "Fahrenheit")
        fahrenheit(temp);
    return (0);
}