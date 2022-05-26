#pragma once

#ifndef _FINDTWOIDENTICAL_
#define _FINDTWOIDENTICAL_

#include <iostream>

#include "./Elem.hpp"

bool FindTwoIdentical(Elem *begin)
{
  if (begin == NULL)
    return false;

  Elem *beginIner;
  Elem *first = begin;

  while (begin->next != first && begin != NULL)
  {
    beginIner = begin->next;

    while (beginIner->next != begin && beginIner != NULL)
    {
      if (begin->info == beginIner->info)
        return true;

      beginIner = beginIner->next;
    }

    begin = begin->next;
  }

  return false;
}

bool FindTwoIdenticalIner_rec(Elem *beginIner, Elem *begin)
{
  if (beginIner->next != begin && beginIner != NULL)
  {
    if (begin->info == beginIner->info)
      return true;

    return FindTwoIdenticalIner_rec(beginIner->next, begin);
  }

  return false;
}

bool _FindTwoIdentical_rec(Elem *begin, Elem *first)
{
  Elem *beginIner;

  if (begin->next != first && begin != NULL)
  {
    if (FindTwoIdenticalIner_rec(begin->next, begin))
    {
      return true;
    }

    return _FindTwoIdentical_rec(begin->next, first);
  }

  return false;
}

bool FindTwoIdentical_rec(Elem *begin) {
  if (begin == NULL)
    return false;

  Elem *first = begin;

  return _FindTwoIdentical_rec(begin, first);
}

#endif // !_FINDTWOIDENTICAL_
