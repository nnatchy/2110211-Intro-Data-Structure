#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int size;
    string name;
    map<string, int> m;
    map<string, int>::iterator it;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> name;
        if ((it = m.find(name)) != m.end())
        {
            m[name]++;
        }
        else
        {
            m[name] = 1;
        }
    }

    int max = m.begin()->second;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second > max)
        {
            max = it->second;
        }
    }

    for (auto it = m.end(); it != m.begin(); it--) {
            if (it->second == max) {
                cout << it->first << " " << it->second;
                break;
        }
    }
}