#include <bits/stdc++.h>
using namespace std;
int main() {
    int input1, input2, input3, input4;
    cin >> input1 >> input2 >> input3 >> input4;

//  if ((input1 == 8 || 9 ) && (input2 == input3) && (input4 == 8 || 9)){
//         cout << "ignore" << endl;
//     } else {
//         cout << "answer" << endl;
//     }
    
    if ((input1 == 8 || input1 == 9 ) && (input2 == input3) && (input4 == 8 || input4 == 9)){
        cout << "ignore" << endl;
    } else {
        cout << "answer" << endl;
    }
    
    return 0;
}

