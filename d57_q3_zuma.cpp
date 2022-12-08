#include<iostream>
#include<list>

using namespace std;

void bomb(list<int>::iterator &it, list<int> &l) {
    if (l.size() == 0) return;
    auto beg = it;
    auto e = it;

    int cnt = 0;

    while (*beg == *it) {
        beg--;
        cnt++;
    }
    beg++;
    while (*e == *it) {
        e++;
        cnt++;
    }
    cnt--;
    if (cnt >= 3) {
        while (beg != e) {
            l.erase(beg++);
        }
        if (*(--beg) == *(e)) {
            bomb(beg, l);
        }
    }
}

int main() {
    int N, K, V;
    cin >> N >> K >> V;
    list<int> l;
    for (int i = 0; i < N; i++) {
        int inp;
        cin >> inp;
        l.push_back(inp);
    }
    auto it = l.begin();
    for (int i = 0; i < K; i++) {
        it++;
    }
    it = l.insert(it, V);
    bomb(it, l);
    auto it2 = l.begin();
    for (int i = 0; i < l.size(); i++, it2++) {
        cout << *it2 << " ";
    }
    cout << "\n";
}