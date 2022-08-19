#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int size, max;
    string name, maxName;
    map<string,int> m;
    cin >> size;
    max = 0;
    for (int i = 0; i < size; i++) {
        cin >> name;
        if (m.find(name) != m.end()) {
            m[name]++;
        } else {
            m[name] = 1;
        }
        if (m[name] > max) max = m[name];
    }

    for (auto it = m.end(); it != m.begin(); it--) {
        if (it->second == max){
            cout << it->first << " " << it->second;
            break;
        }
    }
}