#ifndef __STUDENT_H_
#define __STUDENT_H_
#define pti std::pair<T,int>

#include <map>

template <typename T>
std::vector<std::pair<T,size_t> > CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::map<T,int> m;
    for (int i = 0; i < mSize; i++) {
        m[mData[i]]++;
    }
    std::vector<std::pair<T,size_t> > v;
    for (int i = 0; i < k.size(); i++) {
        pti p;
        p.first = k[i];
        p.second = m[k[i]];
        v.push_back(p);
    }
    return v;
}

#endif
