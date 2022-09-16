#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  T* arr = new T[mSize - pos.size()];
  int x = 0;
  for (int i = 0; i < mSize; i++) {
    if (i != pos[x]) arr[i] = mData[i];
    else arr.erase(arr.begin() + i);
  }
  delete[] mData;
  mData = arr;
}

#endif
