#include <bits/stdc++.h>
using namespace std;
int main() {
    string input;
    int v = 0, h = 0;
    cin >> input;
    int original_grid[2][2] = {
        {1, 2},
        {3, 4}
    };

    for (int i = 0; i < int(input.size()); i++){
        if (input[i] == 'V'){ 
            v = v + 1;
        } else if (input[i] == 'H'){
            h = h + 1;
        }
    } 

    if (v % 2){
        swap(original_grid[0][0], original_grid[0][1]);
        swap(original_grid[1][0], original_grid[1][1]);
    } 
    if (h % 2){
        swap(original_grid[0][0], original_grid[1][0]);
        swap(original_grid[0][1], original_grid[1][1]);
    } 

    cout << original_grid[0][0] << ' ' << original_grid[0][1] << endl;
    cout << original_grid[1][0] << ' ' << original_grid[1][1] << endl;

}