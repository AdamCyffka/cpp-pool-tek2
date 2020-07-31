/*
** EPITECH PROJECT, 2019
** cpp_d06_2019
** File description:
** SickKoalaList.cpp
*/

#include <iostream>
#include <string>
#include "KoalaNurseList.hpp"

KoalaNurseList::KoalaNurseList(SickKoala *koala)
{
    this->koala = koala;
	this->next = NULL;
}

KoalaNurseList::~KoalaNurseList()
{
}

bool KoalaNurseList::isEnd()
{
    return (this->next == NULL);
}

void KoalaNurseList::append(KoalaNurseList *ptr)
{
    KoalaNurseList *elem = this;

    while (elem->next) {
        if (elem == ptr)
            return;
        elem = elem->next;
    }
    ptr->next = NULL;
    elem->next = ptr;
}

KoalaNurse *KoalaNurseList::getFromID(int id)
{
    if (this->koala && this->koala->getID() == id) {
        return (this->koala);
    } else if (this->next) {
		return (this->next->getFromID(id));
	}
	return (NULL);
}

KoalaNurseList *KoalaNurseList::remove(const KoalaNurseList *ptr)
{
	KoalaNurseList *next = this->next;
	if (this == ptr) {
		this->next = NULL;
		return (next);
	}
	if (this->next)
		this->next = this->next->remove(ptr);
	return (this);
}

KoalaNurseList *KoalaNurseList::removeFromID(int id)
{
	KoalaNurseList *next = this->next;
	if (this->koala && this->koala->getName() == id) {
		this->next = NULL;
		return (next);
	}
	if (this->next)
		this->next = this->next->removeFromID(id);
	return (this);
}

KoalaNurse *KoalaNurseList::getContent()
{
	return (this->koala);
}

KoalaNurseList *KoalaNurseList::getNext()
{
	return (this->next);
}

void KoalaNurseList::dump() {
    KoalaNurseList *tmp = this;

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