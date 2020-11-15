#include <bits/stdc++.h>
using namespace std;
int main() {
    // vector <int> vect = {1, 2, 3, 4};
    // cout << vect[0] << endl;
    // for (int i = 0; i < vect.size(); i++) {
    //     cout << vect[i] << endl;
    // }
    // for (auto item : vect) {
    //     cout << item << endl;
    // }
    // vect.end(4)
    vector <int> vect = {5, 4, 3, 1, 6, 2};
    sort(vect.begin(), vect.end());
    sort(vect.begin(), vect.end(), greater<>());
    sort(vect.begin(), vect.begin() + 3);
    vect.push_back(5);
    


    return 0;
}