#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING
// #include<iostream>

template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
  mSize = 0;
  mCap = 1;
  mData = new T[mCap]();
  while (last != first) {
    push(*(--last));
  }
}

#endif
