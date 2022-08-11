#include<iostream>

using namespace std;

int main() {
    int rows, cols, R;
    int r1, r2, c1, c2;
    int maxNumber;

    cin >> rows >> cols;
    cin >> R;

    int tbl[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> tbl[i][j];
        }
    }
    
    for (int i = 0; i < R; i++) {
        cin >> r1 >> c1 >> r2 >> c2;
        if (r1 > r2 && c1 > c2) cout << "INVALID" << endl;
        else if (r1 > rows || c1 > cols  || r2 < 0 || c2 < 0) cout << "OUTSIDE" << endl;
        else {
            maxNumber = tbl[r1 - 1][c1 - 1];
            for (int row = r1 - 1; row < r2 - 1; row++) {
                for (int col = c1 - 1; col < c2 - 1; col++ ) {
                    if (row > rows || col > cols) break;
                    if (tbl[row][col] > maxNumber) maxNumber = tbl[row][col];
                }
                if (row > rows) break;
            }
            cout << maxNumber << endl;
        }
    }
}