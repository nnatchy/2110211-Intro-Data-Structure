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
    vector<int> moveMed(v.begin(), v.begin() + w + 1);
    sort(moveMed.begin(), moveMed.end());
    cout << moveMed[moveMed.size() / 2] << " ";
    for (int i = 1; i < n - w; i++) {
        auto it = lower_bound(moveMed.begin(), moveMed.end(), v[i-1]);
        moveMed.erase(it);
        it = lower_bound(moveMed.begin(), moveMed.end(), v[i+w]);
        moveMed.insert(it, v[i+w]);
        cout << moveMed[moveMed.size() / 2] << " ";
    }
    cout << "\n";
}
