#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <char> vect = {'A', 'B', 'C', 'D', 'E'};
    int b, n;

    while (b != 4){
        cin >> b >> n;
        for (int i = 0; i < n; i++){
            if (b == 1){
                swap(vect[0], vect[4]);
                swap(vect[0], vect[3]);
                swap(vect[0], vect[2]);
                swap(vect[0], vect[1]);
            } else if (b == 2){
                swap(vect[4], vect[0]);
                swap(vect[4], vect[1]);
                swap(vect[4], vect[2]);
                swap(vect[4], vect[3]);
            } else if (b == 3)
                swap(vect[0], vect[1]);
        }
    }
    for (int i = 0; i < 5; i++){
        cout << vect[i] << " ";
    }
}