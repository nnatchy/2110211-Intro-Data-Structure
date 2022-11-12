void replace(const T& x, list<T>& y) {
  //write your code here
  auto it = begin();
  while (it != end()) {
    if (*it == x) {
      for (auto &val : y) {
        insert(it, val);
      }
      it = erase(it);
    } else {
      it++;
    }
  }
}
