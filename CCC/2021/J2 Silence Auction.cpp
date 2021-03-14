#include <bits/stdc++.h>
using namespace std;
void using_map() {
    int n, bids, max_bid = 0;
    cin >> n;
    string name, winner;
    map <string, int> my_map;
    for (int i = 0; i < n; i++){
        cin >> name >> bids;
        my_map[name] = bids;
        if (my_map[name] > max_bid) {
            max_bid = my_map[name];
            winner = name;
        }
    }
    cout << winner << endl;
}
void not_using_map() {
    int n; 
    cin >> n;
    string winner, name;
    int bid, max_bid = 0;
    for (int i = 0; i < n; i++){
        cin >> name >> bid;
        if (bid > max_bid) {
            max_bid = bid;
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