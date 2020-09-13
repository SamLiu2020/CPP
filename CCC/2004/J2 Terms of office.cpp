#include <bits/stdc++.h>
using namespace std;

void my_function(int year1, int year2){
    for (int positions = year1; positions <= year2; positions += 60) { // Step is 60
        cout << "All positions change in year " << positions << endl;
    }
}

int main() {
    int year1, year2;
    cin >> year1 >> year2;
    my_function(year1, year2);

    return 0;
}



// int main() {
//     int year1, year2;
//     cin >> year1 >> year2;
//     for (int positions = year1; positions <= year2; positions += 60){
//         cout << "All positions change in year " << positions << endl;
//     }
// }