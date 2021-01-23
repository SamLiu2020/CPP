#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x, y;
    cin >> n;   
    for(int i = 0; i<n; ++i) {
        cin >> x >> y;
    } 
    min_x = min x-1;
    min_y = min y-1;
    max_x = max x+1;
    max_y = max y+1;
    cout << min_x << "," << min_y << endl;
    cout << max_x << "," << max_y << endl;   
}
