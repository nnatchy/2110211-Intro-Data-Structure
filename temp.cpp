#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    auto it = v.begin();
    for (int i = 0; i < 30; i++) {
        if (i == 16) it = v.begin();
        v.insert(v.begin(), 1);
    }
    cout << *it << endl;
}