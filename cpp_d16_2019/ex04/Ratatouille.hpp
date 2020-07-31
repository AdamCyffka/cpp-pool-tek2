/*
** EPITECH PROJECT, 2019
** cpp_d16_2019
** File description:
** Ratatouille.hpp
*/

#include <sstream>
#include <string>

class Ratatouille {
    public:
        Ratatouille() = default;
        Ratatouille(Ratatouille const &other);
        ~Ratatouille() = default;
        Ratatouille &operator=(Ratatouille const &other);
        Ratatouille &addVegetable(unsigned char c);
        Ratatouille &addCondiment(unsigned int i);
        Ratatouille &addSpice(double d);
        Ratatouille &addSauce(std::string const &s);
        std::string kooc();
    private:
        std::ostringstream _oss;
};