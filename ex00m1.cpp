#include<iostream>
#include<queue>

#define endl "\n"
#define pii pair<int,int>

using namespace std;

int main() {
    priority_queue<pii, vector<pii>, greater<pii> > pq;
    vector<int> v;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int inp;
        cin >> inp;
        pq.push(make_pair(0,inp));
    }

    while (m--) {
        int first = pq.top().first;
        int sec = pq.top().second;
        cout << first << endl;
        pq.pop();
        pq.push(make_pair(first + sec, sec));
    }

}