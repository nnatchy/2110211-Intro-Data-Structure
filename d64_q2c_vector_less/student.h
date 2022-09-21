#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
  if (mSize == 0 && other.mSize >= 1) return true;
  if (mSize >= 1 && other.mSize >= 1 && mData[0] < other.mData[0]) return true;
  if (mSize >= 1 && other.mSize >= 1 && mData[0] == other.mData[0]) {
    for (int i = 1; i < mSize; i++) {
      if (i < other.mSize) {
        if (mData[i] < other.mData[i]) return true;
      }
    }
    return other.mSize > mSize;
  } 
  return false; 
}

#endif
