#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt;
    for (int i = 0; i < 1000; i++) {
        if (pow(2,i) >= n) {
            cnt = pow(2,i); break;
        }
    }
    cout << cnt - n << "\n";
}