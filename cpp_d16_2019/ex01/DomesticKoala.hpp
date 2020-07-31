/*
** EPITECH PROJECT, 2019
** cpp_d16_2019
** File description:
** DomesticKoala.hpp
*/

#ifndef DOMESTICKOALA_HPP_
#define DOMESTICKOALA_HPP_

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "KoalaAction.hpp"

class DomesticKoala {
    public:
        DomesticKoala(KoalaAction &action);
        DomesticKoala(const DomesticKoala &koala);
        virtual ~DomesticKoala();
        DomesticKoala &operator=(const DomesticKoala &koala);
        typedef void (KoalaAction::*methodPointer_t)(std::string const &);
        std::vector<methodPointer_t> const *getActions(void) const;
        void learnAction(unsigned char, methodPointer_t);
        void unlearnAction(unsigned char);
        void doAction(unsigned char, const std::string &);
        void setKoalaAction(KoalaAction &);
    private:
        KoalaAction _action;
        std::vector<methodPointer_t> _actPtr;
};

#endif /* DOMESTICKOALA_HPP_ */