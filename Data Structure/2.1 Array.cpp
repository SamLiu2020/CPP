#include <bits/stdc++.h>
using namespace std;

void initialize_array(){
    int array_0[5];       // It may has random values in the array
    int array_1[5] = {};  // Initialize all element to 0 with {}
    int array_2[5] = {1, 1, 1, 1, 1}; // Give initial value
}
void access_value(){
    int something[3] = {10, 20, 30};
    cout << something[0] << endl;
    cout << something[1] << endl;
    cout << something[2];
}

int main(){
    initialize_array();
    access_value();
    return 0;
}