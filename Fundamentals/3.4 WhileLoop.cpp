#include <bits/stdc++.h>
using namespace std;
int main() {
    // bool condition = true;
    // while (condition){
    //     cout << "Within While Loop!" << endl;
    //     condition = false; 
    // }


    // int x = 0;
    // while (x < 10) {    
    //    cout << "x is smaller than 10" << endl;
    //    cout << x << endl;

    //    x++;
    // }
    


    // char input;
    // while (cin >> input) {
    //     if (input == 'Q') 
    //         break;

    //     cout << "Within While Loop" << endl;
    // }
    


    // string input;
    // while (cin >> input) {
    //     if (input == "Cancel") {
    //         break;
    //     }
    //     cout << input << endl;
        
    // }

    string response;
    do {
        cout << "Enter menu choice " << endl;
        cout << "More" << endl << "Quit" << endl;
        cin >> response;
        cout << "You Input: " << response << endl;    
    } while (response != "Quit") ;
    
    
    return 0;
}