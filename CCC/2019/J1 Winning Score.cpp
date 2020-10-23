#include <bits/stdc++.h>
using namespace std;
int main() {
    int apples3, apples2, apples1;
    int bananas3, bananas2, bananas1;
    
    cin >> apples3;
    cin >> apples2;
    cin >> apples1;
    cin >> bananas3;
    cin >> bananas2;
    cin >> bananas1;

    int applestotal = apples3*3+apples2*2+apples1*1;
    int bananastotal = bananas3*3+bananas2*2+bananas1*1;

    
    if (applestotal > bananastotal){
        cout << "A" << endl;
    }
    if (bananastotal > applestotal){
        cout << "B" << endl;
    }
    if (applestotal == bananastotal){
        cout << "T" << endl;
    }

    return 0;
}