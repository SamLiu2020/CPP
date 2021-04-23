#include <bits/stdc++.h>
using namespace std;
void func1() {
    string group1, group2, group3;
    int k;
    cin >> k;

    for (int i = 0; i < k; i++) {
        group1 += "*";
        group2 += " ";
        group3 += "*";
    }
    for (int i = 0; i < k; i++) {
        group1 += "x";
        group2 += "x";
        group3 += " ";
    }
    for (int i = 0; i < k; i++) {
        group1 += "*";
        group2 += "x";
        group3 += "*";
    }
    for (int i = 0; i < k; i++) {
        cout << group1 << endl;
    }
    for (int i = 0; i < k; i++) {
        cout << group2 << endl;
    }
    for (int i = 0; i < k; i++) {
        cout << group3 << endl;
    }
}

void func2() {
    int scale;
    cin >> scale;

    char arr_2d[3][3] = {
        {'*','x','*'},
        {' ','x','x'},
        {'*',' ','*'}
    };

    for (int row = 0; row < 3; row++){
        for (int i = 0; i < scale; i++) {
            for (int column = 0; column < 3; column++){
                for (int j = 0; j < scale; j++){
                    cout << arr_2d[row][column];
                }
            }
        cout << endl;               
        }
    }
} 

int main() {
    func1();
    func2();
    return 0;
}