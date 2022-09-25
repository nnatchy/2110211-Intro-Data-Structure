#ifndef __STUDENT_H_
#define __STUDENT_H_

#include<iostream>
template <typename T>
T CP::queue<T>::operator[](int idx) {
  //write something here
  //
  // you need to return something
  // return 
  if (idx >= 0) return mData[(idx + mFront) % mCap];
  else return mData[(idx + mFront + mSize) % mCap];
}

#endif
