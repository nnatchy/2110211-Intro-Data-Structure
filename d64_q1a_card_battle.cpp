#include<iostream>
#include<map>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n, m, inp, numCard, power;
    int round = 1;
    bool finish = false;
    map<int,int> player;
    cin >> n >> m;
    while (n--) {
        cin >> inp;
        if (player.find(inp) != player.end()) player[inp] += 1;
        else player[inp] = 1;
    }
    for (int i = 0; i < m; i++) {
        cin >> numCard;
        while (numCard--) {
            cin >> power;
            if (finish) break;
            if (player.upper_bound(power) != player.end() && player.upper_bound(power)->second > 0 && player.upper_bound(power)->first > power) {
                (player.upper_bound(power)->second)--;

                if (player.upper_bound(power)->second == 0) {
                    player.erase(player.upper_bound(power));
                }
            } else {
                round = i+1;
                finish = true;
                break;
            }
        }
        if (!finish) round++;
    }
    if (round == m && !finish) {
        cout << m+1 << "\n";
    } else {
        cout << round << "\n";
    }
}