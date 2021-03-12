#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; 
    cin >> n;
    string name;
    int bid;
    map <string, int> my_map;
    for (int i = 0; i < n; i++){
        cin >> name;
        cin >> bid;
        my_map[name] = bid;
    }
    for (auto &item : my_map) {
        cout << item.first << " " << item.second << endl; 
    }
    return 0;
}