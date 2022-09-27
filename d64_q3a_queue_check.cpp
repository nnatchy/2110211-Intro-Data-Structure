#include<iostream>
#define endl "\n"
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int mFront, mSize, mCap, last, correction;
        cin >> mFront >> mSize >> mCap >> last >> correction;
        if (correction == 0) {
            if (mSize > mCap) cout << "WRONG" << endl;
            else if (last > mCap) cout << "WRONG" << endl;
            else cout << "OK\n";
        } else if (correction >= 1 && correction <= 4) {
            int corVal = 0;
            if (correction == 1) {
                if (mFront + mSize != last) {
                    corVal = last - mSize;
                }
            } else if (correction == 2) {
                if (mSize + mFront != last) {
                    corVal = last;
                }
            } else if (correction == 3) {
                if (last >= mSize + mFront) {
                    corVal = last + 1;
                } else if (mSize >= last + mFront) {
                    corVal = mSize;
                }
            } else if (correction == 4) {
                if (mSize + mFront != last) {
                    corVal = mSize + mFront;
                }
            }
            if (corVal == 0) cout << "OK\n";
            else cout << "WRONG " << corVal << endl; 
        }
    }
}