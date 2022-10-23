#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    vector<int> desc;
    int curInd = a;
    int cnt = 1;
    int time = 1;
    desc.push_back(curInd);
    curInd = curInd * 2 + 1;
    while (curInd <= n) {
        bool check = false;
        for (int i = 0; i < pow(2, cnt); i++) {
            if (curInd + i >= n) {
                check = true;
                break;
            }
            desc.push_back(curInd + i);
            time++;
        }
        if (check) break;
        curInd = curInd * 2 + 1;
        cnt++;
    }
    cout << time << "\n";
    for (auto &x : desc) cout << x << " ";
    cout << "\n";
}