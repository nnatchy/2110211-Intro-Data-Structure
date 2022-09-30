#include<iostream>
#include<vector>
#include<queue>
#include<map>

#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n, m, a;
    vector<int> items;
    
    cin >> n >> m >> a;
    for (int i = 0; i < n; i++) {
        int item;
        cin >> item;
        items.push_back(item);
    }

    vector<map<int,int> > vm(n); // key is U and P is value
    while (a--) {
        char type;
        int U, I, P;
        cin >> type;
        if (type == 'B') {
            cin >> U >> I >> P;
            vm[I-1][U-1] = P;
        } else if (type == 'W') {
            cin >> U >> I;
            auto it = vm[I-1].find(U-1);
            if (it != vm[I-1].end()) {
                vm[I-1].erase(it);
            }
        }
    }

    vector<vector<int> > fin(m);
    
    for (int i = 0; i < n; i++) {
        priority_queue<pair<int,int> > pq;
        for (auto it = vm[i].begin(); it != vm[i].end(); it++) {
            pq.push(make_pair(it->second,it->first));
        }
        while (!pq.empty() && items[i] > 0) {
            int winner = pq.top().second;
            fin[winner].push_back(i);
            pq.pop();
            items[i]--;
        }
    }

    for (auto &user : fin) {
        if (user.size() > 0) {
            for (auto& x : user) cout << x + 1 << " ";
        } else {
            cout << "NONE";
        }
        cout << endl;
    }
}

/*
2 3 4
1 1
B 1 1 10
B 2 1 100
B 1 2 99
B 2 2 100
*/