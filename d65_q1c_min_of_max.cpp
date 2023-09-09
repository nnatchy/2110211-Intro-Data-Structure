#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    ll n, m;
    cin >> n >> m;
    set<pair<ll, ll> > teamPower;
    map<ll, ll> ml;
    for (int i = 0; i < m; i++) {
        teamPower.insert(make_pair(1, i));
        ml[i] = 1;
    }
    vector<ll> pow;
    for (int i = 0; i < n; i++) {
        ll inp;
        cin >> inp;
        pow.push_back(inp);
    }
    ll idx = 0;
    while (n--) {
        ll type;
        cin >> type;
        ll newPower = pow[idx];
        ll oldPower = ml[type];
        if (newPower >= oldPower) {
            ml[type] = newPower;
            teamPower.erase(teamPower.find(make_pair(oldPower, type)));
            teamPower.insert(make_pair(newPower, type));
        }
        cout << (*teamPower.begin()).first << " ";
        idx++;
    }
    cout << "\n";
}