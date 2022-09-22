#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  int newSize = mSize - pos.size();
  T* arr = new T[newSize];
  int x = 0;
  int i = 0;
  int t = 0;
  while (i < mSize) {
    if (i == pos[x] && x < pos.size()) {
      x++;
    } else {
      arr[t++] = mData[i];
    }
    i++;
  }
  delete[] mData;
  mData = arr;
  mSize = newSize;
  mCap = newSize;
}

#endif