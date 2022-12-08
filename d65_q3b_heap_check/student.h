#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"
#include<cmath>

using namespace std;

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::check() {
  // Your code here
  // Return something
  for (int i = 0; i < mSize; i++) {
    int first = 2 * i + 1;
    int sec = 2 * i + 2;
    if (first >= mSize || sec >= mSize) break;
    if (mLess(mData[i], mData[first]) || mLess(mData[i], mData[sec])) return false;
  }
  return true;
}

#endif