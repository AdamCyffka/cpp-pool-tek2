/*
** EPITECH PROJECT, 2019
** cpp_d16_2019
** File description:
** EventManager.cpp
*/

#include <iostream>
#include "EventManager.hpp"

EventManager::EventManager() : _time(0)
{
}

EventManager::EventManager(EventManager const &other): _time(other.getTime())
{
    this->_list = std::list<Event>(other._list.begin(), other._list.end());
}

EventManager &EventManager::operator=(EventManager const &other)
{
    this->_time = other.getTime();
    this->_list = std::list<Event>(other._list.begin(), other._list.end());
    return *this;
}

EventManager::~EventManager()
{
}

void EventManager::addEvent(const Event &event)
{
    if (event.getTime() < this->getTime())
        return;
    std::list<Event>::iterator it = this->_list.begin();
    while (it->getTime() <= event.getTime() && it != this->_list.end()) {
        it++;
    }
    this->_list.insert(it, event);
}

void EventManager::removeEventsAt(unsigned int time)
{
    for (std::list<Event>::iterator it = this->_list.begin(); it != this->_list.end(); ++it) {
        if (it->getTime() == time) {
            it = this->_list.erase(it);
        }
        if (it->getTime() == time)
            it--;
    }
}

void EventManager::dumpEvents() const
{
    for (std::list<Event>::const_iterator it = this->_list.begin(); it != this->_list.end(); ++it)
        std::cout << it->getTime() << ": " << it->getEvent() << std::endl;
}

void EventManager::dumpEventAt(unsigned int time) const
{
    for (std::list<Event>::const_iterator it = this->_list.begin(); it != this->_list.end(); ++it) {
        if (it->getTime() == time)
            std::cout << it->getTime() << ": " << it->getEvent() << std::endl;
    }
}

void EventManager::addTime(unsigned int time)
{
    for (std::list<Event>::iterator it = this->_list.begin(); it != this->_list.end(); ++it) {
        if (it->getTime() <= this->getTime() + time) {
            std::cout << it->getEvent() << std::endl;
            it = this->_list.erase(it);
            --it;
        }
    }
    this->_time += time;
}

void EventManager::addEventList(std::list<Event> &list)
{
    for (std::list<Event>::iterator it = list.begin(); it != list.end(); ++it)
        this->addEvent(*it);
}

unsigned int EventManager::getTime() const
{
    return this->_time;
}