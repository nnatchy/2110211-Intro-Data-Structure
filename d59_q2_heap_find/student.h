#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include<cmath>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
  for (int i = 0; i < mSize; i++) {
    if (mData[i] == k) return true;
  }
  return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
  int h = -1;
  for (int i = 0; i < mSize; i++) {
    if (mData[i] == k) h = i + 1;
  }
  if (h == -1) return -1;
  int mul = 0;
  int ind = 0;
  while (mul < h) {
    mul += pow(2, ind++);
  }
  return --ind;
}

#endif

