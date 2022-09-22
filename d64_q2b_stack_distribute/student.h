#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T> > CP::stack<T>::distribute(size_t k) const {
  //write your code here
  std::vector<std::vector<T> > v;
  int i = 0;
  for (int i = 0; i < k; i++) {
    std::vector<T> tmp;
    int l = k;

    while (l--) {
      tmp.push_back(mData[i++]);
    }
    v.push_back(tmp);
  }
  return v;
}
#endif
