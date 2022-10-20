#include<iostream>


using namespace std;
int main() {
    less<int> x;
    greater<int> y;
    int a = 10;
    int b = 3;
    cout << x(a,b) << endl; // a < b ?
    cout << y(a,b) << endl; // a > b ?
}