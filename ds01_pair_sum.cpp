#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int numberSize, targetSize, inp, target;
    bool found;
    set<int> s;
    cin >> numberSize >> targetSize;
    for (int i = 0; i < numberSize; i++) {
        cin >> inp;
        s.insert(inp);
    }
    
    for (int i = 0; i < targetSize; i++) {
        cin >> target;
        found = false;
        for (auto it = s.begin(); it != s.end(); it++) {
            int result = target - *it;
            if (s.find(result) != s.end() && result != *it) {
                found = true;
                break;
            }
        }
        
        if (!found) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}