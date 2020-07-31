/*
** EPITECH PROJECT, 2019
** cpp_d14m_2019
** File description:
** Lime.hpp
*/

#ifndef LIME_HPP_
#define LIME_HPP_

#include "Lemon.hpp"

class Lime : public Lemon {
    public:
        Lime();
        Lime(Lime const&);
        Lime& operator=(Lime const&);
        virtual ~Lime() {};
        virtual std::string getName() const;
        virtual int getVitamins() const;
};

#endif /* LIME_HPP_ */