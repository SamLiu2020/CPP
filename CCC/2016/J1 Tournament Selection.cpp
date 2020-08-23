#include <bits/stdc++.h>
using namespace std;
int main() {
    char a,b,c,d,e,f;
    int total;
    cin >> a >> b >> c >> d >> e >> f;

    if (a == 'W') {
        a = int(1);
    } else if (a == 'L') {
        a = int(0);
    }

    if (b == 'W') {
        b = int(1);
    } else if (b == 'L') {
        b = int(0);
    }

    if (c == 'W') {
        c = int(1);
    } else if (c == 'L') {
        c = int(0);
    }

    if (d == 'W') {
        d = int(1);
    } else if (d == 'L') {
        d = int(0);
    }

    if (e == 'W') {
        e = int(1);
    } else if (e == 'L') {
        e = int(0);
    }

    if (f == 'W') {
        f = int(1);
    } else if (f == 'L') {
        f = int(0);
    }

    total = a + b + c + d + e + f;
    
    if (total == 0 ) {
        cout << "-1" << endl;
    } else if (total >= 5 && total <= 6) {
        cout << '1' << endl;
    } else if (total >= 3 && total <= 4) {
        cout << '2' << endl;
    } else if (total >= 1 && total <= 2) {
        cout << '3' << endl;
    }
    return 0;
}
