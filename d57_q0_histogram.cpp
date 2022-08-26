#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string name;
    map<string, int> m;
    cin >> n;
    while (n--) {
        cin >> name;
        if (m.find(name) != m.end()) m[name] += 1;
        else m[name] = 1;
    }
    for (map<string,int>::iterator it = m.begin(); it != m.end(); it++) {
        if (it->second > 1) {
            cout << it->first << " " << it->second << "\n";
        }
    }
}