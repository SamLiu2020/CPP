#include <bits/stdc++.h>
using namespace std;
int main() {
    int young, medium, old, difference;
    cin >> young >> medium;
    if (young < medium){
        difference = medium - young;
        old = difference + medium ;
        cout << old << endl;
    } else if ((old = young = medium)){
        cout << old << endl;
    }
}