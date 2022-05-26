#pragma once

#ifndef _PRINT_
#define _PRINT_

#include <iostream>

#include "./Elem.hpp"

using namespace std;

void Print(Elem *begin)
{
  if (begin == NULL)
    return;

  Elem *first = begin;

  cout << begin->info << "\t";

  while (begin->next != first)
  {
    begin = begin->next;
    cout << begin->info << "\t";
  }

  cout << endl;
}

void _Print_rec(Elem *L, Elem *first)
{
  if (L == NULL)
    return;

  if (L->next != first)
  {
    cout << L->info << "\t";
    _Print_rec(L->next, first);
  }
  else
  {
    cout << L->info << "\t";
  }
}

void Print_rec(Elem *L)
{
  _Print_rec(L, L);
}

#endif // !_PRINT_
