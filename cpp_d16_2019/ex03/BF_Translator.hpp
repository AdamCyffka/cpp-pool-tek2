/*
** EPITECH PROJECT, 2019
** cpp_d16_2019
** File description:
** BF_Translator.hpp
*/

#ifndef BFTRANSLATOR_HPP_
#define BFTRANSLATOR_HPP_

#include <map>
#include <string>

struct BF_Op {
	std::string code;
	char indentDiff;
};

class BF_Translator {
    public:
        BF_Translator();
        int translate(std::string const &in, std::string const &out) const;
        int translate(std::ofstream &os, char c, int &ident) const;
    private:
        std::map<char,BF_Op> _ops;
};

#endif /* BFTRANSLATOR_HPP_ */