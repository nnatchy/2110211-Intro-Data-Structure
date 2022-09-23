#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int mFront, mSize, mCap, last, correction;
        cin >> mFront >> mSize >> mCap >> last >> correction;
        if (correction == 0) {
            if (mSize > mCap) cout << "WRONG\n";
            else if (mSize == mCap) {
                if (last > mCap) cout << "WRONG\n";
                else if (last != mFront) cout << "WRONG\n";
            }
            else {
                if (last != mSize) cout << "WRONG\n";
                else cout << "OK\n";
            }
        } else if (correction >= 1 && correction <= 4) {

        }
    }
}