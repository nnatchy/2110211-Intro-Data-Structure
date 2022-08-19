#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>
#include<vector>

using namespace std;

int main() {
    set<int> s1, s2;
    vector<int> final;
    int size1, size2, inp;
    cin >> size1 >> size2;
    while (size1--) {
        cin >> inp;
        s1.insert(inp);
    }
    while (size2--) {
        cin >> inp;
        s2.insert(inp);
    }

    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(final));

    for (auto &x : final) {
        cout << x << " ";
    }
}
