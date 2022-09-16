#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <unordered_set>

using namespace std;
template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  std::unordered_set<T> s;
  T* arr = new T[mSize];
  int ind = 0;
  for (int i = 0; i < mSize; i++) {
    if (s.find(mData[i]) == s.end()) {
      s.insert(mData[i]);
      arr[ind++] = mData[i];
    }
  }
  delete[] mData;
  mData = arr;
  mSize = s.size();
}

#endif
