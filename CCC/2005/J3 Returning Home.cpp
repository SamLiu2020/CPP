#include <bits/stdc++.h>
using namespace std;
int main() {
    stack <string> stk_direction;
    stack <string> stk_street;
    string left_or_right, my_street;

    while (my_street != "SCHOOL"){
        cin >> left_or_right >> my_street;
        stk_direction.push(left_or_right);
        stk_street.push(my_street);
    }
    while (!stk_street.empty()){
        stk_street.pop();
        if ((stk_direction.top() == "R") && (stk_direction.size() != 1)){
            cout << "Turn LEFT onto " << stk_street.top() << " street." << endl;
        } else if ((stk_direction.top() == "L") && (stk_direction.size() != 1)){
            cout << "Turn RIGHT onto " << stk_street.top() << " street." << endl;
        } else if ((stk_direction.top() == "R") && (stk_direction.size() == 1)){
            cout << "Turn LEFT into your HOME." << endl;
        } else if ((stk_direction.top() == "L") && (stk_direction.size() == 1)){
            cout << "Turn RIGHT into your HOME." << endl;
        }
        stk_direction.pop();
    }
    return 0;
}