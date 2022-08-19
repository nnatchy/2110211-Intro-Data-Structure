#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n, m, inp;
    vector<int> v1, v2, final;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> inp;
        v1.push_back(inp);
    }
    for (int i = 0; i < m; i++){
        cin >> inp;
        v2.push_back(inp);
    }

    for (auto it = v1.begin(); it < v1.end(); it++) {
        if (find(v2.begin(),v2.end(), *it) != v2.end() && find(final.begin(), final.end(), *it) == final.end()) {
            final.push_back(*it);
        }
    }
    sort(final.begin(), final.end());
    for (auto &x : final) {
        cout << x << " ";
    }
    
}