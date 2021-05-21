#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <char> vect = {'A', 'B', 'C', 'D', 'E'};
    
    int button;
    cin >> button;

    for (int i = 0; i < int(button.size()); i++){
        if (button == 1){
            swap(button[0], button[4]);
        } else if (button == 2){
            swap(button[4], button[0]);
        } else if (button == 3){
            swap(button[0], button[1]);
        } else if (button == 4){
            break;
        }
        
    }
    one use swap one use vector
    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << endl;
    }

    return 0;
}