#include <bits/stdc++.h>
using namespace std;
void using_map() {
    int n, bids, bids_2 = 0;
    cin >> n;
    string name, winner;
    map <string, int> my_map;
    for (int i = 0; i < n; i++){
        cin >> name;
        cin >> bids;
        my_map[name] = bids;
        if (my_map[name] > bids_2) {
            bids_2 = my_map[name];
            winner = name;
        }
    }
    cout << winner << endl;
}
void not_using_map() {
    int n; 
    cin >> n;
    string winner, name;
    int bid, bid2 = 0;
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

int main() {
    using_map();
    not_using_map();
    // Two solutions: Using map and not using map.
}