/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** TableRand
*/

#ifndef TABLERAND_HPP_
#define TABLERAND_HPP_

#include "Toy.hpp"

class TableRand {
	public:
		TableRand();
		~TableRand();

        static Toy *getRandomToy();
	protected:
	private:
};

#endif /* !TABLERAND_HPP_ */
