/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** The Nurse
*/

#ifndef KOALA_DOCTOR_H
# define KOALA_DOCTOR_H

#include <iostream>
#include "SickKoala.hpp"

class KoalaDoctor
{
 public:
  KoalaDoctor(std::string name);
  ~KoalaDoctor();
  void diagnose(SickKoala *patient);
  void timeCheck();
  std::string getName();

 private:
  std::string name;
  bool working;
};

#endif /* !KOALA_DOCTOR_H */
