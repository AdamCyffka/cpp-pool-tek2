/*
** EPITECH PROJECT, 2019
** cpp_d13_2019
** File description:
** ToyStory.hpp
*/

#ifndef TOY_STORY_HPP_
#define TOY_STORY_HPP_

#include "Toy.hpp"

class ToyStory {
    public:
        ToyStory();
        ~ToyStory();
        static bool tellMeAStory(std::string const &, Toy &, );
};

#endif /* TOY_STORY_HPP_ */