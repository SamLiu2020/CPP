#include <bits/stdc++.h>
using namespace std;
int main() {
    int speed_limit, driver_speed;
    cin >> speed_limit >> driver_speed;

    if (driver_speed <= speed_limit; ) {
        cout << "Congratulations, you are within the speed limit!" << endl;
    }
    if (driver_speed - speed_limit >=1 && driver_speed - speed_limit <=20; ){
        cout << "You are speeding and your fine is $100." << endl;
    }
    if (driver_speed > speed_limit >=21 && driver_speed - speed_limit <=30; ) {
        cout << "You are speeding and your fine is $270." << endl;
    }
    if (driver_speed > speed_limit >=31; ){
        cout << "You are speeding and your fine is $500." << endl;
    }
    
}