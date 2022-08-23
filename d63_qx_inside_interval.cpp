#include<iostream>
#include<map>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    int n, m, b, e, inp;
    map<int,int> rng;
    cin >> n >> m;
    while (n--) {
        cin >> b >> e;
        rng[b] = e;
    }
    while (m--) {
        cin >> inp;
        map<int,int>::iterator it = rng.lower_bound(inp);
        if (it == rng.end() || (it->first > inp && it != rng.begin())) {
            it--;
        }
        cout << ((inp >= it->first) && (inp <= it->second)) << " ";
    }
    cout << "\n";
}