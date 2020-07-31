/*
** EPITECH PROJECT, 2019
** cpp_d06_2019
** File description:
** SickKoalaList.hpp
*/

#ifndef SICK_KOALA_LIST_H
# define SICK_KOALA_LIST_H

#include <iostream>
#include <string>
#include "SickKoala.hpp"
    
class SickKoalaList
{
 public:
  SickKoalaList(SickKoala *koala);
  ~SickKoalaList();
  bool isEnd();
  void append(SickKoalaList *ptr);
  SickKoala *getFromName(std::string name);
  SickKoalaList *remove(const SickKoalaList *ptr);
	SickKoalaList *removeFromName(const std::string name);
  SickKoalaList	*getNext();
  SickKoala	*getContent();
  void dump();

 private:
  SickKoala	*koala;
};

#endif /* !SICK_KOALA_LIST_H */