#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <char> vect = {'A', 'B', 'C', 'D', 'E'};
    int b, n;

    while (b != 4){
        cin >> b >> n;
        for (int i = 0; i < n; i++){
            if (b == 1){
                vect.push_back(vect[0]);
                vect.erase(vect.begin());
            } else if (b == 2){
                vect.insert(vect.begin(), vect[4]);
                vect.pop_back();
            } else if (b == 3){
                vect.insert(vect.begin()+2, vect[0]);
                vect.erase(vect.begin());
            }
        }
    }
    for (int i = 0; i < 5; i++){
        cout << vect[i] << " ";
    }
}