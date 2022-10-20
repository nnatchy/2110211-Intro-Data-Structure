#ifndef __STUDENT_H_
#define __STUDENT_H_

using namespace std;

template <typename T,typename Comp>
size_t CP::priority_queue<T,Comp>::get_rank(size_t pos) const {
  //write your code here
  size_t rank = 0;
  T x = mData[pos];
  for (int i = 0; i < mSize; i++) {
    if (mLess(x, mData[i])) rank++;
  }
  return rank;
}

#endif
