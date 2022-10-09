#include<iostream>
#include<vector>
void reverse(iterator it1, iterator it2) {
  int n = it2 – it1;
  int p = it1 – begin();
  for (int i = 0; i < n; i++) {
  insert(it2,*it1);
  erase(it1);
  it1 = mData + p;
  it2--;
}