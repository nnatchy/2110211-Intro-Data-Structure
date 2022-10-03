#include<iostream>
#define endl "\n"
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int mFront, mSize, mCap, last, correction;
        cin >> mFront >> mSize >> mCap >> last >> correction;
        if ((mFront + mSize) % mCap != last || mFront >= mCap || last > mCap || mSize > mCap) {
            int corVal;
            if (correction == 0) {
                cout << "WRONG" << endl;
                continue;
            } else if (correction == 1) {
                corVal = (last - mSize) % mCap;
            } else if (correction == 2) {
                corVal = (last - mFront) % mCap;
            } else if (correction == 3) {
                if (last >= mSize + mFront) corVal = last + 1;
                else if (mSize >= last + mFront) corVal = mFront + mSize - last;
            } else if (correction == 4) {
                corVal = (mSize + mFront) % mCap;
            }
            cout << "WRONG " << corVal << endl;
        } else {
            cout << "OK" << endl;
        }
    }
}