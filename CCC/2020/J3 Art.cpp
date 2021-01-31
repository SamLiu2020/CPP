#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x, y;
    cin >> n;
    char comma;
    int maximum_x = -INFINITY;
    int maximum_y = -INFINITY;
    int minimum_x = INFINITY;
    int minimum_y = INFINITY;
    for(int i = 0; i<n; i++) {
        cin >> x >> comma >> y;
        if (x > maximum_x){
            maximum_x = x;
        }
        if (y > maximum_y){
            maximum_y = y;
        }
        if (x < minimum_x){
            minimum_x = x;
        }
        if (y < minimum_y){
            minimum_y = y;
        }
    }
    cout << minimum_x-1 << "," << minimum_y-1 << endl;
    cout << maximum_x+1 << "," << maximum_y+1 << endl;   
}