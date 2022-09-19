#ifndef __STUDENT_H_
#define __STUDENT_H_

#include<vector>
#include<algorithm>
template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  std::vector<int> v;
  v = pos;
  sort(v.begin(), v.end());
  T* arr = new T[mSize - pos.size()];
  int x = 0;
  int i = 0;
  for (int i = 0; i < mSize - v.size(); i++) {
    if (i == v[x]) {
      x++;
      continue;
    }
    arr[i] = mData[i];
  }
  delete[] mData;
  mData = arr;
  mSize = mSize - pos.size();
}

#endif
