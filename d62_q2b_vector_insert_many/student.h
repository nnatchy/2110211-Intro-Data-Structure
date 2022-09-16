#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<algorithm>
using namespace CP;

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T> > data) {
  //write your code here
  sort(data.begin(), data.end());
  int x = 0, i = 0;
  vector<int> v;
  while (i < data.size() + mSize) {
    if (i == data[x].first) {
      v.push_back(data[x].second);
      x++;
    }
    if (i < mSize) v.push_back(mData[i]);
    i++;
  }

  T* arr = new T[v.size()];
  for (int i = 0; i < v.size(); i++) {
    arr[i] = v[i];
  }
  delete[] mData;
  mData = arr;
  mSize = v.size();
  mCap = v.capacity();
}

#endif