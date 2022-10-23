#include<iostream>
#include<cmath>

using namespace std;
bool check_descendant(int a, int b) {
    int cnt = 0;
    while (a <= b) {
        for (int i = 0; i < pow(2, cnt); i++) {
            int val = a + i;
            if (val == b) return true;
        }
        cnt++;
        a = 2 * a + 1;
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    while (m--) {
        int a, b;
        cin >> a >> b;
        if (a == b) {
            cout << "a and b are the same node\n";
            continue;
        } else if (a < b) {
            if (check_descendant(a, b)) {
                cout << "a is an ancestor of b\n";
                continue;
            }
        } else {
            if (check_descendant(b, a)) {
                cout << "b is an ancestor of a\n";
                continue;
            }
        }
        cout << "a and b are not related\n";
    }
}