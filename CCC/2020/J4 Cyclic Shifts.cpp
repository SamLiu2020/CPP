#include <bits/stdc++.h>
using namespace std;
int main() {
    string t, s;
    cin >> t >> s;
    for (int i = 0; i < int(s.size()); i++){
        if (t.find(s) != string::npos){     // t.find(s) is return the index(int) where is the substring
            cout << "yes" << endl;
            exit(0);
        } else {
            s.push_back(s[0]);
            s.erase(s.begin()); 
        }
    }
    cout << "no" << endl;
}