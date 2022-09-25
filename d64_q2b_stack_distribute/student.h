#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T> > CP::stack<T>::distribute(size_t k) const {
  //write your code here
  std::vector<std::vector<T> > v;
  int i = 0;
  int size = mSize;
  int left = mSize % k;
  int range = left == 0 ? mSize / k : mSize / k + 1;
  for (int j = 0; j < k; j++) {
    std::vector<T> tmp;
    for (int l = 0; l < range; l++) {
      tmp.push_back(mData[mSize - 1 - i]);
      i++;
    }
    v.push_back(tmp);
    left--;
    if (left <= 0) range = mSize / k; 
  }
  return v;
}
#endif
