/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Box
*/

#ifndef BOX_HPP_
#define BOX_HPP_

#include "Wrap.hpp"

class Box : public Wrap {
	public:
		Box();
		Box(const Box &other);
		~Box();

		Object *getObject() const;
		void setObject(Object *other);

	protected:
		Object *_object;
	private:
};

#endif /* !BOX_HPP_ */
