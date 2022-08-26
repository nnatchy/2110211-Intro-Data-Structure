#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
    //std::ios_base::sync_with_stdio(false); std::cin.tie(0); uncomment this for speed
    int n, m, inp;
    map<int,int> dupe;
    set<int> s;
    cin >> n >> m;
    while (n--) {
        cin >> inp;
        if (s.find(inp) != s.end()) dupe[inp] = 1;
        s.insert(inp);
    }
    while (m--) {
        cin >> inp;
        bool found = false;
        for (auto it = s.begin(); it != s.end(); it++) {
            if (s.find(inp - *it) != s.end() && inp - *it != *it) {
                found = true;
                break;
            } else if (dupe.find(inp - *it) != dupe.end() && dupe[inp - *it] == 1) {
                found = true;
                break;
            }
        }
        if (!found) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }
}