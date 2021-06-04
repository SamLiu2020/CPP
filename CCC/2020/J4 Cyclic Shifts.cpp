#include <bits/stdc++.h>
using namespace std;
int main() {
    string t, s;
    cin >> t >> s;
    for (int i = 0; i < s.size(); i++){
        if (t.find(s)){
            cout << "yes" << endl;
            break;
        } 
        if (!t.find(s)) {
            s.push_back(s[0]);
            s.erase(s.begin()); 
        }
    }
    if (!t.find(s)) {
        cout << "no" << endl;
    }
    
}