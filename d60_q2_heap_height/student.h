#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include<cmath>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  if (empty()) return -1;
  int mul = 0;
  int ind = 0;
  while (mul < mSize) {
    mul += pow(2, ind++);
  }
  return --ind;
}

#endif

