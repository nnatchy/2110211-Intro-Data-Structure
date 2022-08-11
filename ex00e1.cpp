#include<iostream>

using namespace std;

int main() {
    int hour, minute, delay;
    int Hour, Minute;

    cin >> hour >> minute;
    cin >> delay;

    Minute = (minute + delay) % 60;
    Hour = ( hour + ((minute + delay) / 60)) % 24;

    if (Hour < 10) cout << "0";
    cout << Hour << " ";

    if (Minute < 10) cout << "0";
    cout << Minute << "\n";
}