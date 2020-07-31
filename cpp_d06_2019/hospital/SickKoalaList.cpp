/*
** EPITECH PROJECT, 2019
** cpp_d06_2019
** File description:
** SickKoalaList.cpp
*/

#include "SickKoalaList.hpp"

SickKoalaList::SickKoalaList(SickKoala *koala)
{
    this->koala = koala;
	this->next = NULL;
}

SickKoalaList::~SickKoalaList()
{
}

bool SickKoalaList::isEnd()
{
    return (this->next == NULL);
}

void SickKoalaList::append(SickKoalaList *ptr)
{
    SickKoalaList *elem = this;

    while (elem->next) {
        if (elem == ptr)
            return;
        elem = elem->next;
    }
    ptr->next = NULL;
    elem->next = ptr;
}

SickKoala *SickKoalaList::getFromName(std:string name)
{
    if (this->koala && this->koala->getName() == name) {
        return (this->koala);
    } else if (this->next) {
		return (this->next->getFromName(name));
	}
	return (NULL);
}

SickKoalaList *SickKoalaList::remove(const SickKoalaList *ptr)
{
	SickKoalaList *next = this->next;
	if (this == ptr) {
		this->next = NULL;
		return (next);
	}
	if (this->next)
		this->next = this->next->remove(ptr);
	return (this);
}

SickKoalaList *SickKoalaList::removeFromName(const std::string name)
{
	SickKoalaList *next = this->next;
	if (this->koala && this->koala->getName() == name) {
		this->next = NULL;
		return (next);
	}
	if (this->next)
		this->next = this->next->removeFromName(name);
	return (this);
}

SickKoala *SickKoalaList::getContent()
{
	return (this->koala);
}

SickKoalaList *SickKoalaList::getNext()
{
	return (this->next);
}

void SickKoalaList::dump() {
    SickKoalaList *tmp = this;

    std::cout << "Patients: ";
    while (tmp) {
        if (tmp->koala == NULL)
            std::cout << "[NULL]";
        else
            std::cout << tmp->koala->getName();
        if (tmp->next != NULL)
            std::cout << ", ";
        tmp = tmp->next;
    }
    std::cout << "." << std::endl;
}