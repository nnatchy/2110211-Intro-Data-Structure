#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n, m, k, inp;
    vector<int> v;
    cin >> n >> m >> k;
    while (n--) {
        cin >> inp;
        v.push_back(inp);
    }
    sort(v.begin(), v.end());
    while (m--) {
        cin >> inp;
        cout << upper_bound(v.begin(), v.end(), inp + k) - lower_bound(v.begin(), v.end(), inp - k) << " ";
    }
}