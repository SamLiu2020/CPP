#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; 
    cin >> n;
    string winner, name;
    int bid, bid2;
    for (int i = 0; i < n; i++){
        cin >> name;
        cin >> bid;
        if (bid > bid2) {
            bid2 = bid;
            winner = name;
        }
    }
    cout << winner << endl;
}