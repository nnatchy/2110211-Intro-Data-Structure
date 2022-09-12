#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, a;
    map<int,int> items;
    map<int,vector<int> > store; // key = U, value = vector of U bidding
    map<int,vector<pair<int,int> > > auction; // key = U, value = vector of pair of price and item
    cin >> n >> m >> a;
    for (int i = 0; i < n; i++) {
        int item;
        cin >> item;
        items[i] = item;
    }

    while (a--) {
        char type;
        int U, I, P;
        cin >> type;
        if (type == "B") {
            cin >> U >> I >> P;
            auction[U].push_back(make_pair(I,P));
            store[U].push_back(I);
        } else if (type == "W") {
            cin >> U >> I;
            auto it = lower_bound(store[U].begin(), store[U].end(), I);
            store[U].erase(it);
        }
    }
    for (int i = 0; i < m; i++) {
        priority_queue<int> pq;

    }
}

/*
2 3 4
1 1
B 1 1 10
B 2 1 100
B 1 2 99
B 2 2 100