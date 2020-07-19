#include <bits/stdc++.h>
using namespace std;
int main() {
    int i = 5;

    int *ptr = &i;
    cout << ptr << endl;
    cout << *ptr << endl;

    int &ref = i;
    cout << ref << endl;
    cout << &ref << endl;
    cout << &i << endl;

}