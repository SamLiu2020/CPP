#include <bits/stdc++.h>
using namespace std;
int main() {
    int votes = 0, a_votes = 0, b_votes = 0;
    string a_or_b;
    cin >> votes >> a_or_b;
    for (int i = 0; i < votes; i++){
        if (a_or_b[i] == 'A'){
            a_votes++;
        } else if (a_or_b[i] == 'B'){
            b_votes++;
        }
    }
    if (a_votes > b_votes){
        cout << 'A' << endl;
    } else if (b_votes > a_votes){
        cout << 'B' << endl;
    } else
        cout << "Tie" << endl;
}