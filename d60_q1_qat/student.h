#ifndef __STUDENT_H_
#define __STUDENT_H_

#include<iostream>
template <typename T>
T CP::queue<T>::operator[](int idx) {
  //write something here
  //
  // you need to return something
  // return 
  int finInd = (idx + mSize) % mCap;
  return mData[finInd + mFront];
}

#endif
