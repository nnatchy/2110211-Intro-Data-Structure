#include <iostream>
#include <vector>
#include <stack>
using namespace std;
stack<int> topNBottomM(stack<int> s1, stack<int> s2, int n, int m) {
    if (n >= 0 && m >= 0) {
        if (n > s1.size()) n = s1.size();
        if (m > s2.size()) m = s2.size();
        vector<int> tmp;
        stack<int> fin;
        while (n--) {
            tmp.push_back(s1.top());
            s1.pop();
        }
        int i = s2.size();
        while (m > 0) {
            if (i <= m) {
                tmp.push_back(s2.top());
                s2.pop();
                m--;
            }
            i--;
        }
        for (int i = tmp.size() - 1; i >= 0; i--) fin.push(tmp[i]);
        return fin;
    }
}
int main()
{
    stack<int> s, t;
    for (int i = 5; i >= 1; i--) {
        s.push(i);
    }
    for (int i = 20; i >= 16; i--) {
        t.push(i);
    }
    stack<int> test = topNBottomM(s,t,10,40);
    while(!test.empty()) {
        cout << test.top() << endl;
        test.pop();
    }
}