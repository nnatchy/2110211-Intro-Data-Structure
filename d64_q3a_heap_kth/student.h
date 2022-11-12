#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"
using namespace std;
template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  if (k == 1) return mData[0];
  if (k == 2) {
    T returnVal;
    if (mLess(mData[1], mData[2])) {
      return mData[2];
    }
    else return mData[1];
  }
  if (k == 3) {
    T ans;
    if (mLess(mData[1], mData[2])) ans = mData[1];
    else ans = mData[2];
    for (int i = 3;i < 7; i++) {
      if (i < mSize) {
        if (mLess(ans, mData[i])) ans = mData[i];
      }
    }
    return ans;
  }
}

#endif