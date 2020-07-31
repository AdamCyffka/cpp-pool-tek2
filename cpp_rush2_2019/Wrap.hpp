/*
** EPITECH PROJECT, 2019
** cpp_rush2_2019
** File description:
** Wrap.hpp
*/

#ifndef WRAP_HPP_
#define WRAP_HPP_

#include "Object.hpp"

class Wrap : public Object {
	public:
		Wrap(objectType type = Object::WRAP);
        Wrap(const Wrap& other);
		~Wrap();

		virtual bool isOpen() const;
    	virtual std::string getTitle() {return "";};

        void openMe();
        void closeMe();
	protected:
        bool _isOpen;
	private:
};

#endif /* !WRAP_HPP_ */