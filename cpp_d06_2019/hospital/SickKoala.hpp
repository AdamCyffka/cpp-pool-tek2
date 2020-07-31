/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** sickkoala.c
*/

#ifndef SICK_KOALA_H
# define SICK_KOALA_H

#include <iostream>

class SickKoala
{
 public:
  SickKoala(std::string name);
  ~SickKoala();
  void poke();
  bool takeDrug(std::string str);
  void overDrive(std::string data);

 private:
  std::string name;
};

#endif /* !SICK_KOALA_H */
