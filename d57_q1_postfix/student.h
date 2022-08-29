#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <vector>
#include <stack>

using namespace std;

int eval_postfix(vector<pair<int, int> > v) {
  // WRITE YOUR CODE HERE
  // DON"T FORGET TO RETURN THE RESULT
  stack<int> s;
  int result;
  for (auto &x : v) {
    if (x.first == 1)
      s.push(x.second);
    else {
      int op = x.second;
      int a = s.top();
      s.pop();
      int b = s.top();
      s.pop();
      switch (op) {
      case 0:
        result = a + b;
        break;
      case 1:
        result = b - a;
        break;
      case 2:
        result = a * b;
        break;
      case 3:
        result = b / a;
        break;
      }
      s.push(result);
    }
    
  }
  return s.top();
}

#endif
