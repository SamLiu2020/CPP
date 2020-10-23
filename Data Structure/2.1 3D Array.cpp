#include <bits/stdc++.h>
using namespace std;
int main() {
    int array_3d[3][3][3] = {
        {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}},
        {{9, 10, 11}, {12, 13, 14}, {15, 16, 17}},
        {{18, 19, 20}, {21, 22, 23}, {24, 25, 26}}
    };

    cout << array_3d[2][1][0] << endl;
      
    for (int i = 0; i < 3; i++){
        for (int h = 0; h < 3; h++) {
            for (int k = 0; k < 3; k++){
                cout << array_3d[i][h][k] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}