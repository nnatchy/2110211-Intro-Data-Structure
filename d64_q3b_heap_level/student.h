#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"
#include<cmath>
#include<algorithm>
using namespace std;
template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  int ind = 0;
  int time = 1;
  for (int i = 0; i < k; i++) {
    ind = ind * 2 + 1;
    time = time * 2;
  }
  std::vector<T> r;
  if (ind >= mSize) return r;
  for (int i = 0; i < time; i++) {
    r.push_back(mData[i + ind]);
    if (i + ind == mSize - 1) break;
  }
  sort(r.begin(), r.end(), mLess);
  reverse(r.begin(), r.end());
  return r;
}

#endif

