#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int occupied_yesterday_and_today = 0;
    string yesterday, today;
    cin >> n >> yesterday >> today; 
    for (int i = 0; i<=n; i++){
        if(yesterday[i] == 'C' && today[i] == 'C')
        occupied_yesterday_and_today++;
    }
    cout << occupied_yesterday_and_today << endl;
}