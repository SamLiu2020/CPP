#include <bits/stdc++.h>
using namespace std;
int main() {
    int parking_spaces;
    int total_number_occupied = 0;
    string yesterday, today;
    bitset <100> bits1;
    bitset <100> bits2;
    cin >> parking_spaces >> yesterday >> today;
    for(int i=0; i<parking_spaces; i++){
        if(yesterday[i] == 'C'){
            bits1[i] = 1;
        }
        if(today[i] == 'C'){
            bits2[i] = 1;
        }
    }
    for(int i = 0; i<parking_spaces; i++){
        if(bits1[i] == 1 && bits2[i] == 1)
            total_number_occupied++;
    }
    cout << total_number_occupied << endl;
    return 0;
} 