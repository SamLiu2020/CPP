#include <bits/stdc++.h>
using namespace std;
int main() {
    int c, length, width;

    while (cin >> c) {
        if (c == 0)
            break;
        length = sqrt(c);
        width = c/length;

        while (length * width != c) {
            length = length - 1;
            width = c/length;
        }
        cout << "Minimum perimeter is " << length * width << " with dimensions " << length << ' x ' << width << endl;
    }
        

    return 0;
}