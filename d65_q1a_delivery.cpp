#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main() {
    int n, m, inp;
    vector<int> target, fin;
    map<vector<int>,int> m;
    vector<int> temp;
    for (int i = 0; i < m; i++) {
        cin >> inp;
        target.push_back(inp);
    }
    int priceCheck = 0;
    while (n--) {
        int type, a, b;
        cin >> type;
        if (type == 1) {
            cin >> a >> b;
            m[b] = a;
            priceCheck += b;
            temp.push_back(priceCheck);
        } else if (type == 2) {
            //int price = m.begin()->first;
            int count = 0;
            for (int i = 0; i < target.size(); i++) {
                auto it = lower_bound(temp.begin(), temp.end(), target[i]);
                if (it != temp.end()){
                        count = count + (it - temp.begin());
                        if (count == 0) {
                            continue;
                        } else {
                            break;
                        }
                } else {
                    count = -1;

                }
            }
            fin.push_back(count);
        }
    }
    for (int i = 0; i < m; i++) {
        cout << fin[i] << " ";
    }
}