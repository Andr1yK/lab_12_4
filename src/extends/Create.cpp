#pragma once

#ifndef _CREATE_
#define _CREATE_

#include <iostream>

#include "./Elem.hpp"

using namespace std;

void Create(Elem *&begin, int value)
{
  Elem *tmp = new Elem;
  tmp->info = value;
  if (begin != NULL)
  {
    Elem *T = begin;
    while (T->next != begin)
      T = T->next;
    T->next = tmp;
  }
  else
  {
    begin = tmp;
  }
  tmp->next = begin;
}

void _Create_recIner(Elem *&T, Elem *begin) {
  if (T->next != begin) {
    T = T->next;
    _Create_recIner(T, begin);
  }
}

void Create_rec(Elem *&begin, int value, Elem *&T)
{
  Elem *tmp = new Elem;

  tmp->info = value;

  if (begin != NULL && T != NULL)
  {
    T->next = tmp;
    T = T->next;
  }
  else
  {
    begin = tmp;
    T = begin;
  }

  tmp->next = begin;
}

#endif // !_CREATE_
