#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n, m, type, inp;
    vector<int> target;
    queue<int> ord1, ord2;
    cin >> n >> m;
    while (m--) {
        cin >> inp;
        target.push_back(inp);
    }
    int sumPrice = 0;
    vector<int> fin;
    vector<int> totalPrice;
    while (n--) {
        int a, b;
        int finPrice;
        cin >> type;
        if (type == 1) {
            cin >> a >> b;
            if (a == 1) ord1.push(b);
            else if (a == 2) ord2.push(b);
            
        } else if (type == 2) {
            if (ord1.empty()) {
                finPrice = ord2.front();
                ord2.pop();
            }
            else if (ord2.empty()) {
                finPrice = ord1.front();
                ord1.pop();
            }
            else if (ord1.front() > ord2.front()) {
                finPrice = ord2.front();
                ord2.pop();
            } else if (ord1.front() <= ord2.front()){
                finPrice = ord1.front();
                ord1.pop();
            }
            sumPrice += finPrice;
            //printf("This is sumprice %d \n" ,sumPrice);
            totalPrice.push_back(sumPrice);
        }
    }
    for (int i = 0; i < target.size(); i++) {
        auto it = lower_bound(totalPrice.begin(), totalPrice.end(), target[i]);
        if (it == totalPrice.end()) {
            fin.push_back(-1);
        } else {
            fin.push_back(it - totalPrice.begin() + 1);
        }
    }
    for (auto x : fin) cout << x << " ";
    cout << "\n";
}