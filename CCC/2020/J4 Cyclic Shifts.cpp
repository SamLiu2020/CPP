#include <bits/stdc++.h>
using namespace std;
int main() {
    string t, s;
    cin >> t >> s;
    for (int i = 0; i < s.size(); i++){
        s.push_back(s[0]);
        s.erase(s.begin()); 
        size_t found = t.find(s);
        if (found == s.size()){
            cout << "no" << endl;
            break;
        } 
    }
    cout << "yes" << endl;
}