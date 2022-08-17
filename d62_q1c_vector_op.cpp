#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    int numberOp, ind;
    string command;
    cin >> numberOp;
    vector<int> v;

    for (int i = 0; i < numberOp; i++) {
        cin >> command;

        if (command == "pb") {
            int x;
            cin >> x;
            v.push_back(x);
        } else if (command == "sa") sort(v.begin(), v.end());
        else if (command == "sd") sort(v.begin() , v.end()), reverse(v.begin(), v.end());
        else if (command == "r") reverse(v.begin(), v.end());
        else if (command == "d") {
            cin >> ind;
            v.erase(v.begin() + ind);
        }
    }

    for (auto x : v) cout << x << " ";
    cout << endl;
}