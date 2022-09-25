#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  //write your code only here
  //
  if (k > mSize) k = mSize;
  for (int i = 0; i < k; i++) res.push_back(mData[mFront + i]);
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
  int i = 0;
  ensureCapacity(to - from + 1);
  mData = new T[to - from]; 
  mFront = 0;
  mSize = 0;
  for (auto it = from ; it != to; it++) mData[i++] = *it;
  mSize = i;
  
}

#endif