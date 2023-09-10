#include <iostream>
#include <vector>
#include <map>
using namespace std;
void insert_into_sv(map<int,int> &v, int pos, int value) {
//your code here
    auto newPos = v.lower_bound(pos);
    vector<pair<int,int> > tmp;
    tmp.push_back(make_pair(pos, value));
    for (auto it = newPos; it != v.end(); it++) {
        tmp.push_back(make_pair(it->first + 1, it->second));
    }
    v.erase(newPos, v.end());
    for (pair<int,int> pii : tmp) {
        v.insert(v.end(), pii);
    }
}
int main() {
ios_base::sync_with_stdio(false);cin.tie(0);
int n;
map<int,int> v;
cin >> n;
for (int i = 0;i < n;i++) {
int a,b;
cin >> a >> b;
insert_into_sv(v,a,b);
}
cout << v.size() << "\n";
for (auto &x : v) {
cout << x.first << ": " << x.second << "\n";
}
}