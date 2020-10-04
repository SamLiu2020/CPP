#include <bits/stdc++.h>
using namespace std;
int main() {
    int lines_of_code, number;
    char symbol;
    cin >> lines_of_code;

    for (int i = 0; i < lines_of_code; i++) {
        cin >> number >> symbol;
        for (int k = 0; k < number; k++) {
            cout << symbol;
        }
        cout << endl;
    }
    return 0;
}
