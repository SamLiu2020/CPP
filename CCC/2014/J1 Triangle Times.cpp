#include <bits/stdc++.h>
using namespace std;
int main() {
    int Angle1;
    int Angle2;
    int Angle3;

    cin >> Angle1;
    cin >> Angle2;
    cin >> Angle3;
    int total = Angle1 + Angle2 + Angle3;

    if ((Angle1 == 60) && (Angle2 == 60) && (Angle3 == 60)) {
        cout << "Equilateral" << endl;
    }  else if (total == 180 && (Angle1 != Angle2 && Angle2 != Angle3 && Angle1 != Angle3)) {
        cout << "Scalene" << endl;
    }  else if (total == 180 && ((Angle1 = Angle2) || (Angle2 = Angle3) || (Angle1 = Angle3))) {
        cout << "Isosceles" << endl;
    }  else if (total != 180) {
        cout << "Error" << endl;
    }
    return 0;
}