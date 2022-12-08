#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
bool CP::list<T>::check() {
  //your code here
  node* header = mHeader;
  node* next = mHeader->next;
  
  for (int i = 0; i < mSize ; i++) {
    if (header == NULL || next == NULL) return false;
    if (next->prev != header) return false;
    header = header->next;
    next = next->next;
  }
  
  if (header->next != mHeader) return false;
  
  node* last = mHeader;
  node* prev = mHeader->prev;
  
  for (int i = 0; i < mSize; i++) {
    if (last == NULL || prev == NULL) return false;
    if (prev->next != last) return false;
    last = last->prev;
    prev = prev->prev;
  }
  
  if (last->prev != mHeader) return false;

  
  return true;
}


#endif