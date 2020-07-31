/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** ConveyorBelt
*/

#ifndef CONVEYORBELT_HPP_
#define CONVEYORBELT_HPP_

#include "Wrap.hpp"

class ConveyorBelt {
	public:
		enum buttons {
			IN,
			OUT
		};
		ConveyorBelt();
		~ConveyorBelt();

		Wrap *getWrap() const;
		void setWrap(Wrap *);
		bool isFree() const;

		void INButton(Wrap *);
		void OUTButton();

	protected:
		Wrap *_wrap;
		bool _isFree;
	private:
};

#endif /* !CONVEYORBELT_HPP_ */
