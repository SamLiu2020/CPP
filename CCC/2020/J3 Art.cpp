#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x, y;
    cin >> n;
    char comma;

    for(int i = 0; i<n; i++) {
        cin >> x >> comma >> y;
    }     
    int maximum = -INFINITY;
    if (x > maximum){
        maximum = x;
    }
    int maximum2 = -INFINITY;
    if (y > maximum2){
        maximum2 = y;
    }
    int minimum = -INFINITY;
    if (x < minimum){
        minimum = x;
    }
    int minimum2 = -INFINITY;
    if (y < minimum2){
        minimum2 = y;
    }

    int max_x = x+1;
    int max_y = y+1;
    int min_x = x-1; 
    int min_y = y-1;
    cout << min_x << "," << min_y << endl;
    cout << max_x << "," << max_y << endl;   
}
