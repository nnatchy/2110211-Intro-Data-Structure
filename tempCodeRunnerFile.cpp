#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n, w, inp;
    vector<int> v;
    cin >> n >> w;
    for (int i = 0; i < n; i++) {
        cin >> inp;
        v.push_back(inp);
    }
    for (int i = 0; i < n - w; i++) {
        vector<int> moveMed(v.begin() + i, v.begin() + i + w + 1);
        if (v.begin() + i + w + 1 != v.end()) {
            sort(moveMed.begin(), moveMed.end());
            cout << moveMed[moveMed.size() / 2] << " ";
        }
    }
    cout << "\n";
}