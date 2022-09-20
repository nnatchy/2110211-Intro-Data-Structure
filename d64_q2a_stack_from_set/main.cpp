#include <iostream>
#include <stack>
#include "student.h"
#include <assert.h>
#include <exception>
#include <set>
#include <string>
#include <sstream>

bool test1() {
  std::set<int> s;
  for (int i = 1; i < 9; i++) s.insert(i);
  auto it1 = s.begin();
  auto it2 = it1;
  int n = 3;
  for (int i = 0;i < n;i++) it2++;
  CP::stack<int> st(it1,it2);
  for (int i = 1;i <= n;i++) {
    if (st.empty()) return false;
    std::cout << st.top() << std::endl;
    if (st.top() != i) return false;
    st.pop();
  }
  if (!st.empty()) return false;
  return true;
}

bool test2() {
  std::set<std::string> s;
  for (int i = 1;i <= 8;i++) {
    std::stringstream ss;
    ss << i;
    s.insert(ss.str());
  }
  auto it1 = s.begin();
  auto it2 = it1;
  int n = 3;
  for (int i = 0;i < n;i++) it2++;
  CP::stack<std::string> st(it1,it2);
  for (int i = 1;i <= n;i++) {
    if (st.empty()) return false;
    std::cout << st.top() << std::endl;
    std::stringstream ss;
    ss << i;
    if (st.top() != ss.str()) return false;
    st.pop();
  }
  if (!st.empty()) return false;
  return true;
}

int main() {
  std::set<std::string> s;
  for (int i = 0; i < 4; i++) {
    std::string x;
    std::cin >> x;
    s.insert(x);
  }
  auto it1 = s.lower_bound("x");
auto it2 = s.end();
CP::stack<std::string> s1(it1,it2);
CP::stack<std::string> s2(s.begin(),it1);
std::cout << "s1: ";
while(!s1.empty()) {
 std::cout << s1.top() << " ";
 s1.pop();
}
std::cout << std::endl << "s2: ";
while(!s2.empty()) {
 std::cout << s2.top() << " ";
 s2.pop();
}
  // int test_num;
  // std::cin >> test_num;
  // bool result = false;
  // switch (test_num) {
  //   case  1: result = test1(); break;
  //   case  2: result = test2(); break;
  // }

  // if (result) {
  //   std::cout << "OK" << std::endl;
  // } else {
  //   std::cout << "WRONG!!!" << std::endl;
  // }
  // return 0;
}
