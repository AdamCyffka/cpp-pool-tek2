/*
** EPITECH PROJECT, 2019
** cpp_d06_2019
** File description:
** SickKoalaList.cpp
*/

#include "KoalaDoctorList.hpp"

KoalaDoctorList::KoalaDoctorList(KoalaDoctor *koala)
{
    this->koala = koala;
	this->next = NULL;
}

KoalaDoctorList::~KoalaDoctorList()
{
}

bool KoalaDoctorList::isEnd()
{
    return (this->next == NULL);
}

void KoalaDoctorList::append(KoalaDoctorList *ptr)
{
    KoalaDoctorList *elem = this;

    while (elem->next) {
        if (elem == ptr)
            return;
        elem = elem->next;
    }
    ptr->next = NULL;
    elem->next = ptr;
}

KoalaDoctor *KoalaDoctorList::getFromName(std:string name)
{
    if (this->koala && this->koala->getName() == name) {
        return (this->koala);
    } else if (this->next) {
		return (this->next->getFromName(name));
	}
	return (NULL);
}

KoalaDoctorList *KoalaDoctorList::remove(const KoalaDoctorList *ptr)
{
	KoalaDoctorList *next = this->next;
	if (this == ptr) {
		this->next = NULL;
		return (next);
	}
	if (this->next)
		this->next = this->next->remove(ptr);
	return (this);
}

KoalaDoctorList *KoalaDoctorList::removeFromName(const std::string name)
{
	KoalaDoctorList *next = this->next;
	if (this->koala && this->koala->getName() == name) {
		this->next = NULL;
		return (next);
	}
	if (this->next)
		this->next = this->next->removeFromName(name);
	return (this);
}

KoalaDoctor *KoalaDoctorList::getContent()
{
	return (this->koala);
}

KoalaDoctorList *KoalaDoctorList::getNext()
{
	return (this->next);
}

void KoalaDoctorList::dump() {
    KoalaDoctorList *tmp = this;

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