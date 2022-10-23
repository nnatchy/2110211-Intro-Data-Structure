#include<iostream>

using namespace std;

int main() {
    long long n;
    int K;
    cin >> n >> K;
    if (K == 1) {
        cout << --n << "\n";
        return 0;
    }
    long long x = 1;
    int i = 0;
    long long tmp = 1;
    while (x < n) {
        tmp *= K;
        x += tmp;
        i++;
    }
    cout << i << "\n";

}