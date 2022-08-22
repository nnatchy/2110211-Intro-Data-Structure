#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main() {
    int n, num, temp;
    vector<int> v;
    bool increase = false, decrease = false, check = false;
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> n;
    while (n--) {
        cin >> num;
        v.push_back(num);
    }
    set<int> s(v.begin(), v.end());
    temp = v[0];
    for (vector<int>::iterator it = v.begin() + 1; it != v.end(); it++) {
        if (*it > temp) increase = true;
        else if (*it < temp) decrease = true;
        if (s.size() < v.size()) {
            check = true; break;
        } if (increase && decrease && s.size() != v.size()) {
            check = true; break;
        }
        
    }
    if (check) cout << "NO" << "\n";
    else cout << "YES" << "\n";
}