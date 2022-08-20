#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, check;
    string name;
    map<string, int> m;
    vector<int> v;
    cin >> n >> k;

    while (n--)
    {
        cin >> name;
        if (m.find(name) != m.end()) {
            m[name]++;
        }
        else {
            m[name] = 1;
        }
    }
    check = k;
    if (m.size() < k) {
        check = m.size();
    }
    
    v.reserve(m.size()); // for reserving space in vector
    for (auto it = m.begin() ; it != m.end(); it++) v.push_back(it->second);
    sort(v.begin(), v.end(), greater<>()); // greater<>() in sort is for sorting from large -> low
    cout << v[check - 1];
}