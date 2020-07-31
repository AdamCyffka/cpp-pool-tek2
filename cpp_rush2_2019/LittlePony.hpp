/*
** EPITECH PROJECT, 2019
** cpp_rush2_2019
** File description:
** Wrap.hpp
*/

#ifndef LITTLE_PONY_HPP_
#define LITTLE_PONY_HPP_

#include "Toy.hpp"

class LittlePony : public Toy {
    public:
    // Constructor and destructor
    LittlePony();
    ~LittlePony();

    // Setters and getters
    void setTitle(std::string title);
    std::string getTitle();

    // Members Functions
    bool isTaken();

    private:

    // Attributes
    bool _isTaken;
    std::string _title;
};


#endif