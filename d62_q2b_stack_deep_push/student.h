#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
  T* arr = new T[mSize + 1];
  int size = mSize + 1;
  int x = 0;
  pos = mSize - pos;
  for (int i = 0; i < mSize; i++) {
    if (x == pos) {
      arr[x++] = value;
    }
    arr[x++] = mData[i];
  }
  if (x == pos) arr[x] = value;
  delete[] mData;
  mData = arr;
  mSize = size;
  mCap = mSize;
}

#endif
