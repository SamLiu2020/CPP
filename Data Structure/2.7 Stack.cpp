#include <bits/stdc++.h>
using namespace std;
void stack_for_loop(){
    stack <int> stk;
    
    for (int i = 1; i <= 5; i++)
        stk.push(i);
    cout << stk.size() << endl;
    stk.push(6);
    cout << stk.top() << endl;
    stk.pop();
}
void stack_while_loop(){
    stack <int> stk;
    
    for (int i = 1; i <= 5; i++)
        stk.push(i);
    while(!stk.empty()) {
        cout << stk.top() << endl;
        stk.pop();
    }
    
}
void stack_empty_for_loop(){
    stack <int> stk;
    
    for (int i = 1; i <= 5; i++)
        stk.push(i);
    for (int i = 1; i <= 5; i++) {
        cout << stk.top() << endl;
        stk.pop();
    }

}


int main() {
    stack_for_loop();
    stack_empty_while_loop();
    stack_empty_for_loop();

    return 0;
}