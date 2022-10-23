#include<iostream>


using namespace std;
int main() {
    // less<int> x;
    // greater<int> y;
    // int a = 10;
    // int b = 3;
    // cout << x(a,b) << endl; // a < b ?
    // cout << y(a,b) << endl; // a > b ?
    int x = 62;
    long long sum = 1;
    for (int i = 1; i < 7; i++) {
        sum *= x;
        cout << sum << "\n";
    }
}