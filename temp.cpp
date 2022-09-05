#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n, inp;
    cin >> n;
    vector<int> v;
    int check = n;
    while (n--) {
        cin >> inp;
        v.push_back(inp);
    }
    vector<int> tmp(v.begin(), v.begin() + check - 2);
    for (auto &x : tmp) cout << x << "\t";
}