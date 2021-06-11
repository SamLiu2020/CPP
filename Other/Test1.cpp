#include <bits/stdc++.h>
using namespace std;
int main() {
    string str = "Hello World!";
    auto found_idx = str.find("Wo");
    
    if (found_idx != string::npos)
        cout << "Found at: " << found_idx << endl;
    else
        cout << "Not found!" << endl;
}