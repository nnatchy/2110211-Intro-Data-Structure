#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    int ownLeft = mCap - mSize;
    int otherLeft = other.mCap - other.mSize;
    if (ownLeft == otherLeft) return 0;
    if (ownLeft > otherLeft) return 1;
    if (ownLeft < otherLeft) return -1; 
}

#endif
