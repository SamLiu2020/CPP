#include <bits/stdc++.h>
using namespace std;
int main() {
    int small, medium, large;
    cin >> small >> medium >> large;

    if ((1*small) + (2*medium) + (3*large) < 10 ) {
        cout << "sad" << endl; 
    } else if ((1*small) + (2*medium) + (3*large) >= 10 ) {
        cout << "happy" << endl;
    } 
    
    return 0;
}