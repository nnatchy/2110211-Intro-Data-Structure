#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  
  int firstPos = first - begin();
  int lastPos = last - begin();
  T* arr = new T[lastPos - firstPos];
  int x = 0;
  for (int i = firstPos + k; i < lastPos; i++) {
    arr[x++] = mData[i];
  }
  for (int i = firstPos; i < firstPos + k; i++) {
    arr[x++] = mData[i];
  }
  x = 0;
  for (int i = firstPos; i < lastPos; i++) {
    mData[i] = arr[x++];
  }
  delete[] arr;
  mCap = mSize;
}

#endif

