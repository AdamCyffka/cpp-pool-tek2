/*
** EPITECH PROJECT, 2019
** cpp_d16_2019
** File description:
** Event.hpp
*/

#ifndef EVENT_HPP_
#define EVENT_HPP_

#include <string>

class Event {
  public:
    Event();
    Event(unsigned int, const std::string&);
    ~Event();
    Event(const Event&other);
    Event& operator=(const Event&other);
    unsigned int getTime() const;
    const std::string& getEvent() const;
    void setTime(unsigned int time);
    void setEvent(const std::string &event);
  private:
    unsigned int _time;
    std::string	_event;
};

#endif /* EVENT_HPP_ */