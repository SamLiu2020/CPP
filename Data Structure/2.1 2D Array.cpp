#include <bits/stdc++.h>
using namespace std;
int main() {
    int int_2d[3][3] = {
        {0, 1, 2},
        {3, 4, 6},
        {7, 8, 9}
    };
    cout << int_2d[1][2] << endl;

    for (int i = 0; i < 3; i++){
        for (int h = 0; h < 3; h++) {
            cout << int_2d[i][h] << " ";
        }
        cout << endl;
    }

    // string str_2d[3][3] = {
    //     {"00", ..., ...},
    //     ...
    //     ...
    // };

    // int i = 2;
    // cout << ++i << endl;
    // cout << i << endl;
    return 0;
} 