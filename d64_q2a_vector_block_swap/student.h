#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>
template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if (a-begin() < 0||b-begin()<0||a+m-1>=end()||b+m-1>=end()|| m > abs(b-a) || m < 0) return false;
  
  int first = a - begin();
  int second = b - begin();
  for (int i = 0; i < m; i++) {
    std::swap(mData[first++],mData[second++]);
  }
  return true;
}

#endif

/*
5
1 2 3 4 5
*/
