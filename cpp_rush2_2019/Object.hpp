/*
** EPITECH PROJECT, 2020
** Object.hpp
** File description:
** Object.hpp
*/

#ifndef TMP_RUSH_OBJECT_HPP
#define TMP_RUSH_OBJECT_HPP

#include <string>
#include <iostream>

class Object {
    public:
        enum objectType {
            OBJECT,
            TOY,
			WRAP,
			GIFTPAPER,
			BOX
	    };
        // Constructor and destructor
        Object(objectType type = Object::OBJECT);
        virtual ~Object();

        // Setters and getters
        virtual std::string getTitle() = 0;

        // Members Functions
        objectType getType() const;
    protected:
        objectType _type;
};

#endif //TMP_RUSH_OBJECT_HPP
