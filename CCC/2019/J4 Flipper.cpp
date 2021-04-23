#include <bits/stdc++.h>
using namespace std;
int main() {
    string input;
    cin >> input;
    int original_grid[2][2] = {
        {1, 2},
        {3, 4}
    };

    for (int i = 0; i < int(input.size()); i++){
        if (input[i] == 'V'){
            swap(original_grid[0][0], original_grid[0][1]);
            swap(original_grid[1][0], original_grid[1][1]);
        }  
        if (input[i] == 'H'){
            swap(original_grid[0][0], original_grid[1][0]);
            swap(original_grid[0][1], original_grid[1][1]);
        }
    } 

    cout << original_grid[0][0] << ' ' << original_grid[0][1] << endl;
    cout << original_grid[1][0] << ' ' << original_grid[1][1] << endl;

    return 0;
}