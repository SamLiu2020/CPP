#include <bits/stdc++.h>
using namespace std;
int main() {
    // int input1, input2, input3, input4;
    // cin >> input1 >> input2 >> input3 >> input4;
    
    // if ((input1 == 8 || input1 == 9 ) && (input2 == input3) && (input4 == 8 || input4 == 9)) {
    //     cout << "ignore" << endl;
    // } else {
    //     cout << "answer" << endl;
    // }
    
    int nums[4];
    cin >> nums[0] >> nums[1] >> nums[2] >> nums[3];

    if ((nums[0] == 8 || nums[0] == 9 ) && (nums[1] == nums[2]) && (nums[3] == 8 || nums[3] == 9)) {
        cout << "ignore" << endl;
    } else {
        cout << "answer" << endl;
    }
    
    return 0;
}

