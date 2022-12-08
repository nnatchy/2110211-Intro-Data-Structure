#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
using namespace std;
template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  //your code here
    sort(pos.begin(), pos.end());
    vector<size_t> v;
    v.push_back(pos[0]);
    for (int i = 1; i < pos.size(); i++) {
        if (pos[i] != v.back() && pos[i] < mSize) {
            v.push_back(pos[i]);
        }
    }
    sort(v.begin(), v.end());
    T minn = mData[(mFront + v[0]) % mCap];
    for (int i = 0; i < v.size(); i++) {
        if (comp(mData[(mFront + v[i]) % mCap], minn)) {
            minn = mData[(mFront + v[i]) % mCap];
        }
    }
  //should return something
  return minn;
}

#endif