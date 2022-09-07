#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void member_multiply(vector<int> &v, vector<pair<vector<int>::iterator,int>> &multiply) {
    //write your code here
    vector<int> tmp = v;
    //pair that store iterator as first and int as second
    sort(multiply.begin(), multiply.end(), greater<>());
    for (auto it = multiply.begin(); it != multiply.end(); it++) {
        //if (find(v.begin(), v.end(), (*it).first) != v.end())
        int ind = (*it).first - v.begin();
        int val = v[ind];
        tmp.insert(find(tmp.begin(), tmp.end(), val),(*it).second, val);
    }
    v = tmp;
}
int main() {
 ios_base::sync_with_stdio(false);cin.tie(0);
 int n,m;
 cin >> n >> m;
 vector<int> v(n);
 vector<pair<vector<int>::iterator,int>> multiply(m);
 for (int i = 0;i < n;i++) cin >> v[i];
 for (int i = 0;i < m;i++) {
 int a,b;
 cin >> a >> b;
 multiply[i].first = v.begin()+a;
 multiply[i].second = b;
 }
 member_multiply(v,multiply);
 cout << "======= result ========" << endl;
 cout << v.size() << endl;
 for (auto &x : v) {
 cout << x << " ";
 }
 cout << endl;
}