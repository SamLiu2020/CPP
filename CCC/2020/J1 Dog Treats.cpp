#include <bits/stdc++.h>
using namespace std;
int main() {
    int small, medium, large;
    cin >> small;
    cin >> medium;
    cin >> large;

    if ((1*small) + (2*medium) + (3*large) < 10 ) {
        cout << "sad" << endl; 
    } else if ((1*small) + (2*medium) + (3*large) > 10 ) {
        cout << "happy" << endl;
    } else if ((small || medium || large) > 10 ) {
        cout << "try number less than 10 for each line" << endl;
    }
    return 0;
}