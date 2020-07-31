/*
** EPITECH PROJECT, 2019
** cpp_d16_2019
** File description:
** deefef.cpp
*/

#ifndef EVENTMANAGER_HPP_
#define EVENTMANAGER_HPP_

#include <list>
#include "Event.hpp"

class EventManager {
    public:
        EventManager();
        ~EventManager();
        EventManager(EventManager const &);
        EventManager& operator=(EventManager const &);
        void addEvent(const Event&);
        void removeEventsAt(unsigned int);
        void dumpEvents() const;
        void dumpEventAt(unsigned int) const;
        unsigned int getTime() const;
        void addTime(unsigned int);
        void addEventList(std::list<Event>&);
    private:
        std::list<Event> _list;
        unsigned int _time;
};

#endif /* EVENTMANAGER_HPP_ */