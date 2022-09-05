#include<iostream>
#include<vector>
#include<string>
#include<set>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n, m, l, inp;
    string pw;
    vector<int> v;
    set<vector<int> > pwNumber;
    cin >> n >> m >> l;
    for (int i = 0; i < l; i++) {
        cin >> inp;
        v.push_back(inp);
    }
    while (n--) {
        cin >> pw;
        vector<int> temp;
        for (int i = 0; i < pw.length(); i++) {
            temp.push_back(int(pw[i]) % 26);
        }
        pwNumber.insert(temp);
    }
    for (int j = 0; j < m; j++) {
        cin >> pw;
        vector<int> store;
        for (int i = 0; i < pw.length(); i++) {
            int target = (int(pw[i]) + v[i]) % 26;
            store.push_back(target);
        }
        if (pwNumber.find(store) != pwNumber.end()) cout << "Match" << "\n";
        else cout << "Unknown" << "\n";
    }
}