#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const {
  //write your code here
  int ind = it - &mData[0];
  return !(ind >= mSize || ind < 0);
}

#endif
