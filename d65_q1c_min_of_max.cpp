#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int pow;
        cin >> pow;
        v.push_back(pow);
    }
    sort(v.begin(), v.end());
    int x = 0;
    int range = m;
    bool check = false;
    map<int,int> mii;
    while (n--) {
        int type;
        cin >> type;
        if (type <= range - 1 && type >= 0) {
            if (check) {
                mii[type] = v[x++];
            } else {
                if (mii.find(type) == mii.end()) {
                mii[type] = 1;
            } else {
                mii[type] = v[x++];
                check = true;
            } 
            }
            
        }
        cout << mii[type] << " ";
    }
    cout << "\n";
}