#include <bits/stdc++.h>
using namespace std;
int main() {
    int p, n, r;
    cin >> p >> n >> r;

    int day = 0;
    int infected_people = n;
    int infected_next_day = n;
    while(infected_people <= p){
        infected_next_day *= r;
        infected_people += infected_next_day;
        day++;
    }
    cout << day;
    return 0;
}