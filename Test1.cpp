#include <bits/stdc++.h> 

using namespace std;

int main() {
   

    int x; //Declare variable
    int y;

    cin >> x; //Console input
    cin >> y;

    if ((x > 0) && (y > 0)) { //Quadrant 1
        cout << "1 " << endl;
    }

    if ((x < 0) && (y > 0)) { //Quadrant 2
        cout << "2 " << endl;
    }
    
    if ((x < 0) && (y < 0)) { //Quadrant 3
        cout << "3 " << endl;
    }

    if ((x > 0) && (y < 0)) { //Quadrant 4
        cout << "4 " << endl;
    }
    
    return 0;
}