#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin >> num;

    if (num > 100) { 
        cout << "Please Enter Number Equal To Or Smaller than 100" << endl;
    } else if (num <= 100) 
    for (int i = 1; i < num; i++)
        for (int j = i+1; j < num; j++)
            for (int k = j+1; k < num; k++)
                if (i+j+k == num)
                    cout << i << ' ' << j << ' ' << k << endl;
    return 0;
}