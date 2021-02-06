#include <bits/stdc++.h>
using namespace std;
int main() {
    int number_of_parking_lots;
    string yesterday, today;
    int number_occupied = 0;
    cin >> number_of_parking_lots >> yesterday >> today;

    for(int i = 0; i < number_of_parking_lots; i++){
        if(today[i] == 'C' && yesterday[i] == 'C')
            number_occupied++;
    }

    cout << number_occupied << endl;
}