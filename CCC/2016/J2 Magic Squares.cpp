#include <bits/stdc++.h>
using namespace std;
int main() {
    int magic_squares[4][4], rows[4] = {0}, columns[4] = {0};
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
            cin >> magic_squares[i][j];
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            rows[i] += magic_squares[i][j];
            columns[i] += magic_squares[j][i];
        }
    }
    
    if ((rows[0] == [1]) && (rows[1] == columns[2]) && (rows[2] == columns[3]))
        cout << "magic" << endl;
    else
        cout << "not magic" << endl;
}