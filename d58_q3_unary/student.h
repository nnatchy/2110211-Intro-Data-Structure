#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* ptr) const {
  //you may write additional code here
  if (ptr == NULL) return 0;
  int sum = 0;
  int child = 0;
  if (ptr->left != NULL) {
    child++;
    sum += process(ptr->left);
  }
  if (ptr->right != NULL) {
    child++;
    sum += process(ptr->right);
  }
  if (child == 1) sum++;
  return sum;
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::count_unary() const {
  //write your code here
  return process(mRoot);
}

#endif
