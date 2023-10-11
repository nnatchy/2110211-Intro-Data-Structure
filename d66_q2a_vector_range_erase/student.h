#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "vector.h"
#define pii std::pair<iterator, iterator>
using namespace std;
#include <algorithm>

template <typename T>
void CP::vector<T>::range_erase(std::vector<std::pair<iterator, iterator> > &ranges) {
  // Write code here
  sort(ranges.begin(), ranges.end());
  CP::vector<T> tmp;
  auto it = begin();
  int idx = 0;
  for (int i = 0; i < mSize; i++) {;
    while (idx < ranges.size() && (begin() + i >= ranges[idx].second)) idx++;
    if (idx < ranges.size() && begin() + i >= ranges[idx].first && begin() + i < ranges[idx].second) continue;
    else tmp.push_back(mData[i]);
  }
  *this = tmp;
}

#endif
