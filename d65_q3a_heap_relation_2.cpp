#include <iostream>
#include <vector>
#include<cmath>
#define ll long long
using namespace std;
int relation(long long S, long long a, long long b)
{
    ll low = a >= b ? b : a;
    ll high = a >= b ? a : b;
    ll mx = high;
    ll mn = low;
    if (low == high) return 4;
    if ((high - 1) / S == low) return 1;
    while (low <= high) {
        high = (high - 1) / S;
        if (high == low) return 2;
    }
    ll h1 = 0;
    ll h2 = 0;
    while (mn > 0) {
        mn = (mn - 1) / S;
        h1++;
    }
    while (mx > 0) {
        mx = (mx - 1) / S;
        h2++;
    }
    if (h1 != h2) return 3;
    return 4;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    long long S, a, b;
    cin >> n;
    while (n--)
    {
        cin >> S >> a >> b;
        cout << relation(S, a, b) << " ";
    }
    cout << endl;
}