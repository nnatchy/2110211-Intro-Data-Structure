#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m, inp;
    vector<int> v, fin;
    cin >> n >> m;

    int remain = m - n - 1;
    for (int i = 0; i < n; i++) {
        cin >> inp;
        v.push_back(inp);
        fin.push_back(0);
    }
    sort(v.begin(), v.end());
    if (fin.size() < m) {
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < remain; j++) {
                sum += v[i];
                fin.push_back(sum); 
            }
        }
    }
    
    sort(fin.begin(), fin.end());
    for (int i = 0; i < m; i++) cout << fin[i] << endl;
}