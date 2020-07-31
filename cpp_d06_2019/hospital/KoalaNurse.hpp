/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** The Nurse
*/

#ifndef KOALA_NURSE_H
# define KOALA_NURSE_H

#include "SickKoala.hpp"

class KoalaNurse
{
 public:
  KoalaNurse(int id);
  ~KoalaNurse();
  void giveDrug(std::string str, SickKoala *patient);
  std::string	readReport(std::string file);
  void timeCheck();
  int getID();

 private:
  int id;
  bool working;
};

#endif /* !KOALA_NURSE_H */