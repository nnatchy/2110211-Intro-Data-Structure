#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  T* arr = new T[b - a + 1];
  int x = 0;
  for (int i = b; i >= a; i--) {
    arr[x++] = mData[(mFront + i) % mCap];
  }
  x = 0;
  for (int i = a; i <= b; i++) {
    mData[(mFront + i) % mCap] = arr[x++];
  }
  delete[] arr;
}

#endif
