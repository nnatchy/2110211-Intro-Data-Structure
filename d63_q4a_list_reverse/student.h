#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
using namespace std;
template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here
  if (a == b) return a;
  auto it = a;
  b--;
  while (a != b) {
    swap(*a, *b);
    a++;
    if (a == b) break;
    b--;
  }
  return it;
}

#endif
