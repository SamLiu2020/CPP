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



    vector <int> vect = {5, 4, 3, 1, 6, 2};

    vect.front(); // Value
    vect.begin(); // Pointer
    vect.back(); // Value
    vect.end(); // Pointer

    sort(vect.begin(), vect.end()); // Ascending
    sort(vect.begin(), vect.end(), greater<>()); // Descending
    sort(vect.begin(), vect.begin() + 3);

    vect.push_back(5); // Add element to the end;
    // vect.push_back("element"); // Add element to the end;
    vect.insert(vect.begin()+1, 10); // Insert element by index, insert "10" to second element

    vect.pop_back(); // Remove the last element
    vect.erase(vect.begin()); // Remove the first element
    vect.erase(vect.begin()+1, vect.begin()+3); // Remove the second element to third element

    for (auto item : vect) {
        cout << item << endl;
    }
 
}