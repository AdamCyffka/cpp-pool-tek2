/*
** EPITECH PROJECT, 2019
** cpp_d17_2019
** File description:
** Container.hpp
*/

#ifndef CONTAINER_HPP_
#define CONTAINER_HPP_

#include <algorithm>
#include <list>
#include <iostream>
#include <algorithm>
#include <vector>  

template <typename T, template <typename ...> typename Container>
class contain {
    public:
        template <typename U>
        void aff(U a)
        {
            std::cout << "Value: " << a << std::endl;
        }

        template <typename U>
        void add(U &a)
        {
            a++;
        }

        void aff()
        {
            std::for_each(c.begin(), c.end(), [&](T x) { this->aff(x); });
        }

        void add()
        {
            std::for_each(c.begin(), c.end(), [&](T &x) { this->add(x); });
        }

        void push(T val)
        {
            c.push_back(val);
        }

    protected:
        Container<T> c;
};

#endif /* !CONTAINER_HPP_ */