#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin >> num;

    if (num > 100) { 
        do {
            cout << "Please Enter Number Less Than or Equal to 100" << endl;
            cin >> num;
            if (num <= 100) 
                for (int i = 1; i < num; i++)
                    for (int j = i+1; j < num; j++)
                        for (int k = j+1; k < num; k++)
                            if (i+j+k == num)
                                cout << i << ' ' << j << ' ' << k << endl;
        } while (num > 100);
            
    } else if (num <= 100) {
        for (int i = 1; i < num; i++)
            for (int j = i+1; j < num; j++)
                for (int k = j+1; k < num; k++)
                    if (i+j+k == num)
                        cout << i << ' ' << j << ' ' << k << endl;
    }
    return 0;
}