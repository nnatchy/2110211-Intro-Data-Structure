#ifndef __STUDENT_H_
#define __STUDENT_H_

#include<stack>
#include<vector>
template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  if (K > mSize) K = mSize;
  for (int i = 0; i < K; i++) pop();
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  std::stack<T> st;
  if (K > mSize) K = mSize;
  std::vector<T> v;
  for (int i = 0; i < K; i++) {
    v.push_back(top());
    pop();
  }
  for (int i = v.size() - 1; i >= 0; i--) st.push(v[i]);
  return st;
}

#endif
