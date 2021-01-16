#include <bits/stdc++.h>
using namespace std;

int side_length = 100;

void draw_square() {
    side_length = 200;
    cout << "side_length: " << side_length << endl;
    return 0;
}

int main() {
    cout << side_length << endl;
    draw_square();
    cout << side_length << endl;

    return 0;
}