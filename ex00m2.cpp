#include<iostream>
#include<vector>
#include<queue>
#include<map>

#define endl "\n"

using namespace std;

void printVector(vector<map<int,int> > &v) {
    for (int i = 0; i < v.size(); i++) {
        for (auto it = v[i].begin(); it != v[i].end(); it++) {
            cout << "This is i : " << i << " ";
            cout << it->first << " " << it->second << endl;
        }
    }
}

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
            I--;
            vm[I][U] = P;
        } else if (type == 'W') {
            cin >> U >> I;
            I--;
            vm[I].erase(U);
        }
    }

    //printVector(vm);

    vector<vector<int> > fin(m);
    priority_queue<pair<int,int> > pq;
    for (int i = 0; i < m; i++) {
        for (auto it = vm[i].begin(); it != vm[i].end(); it++) {
            pq.push(make_pair(it->second,it->first));
        }
        while (!pq.empty() && items[i] > 0) {
            int winner = pq.top().second - 1;
            fin[winner].push_back(i+1);
            pq.pop();
            items[i]--;
        }
    }

    for (auto &user : fin) {
        if (user.size() > 0) {
            for (int x : user) cout << x << " ";
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