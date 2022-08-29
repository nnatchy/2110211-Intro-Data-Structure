#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <vector>
#include <stack>

using namespace std;

int eval_postfix(vector<pair<int, int> > v) {
  stack<int> s;
  int result;
  for (auto &x : v) {
    if (x.first == 1) s.push(x.second);
    else {
      int op = x.second;
      int sec = s.top(); s.pop();
      int first = s.top(); s.pop();
      if (op == 0) result = first + sec;
      else if (op == 1) result = first - sec;
      else if (op == 2) result = first * sec;
      else if (op == 3) result = first / sec;
      s.push(result);
    }
  }
  return s.top();
}

#endif
