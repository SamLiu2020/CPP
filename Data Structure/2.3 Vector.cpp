#include <bits/stdc++.h>
using namespace std;
void What_is_Vector(){
//  Vectors are sequence containers representing arrays that can change in size. (Dynamic size array)
    int array[4] = {1, 2, 3, 4};
    vector <int> vect = {1, 2, 3, 4};
    //  (Data Type)
}

void Access_and_Iterate_Vector(){
    vector <int> vect = {1, 2, 3, 4};

    cout << vect[0] << endl;

    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << endl;
    }

    for (auto item : vect) {
        cout << item << endl;
    }
}

void TwoD_Vector(){
    vector <vector <int>> vect_2d{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector <int> my_vector{
        {10, 11, 12}
    };
    // Displaying the 2D vector
    vect_2d.push_back(my_vector);
    for (int i = 0; i < vect_2d.size(); i++){
        for (int j = 0; j < vect_2d[i].size(); j++)
            cout << vect_2d[i][j] << " ";
        cout << endl;
    }
}

void Commonly_Used_Vector_Operations(){
    vector <int> vect = {1, 2, 3, 4};

    vect.push_back(5); // Add element to the end;
    // vect.push_back("element"); // Add element to the end;
    vect.insert(vect.begin()+1, 10); // Insert element by index, insert "10" to second element

    vect.pop_back(); // Remove the last element
    vect.erase(vect.begin()); // Remove the first element
    vect.erase(vect.begin()+1, vect.begin()+3); // Remove the second element to third element
}

void Vector_Iterator(){
    vector <int> vect = {5, 4, 3, 1, 6, 2};

    vect.front(); // Value
    vect.begin(); // Pointer
    vect.back(); // Value
    vect.end(); // Pointer

    sort(vect.begin(), vect.end()); // Ascending
    sort(vect.begin(), vect.end(), greater<>()); // Descending
    sort(vect.begin(), vect.begin() + 3);
}


int main() {
    Access_and_Iterate_Vector();
    TwoD_Vector();
    Commonly_Used_Vector_Operations();
    Vector_Iterator();
}