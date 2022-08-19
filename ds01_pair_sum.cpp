#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int numberSize, targetSize, inp, target;
    bool found;
    vector<int> v;
    int ind = 0;
    cin >> numberSize >> targetSize;
    for (int i = 0; i < numberSize; i++) {
        cin >> inp;
        v.push_back(inp);
    }
    
    for (int i = 0; i < targetSize; i++) {
        cin >> target;
        found = false;
        for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
            int result = target - *it;
            if (find(v.begin(), v.end(), result) != v.end() && it != v.begin() + ind) {
                found = true;
                break;
            }
        }
        
        if (!found) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        ind++;
    }

    return 0;
}