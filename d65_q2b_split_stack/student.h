#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>
using namespace std;
template <typename T>
std::vector<std::vector<T> >  CP::stack<T>::split_stack(int k) const {
  //your code here
  //should return something

  vector<vector<T> > fin(k);
  int x = (mSize % k) - 1;
  for (int i = 0; i < mSize; i++) {
    if (x < 0) x = k - 1;
    fin[x--].push_back(mData[i]);
  }
  return fin;

}

#endif

