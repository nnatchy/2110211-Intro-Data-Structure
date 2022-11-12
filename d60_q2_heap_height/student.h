#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#define ll long long int

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  if (empty()) return -1;
  ll h = 0;
  ll tmp = mSize - 1;
  while (tmp > 0) {
    tmp = (tmp - 1) / 2;
    h++;
  }
  return h;
}

#endif