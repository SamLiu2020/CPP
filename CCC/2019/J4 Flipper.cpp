#include <bits/stdc++.h>
using namespace std;
int main() {
    string input;
    int original_grid[2][2] = {
        {1, 2},
        {3, 4}
    };
    cin >> input;

    if (input == "H"){
        swap(original_grid[0][0], original_grid[0][1]);
        swap(original_grid[1][0], original_grid[1][1]);
    } 
    if (input == "V"){
        swap(original_grid[0][0], original_grid[1][0]);
        swap(original_grid[0][1], original_grid[1][1]);
    }

    cout << original_grid[0][0] << ' ' << original_grid[0][1] << endl;
    cout << original_grid[1][0] << ' ' << original_grid[1][1] << endl;

    return 0;
}