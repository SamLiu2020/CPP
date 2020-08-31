#include <bits/stdc++.h>
using namespace std;

void sayhello () {
    cout << "Hello" << endl;
}
int main() {
    sayhello();
    sayhello();

    return 0;
}


void my_function (string name, int age){ 
    cout << "Name: " << name << " Age: " << age << endl;
}
int main() {
    my_function ("Sam", 12);
    my_function ("Someone else", 58);
    return 0;
}

string my_function (string name, int age){ 
    cout << "Name: " << name << " Age: " << age << endl;
    return "Sam";
} 
int main() {
    my_function("Sam", 12);
    my_function("Someone else", 58);
    return 0;
}



