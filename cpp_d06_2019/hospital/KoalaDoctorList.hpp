/*
** EPITECH PROJECT, 2019
** cpp_d06_2019
** File description:
** KoalaDoctorList.hpp
*/

#ifndef KOALA_DOCTOR_LIST_H
# define KOALA_DOCTOR_LIST_H

#include "KoalaDoctor.hpp"

class KoalaDoctorList
{
 public:
  KoalaDoctorList(KoalaDoctor *koala);
  ~KoalaDoctorList();
  bool isEnd();
  void append(KoalaDoctorList *ptr);
  KoalaDoctor *getFromID(int id);
  KoalaDoctorList *remove(const KoalaDoctorList *ptr);
  KoalaDoctorList *removeFromID(int id);
  KoalaDoctorList *getNext();
  KoalaDoctor *getContent();
  void dump();

 private:
  KoalaDoctor *koala;
};

#endif /* !KOALA_NURSE_LIST_H */