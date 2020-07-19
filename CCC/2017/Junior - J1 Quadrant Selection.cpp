#include <bits/stdc++.h> 
using namespace std;
int main() {
    int x; //Declare variable
    int y;

    cin >> x; //Console input
    cin >> y;
    
    cout << "X = " << x << endl; //Show the variable value
    cout << "Y = " << y << endl;
    
    // if ((x = 0) && (y = 0)) {
    //     cout << "Center of the Graph " << endl;
    // }

    if ((x > 0) && (y > 0)) { //Quadrant 1
        cout << "Quadrant 1 " << endl;
    }

    if ((x < 0) && (y > 0)) { //Quadrant 2
        cout << "Quadrant 2 " << endl;
    }
    
    if ((x < 0) && (y < 0)) { //Quadrant 3
        cout << "Quadrant 3 " << endl;
    }

    if ((x > 0) && (y < 0)) { //Quadrant 4
        cout << "Quadrant 4 " << endl;
    }
    
    
    
}   