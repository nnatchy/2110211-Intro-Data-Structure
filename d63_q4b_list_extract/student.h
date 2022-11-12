#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  auto it = a;
  while (it != b) {
    if (*it == value) {
      auto tmp(it.ptr->next);
      it.ptr->next->prev = it.ptr->prev;
      it.ptr->prev->next = it.ptr->next;
      delete it.ptr;
      mSize--;
      it = tmp;

      node *insert = new node(value, output.mHeader, output.mHeader->next);
      output.mHeader->next->prev = insert;
      output.mHeader->next = insert;
      output.mSize++;
    } else {
      it++;
    }
  }
}

#endif
