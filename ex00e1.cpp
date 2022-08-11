#include<iostream>

using namespace std;

int main() {
    int hour, minute, delay;

    cin >> hour >> minute;
    cin >> delay;

    if (minute + delay >= 60) {
        hour += (delay + minute) / 60;
        minute = (minute + delay) % 60;
    } else {
        minute += delay;
    }
    
    if (hour >= 24) {
        hour %= 24;
    }

    if (hour < 10 && minute < 10) {
        cout << "0" << hour << " " << "0" << minute << endl;
    } else if (minute < 10) {
        cout << hour << " " << "0" << minute << endl;
    } else if (hour < 10) {
        cout << "0" << hour << " " << minute << endl;
    } else {
        cout << hour << " " << minute << endl;
    }
}