#include <bits/stdc++.h>
using namespace std;
int main() {
    int nikky_f, nikky_b, byron_f, byron_b, steps;
    cin >> nikky_f, nikky_b, byron_f, byron_b, steps;

    int nikky_cycle = steps/(nikky_f + nikky_b);
    int Nikky_steps_taken = nikky_cycle * (nikky_f - nikky_b);
    int nikky_leftover = steps % (nikky_f + nikky_b);
    if(nikky_leftover <= nikky_f){
        Nikky_steps_taken = Nikky_steps_taken + nikky_leftover;
    }else{
        Nikky_steps_taken = (Nikky_steps_taken - nikky_f);
    }

    int Byron_cycle = steps/(byron_f + byron_b);
    int Byron_steps_taken = Byron_cycle * (byron_f - byron_b);
    int byron_leftover = steps % (byron_f + byron_b);
    if(byron_leftover <= byron_f){
        Byron_steps_taken = Byron_steps_taken + byron_leftover;
    }else{
        Byron_steps_taken = (Byron_steps_taken - byron_f);
    }

    if (Nikky_steps_taken > Byron_steps_taken){
        cout << "Nikky" << endl;
    }
    if (Byron_steps_taken > Nikky_steps_taken){
        cout << "Byron" << endl;
    }
     if ((Byron_steps_taken = Nikky_steps_taken)){
        cout << "Tied" << endl;
    }

    return 0;
} 
