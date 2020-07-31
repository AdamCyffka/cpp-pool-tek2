/*
** EPITECH PROJECT, 2019
** cpp_d16_2019
** File description:
** Event.cpp
*/

#include "Event.hpp"

Event::Event() : _time(0), _event("")
{
}

Event::Event(unsigned int time, const std::string &event) : _time(time), _event(event)
{
}

Event::~Event()
{
}

Event::Event(const Event &other) : _time(other.getTime()), _event(other.getEvent())
{
}

Event &Event::operator=(const Event &other)
{
  this->setEvent(other.getEvent());
  this->setTime(other.getTime());
  return *this;
}

unsigned int Event::getTime() const
{
  return this->_time;
}

const std::string &Event::getEvent() const
{
  return this->_event;
}

void Event::setTime(unsigned int time)
{
  this->_time = time;
}

void Event::setEvent(const std::string &event)
{
  this->_event = event;
}