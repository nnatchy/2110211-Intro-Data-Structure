#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); 
    int n, m, month, year;
    cin >> n >> m;
    set<pair<int,int> > date;
    string out;
    while (n--) {
        cin >> year >> month;
        date.insert(make_pair(year, month));
    }
    while (m--) {
        cin >> year >> month;
        if (date.find(make_pair(year, month)) != date.end()) {
            cout << "0 0 ";
            continue;
        } else {
            auto upper = date.lower_bound(make_pair(year, month));
            if (upper == date.begin()) {
                cout << "-1 -1 ";
            } else {
                upper--;
                cout << upper->first << " " << upper->second << " ";
            }
        }
    }
}