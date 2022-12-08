#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>
#include<set>
using namespace std;
// you can modify and use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT,MappedT,CompareT>::my_recur(node* n,size_t level,size_t tmp,std::vector<KeyT> &v) {
  //you MAY need to use this function
  if (!n) return;
  if (tmp == level) {
    v.push_back(n->data.first);
  } else {
    if (tmp < level) {
        my_recur(n->right, level, tmp+1, v);
        my_recur(n->left, level, tmp+1, v);
      }
    }
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
std::vector<KeyT> CP::map_bst<KeyT,MappedT,CompareT>::at_level(size_t level) {
  //write your code here
  vector<KeyT> fin;
  my_recur(mRoot, level, 0, fin);
  return fin;
}


#endif