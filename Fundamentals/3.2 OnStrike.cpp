#include <bits/stdc++.h>
using namespace std;
int main() {

    int x; // Grade Number
    cin >> x; // Input the Grade
    int y = 20;


    if ((x >= 1) && (x < 7)) {   // If and else
        cout << "$20 " << endl;
    } else if ((x >= 7) && (x <= 12)) {
        cout << "$30 " << endl;
    }


    if ((x >= 1) && (x < 7)) {   // Two ifs
        cout << y << endl;
    } if ((x >= 7) && (x <= 12)) {
        cout << y + 10 << endl;
    }

    return 0;
}