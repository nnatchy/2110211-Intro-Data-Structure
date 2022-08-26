#include<iostream>
#include<map>
#include<set>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n, m, year, month;
    map<int,int> md;
    set<pair<int,int>> s;
    cin >> n >> m;
    while (n--) {
        cin >> year >> month;
        md[year] = month;
        s.insert(make_pair(year, month));
    }
    while (m--) {
        cin >> year >> month;
        if (s.find(make_pair(year,month)) != s.end()) {
            cout << "0 0 ";
            continue;
        }
        auto beg = s.begin();
        while (true) {
            if (year < beg->first || year == beg->first && month < beg->second) {
                cout << "-1 -1 ";
                break;
            }

            if (md.find(year) != md.end()) {
                if (s.find(make_pair(year,month)) == s.end()) {
                    month--;
                }

                if (month == 0) {
                    month = 12;
                    year--;
                }

                if (s.find(make_pair(year,month)) != s.end()) {
                    cout << year << " " << month << " ";
                    break;
                }
            } else {
                year--;
                month = 12;
            }
        }
    }
}