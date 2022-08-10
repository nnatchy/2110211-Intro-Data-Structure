#include<iostream>
#include<string>
#include<array>

using namespace std;

int main() {
    string startTime = "";
    int delay;
    int timeLeft;
    int plusHour;

    getline(cin, startTime);
    cin >> delay;

    string hours = startTime.string::substr(0,2);
    string minutes = startTime.string::substr(3,2);

    // cout << hours << minutes << endl;

    if () {
        int hour = hours[1];
    }

    if (delay >= 60) {
        timeLeft = delay % 60;
        plusHour = int(delay / 60);
    } else {
        timeLeft = delay;
    }


}