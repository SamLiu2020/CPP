#include <bits/stdc++.h>

using namespace std;

int main() {

    cout << endl;
    
    int radius = 13;
    cout << "Radius in cm = " << radius << endl;

    int BF = 13;
    cout << "BF = "<< BF << endl;

    int BD = 13;
    cout << "BD = "<< BD << endl;

    int BE = 13; 
    cout << "BE = "<< BE << endl;

    int CE = 1; 
    cout << "CE = "<< CE << endl;

    int BC = BE - CE;
    cout << "BC = "<< BC << endl;

    int DC = (BD * BD) - (BC * BC);
    DC = sqrt(DC);
    cout << "DC = "<< DC << endl;

    int BA = DC;
    cout << "BA = "<< BA << endl;

    int AF = BF - BA;
    cout << "The Distance From A to F = "<< AF << endl;
   
    return 0;
}