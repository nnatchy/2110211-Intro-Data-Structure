#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  int firstPos = first - begin();
  int lastPos = last - begin();
  T* arr = new T[mSize];
  int size = mSize;
  int cur = firstPos + k;
  for (int i = 0; i < firstPos; i++) {
    arr[i] = mData[i];
  }
  for (int i = firstPos; i < lastPos - firstPos - k; i++) {
    arr[i] = mData[cur++];
  }
  for (int i = firstPos; i < mSize; i++) {
    arr[i] = mData[i - lastPos];
  }
  delete[] mData;
  mData = arr;
  mSize = size;
  mCap = size;
}

#endif
