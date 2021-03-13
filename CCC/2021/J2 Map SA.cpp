#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, bids, most_bid; 
    cin >> n;
    string name, winner;
    map <string, int> my_map;
    for (int i = 0; i < n; i++){
        cin >> name;
        cin >> bids;
        my_map[name] = bids;
        if (my_map[name] > my_map[name]) {
            int most_bid = my_map[name];
            winner = name;
        }
    }
    cout << winner << endl;
    return 0;
}