#include<iostream>
#include<string>
#include<map>
#include<iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, score;
    string subjectId, teacher;
    map<string,pair<int,int>> subjectScore, teacherScore;
    cout << fixed << setprecision(2);
    cin >> n;
    while (n--) {
        cin >> subjectId >> teacher >> score;
        if (subjectScore.find(subjectId) != subjectScore.end()) {
            subjectScore[subjectId].first += score;
        } else {
            subjectScore[subjectId].first = score;
        }
        if (teacherScore.find(teacher) != teacherScore.end()) {
            teacherScore[teacher].first += score;
        } else {
            teacherScore[teacher].first = score;
        }
        subjectScore[subjectId].second++;
        teacherScore[teacher].second++;
    }
    
    for (auto it = subjectScore.begin(); it != subjectScore.end(); it++) {
        cout << it->first << " " << ((it->second).first + 0.0) / (it->second).second << "\n";
    }
    for (auto it = teacherScore.begin(); it != teacherScore.end(); it++) {
        cout << it->first << " " << ((it->second).first + 0.0) / (it->second).second << "\n";
    }
}