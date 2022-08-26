#include <iostream>
#include <vector>

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
    while (m--) {
        cin >> inp;
        int left = inp - k;
        int right = inp + k;
    }
}