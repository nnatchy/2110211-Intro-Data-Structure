#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  int insertSize = last - first;
  T* arr = new T(mSize + insertSize);
  int pos = position - begin();
  int i = 0; int j = 0;
  while (j < mSize + insertSize) {
    if (i == pos) {
      for (auto it = first; it != last; it++) {
        arr[j] = *it;
        j++;
      }
    }
    arr[j] = mData[i];
    i++; j++;
  }
  delete[] mData;
  mData = arr;
  mSize = mSize + insertSize;
  mCap = mSize;
}

#endif

