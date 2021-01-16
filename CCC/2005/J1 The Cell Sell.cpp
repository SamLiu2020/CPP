#include <bits/stdc++.h>
using namespace std;
int main() {
    int daytime, evening, weekend;
    cin >> daytime >> evening >> weekend;

    float daytime_total_a = -100*0.25+0.25*daytime;
    if(daytime_total_a < 0){
        daytime_total_a = 0;
    }
    float evening_total_a = 0.15*evening;
    float weekend_total_a = 0.20*weekend;
    float daytime_total_b = -250*0.45+0.45*daytime;
    if(daytime_total_b < 0){
        daytime_total_b = 0;
    }
    float evening_total_b = 0.35*evening;
    float weekend_total_b = 0.25*weekend;

    float grandtotal_a = daytime_total_a + evening_total_a + weekend_total_a;
    float grandtotal_b = daytime_total_b + evening_total_b + weekend_total_b;

    if (grandtotal_a == grandtotal_b){
        cout << "Plan A costs " << grandtotal_a << endl;
        cout << "Plan B costs " << grandtotal_b << endl;
        cout << "Plan A and B are the same price." << endl;
    }
    if (grandtotal_a > grandtotal_b){
        cout << "Plan A costs " << grandtotal_a << endl;
        cout << "Plan B costs " << grandtotal_b << endl;
        cout << "Plan B is cheapest." << endl;
    }
    if (grandtotal_a < grandtotal_b){
        cout << "Plan A costs " << grandtotal_a << endl;
        cout << "Plan B costs " << grandtotal_b << endl;
        cout << "Plan A is cheapest." << endl;
    }

    return 0;
}