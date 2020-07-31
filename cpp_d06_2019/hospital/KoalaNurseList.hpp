/*
** EPITECH PROJECT, 2019
** cpp_d06_2019
** File description:
** KoalaNurseList.hpp
*/

#ifndef KOALA_NURSE_LIST_H
# define KOALA_NURSE_LIST_H

#include "KoalaNurse.hpp"

class KoalaNurseList
{
 public:
  KoalaNurseList(KoalaNurse *koala);
  ~KoalaNurseList();
  bool isEnd();
  void append(KoalaNurseList *ptr);
  KoalaNurse *getFromID(int id);
  KoalaNurseList *remove(const KoalaNurseList *ptr);
  KoalaNurseList *removeFromID(int id);
  KoalaNurseList *getNext();
  KoalaNurse *getContent();
  void dump();

 private:
  KoalaNurse *koala;
};

#endif /* !KOALA_NURSE_LIST_H */