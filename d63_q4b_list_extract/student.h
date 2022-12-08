#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  auto it = a;
  for (auto it = a; it != b;) {
    if (*it == value) {
      node* tmp = it.ptr;
      auto it2 = it;
      it2++;
      tmp->next->prev = tmp->prev;
      tmp->prev->next = tmp->next;
      delete it.ptr;
      mSize--;
      it = it2;

      node* insertNode = new node(value, output.mHeader, output.mHeader->next);
      output.mHeader->next->prev = insertNode;
      output.mHeader->next = insertNode;
      output.mSize++;
      
    } else {
      it++;
    }
  }
}

#endif
