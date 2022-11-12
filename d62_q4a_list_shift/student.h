#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::shift_left() {
  // your code here
  if (mSize <= 1) return;
  node* first = mHeader->next;
  node* last = mHeader->prev;

  mHeader->next = first->next;
  first->next->prev = mHeader;
  first->next = mHeader;
  first->prev = last;
  last->next = first;
  mHeader->prev = first;
}

#endif
