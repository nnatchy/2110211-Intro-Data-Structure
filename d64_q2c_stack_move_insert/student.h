#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code 
  if (m > s2.size()) m = s2.size();
  int tmp = mSize + m - 1 - k;
  k = mSize - k;
  T* arr = new T[mSize + m];
  for (int i = 0; i < k ; i++) arr[i] = mData[i];
  int x = k;
  while (m--) {
    arr[tmp--] = s2.top();
    s2.pop();
    k++;
  }
  for (int i = x; i < mSize; i++) {
    arr[k++] = mData[i];
    //k++;
  }
  delete[] mData;
  mData = arr;
  mSize = k;
  mCap = mSize;
}
#endif
