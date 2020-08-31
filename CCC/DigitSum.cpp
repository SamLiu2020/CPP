#include <bits/stdc++.h>
using namespace std;
int main() {
    int input;
    cin >> input;
    
    for(int a = 0; a < input; a++)
        for(int j = 0; j < input; j++)
            for(int b = 0; b < input; b++) 
                for(int c = 0; c < input; c++)
                    for (int d = 0; d < input; d++)
                        if (input == a + b + j + c + d)
                            cout << a << b << j << c << d << endl;
    
   return 0;
}