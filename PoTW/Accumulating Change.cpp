#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << endl;

    int quantityofcoins = 56/7*15;
    float toonies = 0.56*100;
    float loonies = 0.2*120;
    float quarters = 0.3333333*120;
    int total = toonies+loonies+quarters;
    
    cout << "1-1/3-1/5 = 15/15-5/15-3/15 = 7/15" << endl;
    cout << "56/7 = 8, 8x15 = 120" << endl;
    cout << "number of coins = " << quantityofcoins << endl << endl;
    cout << "Toonies = " << toonies << endl; 
    cout << "Loonies = " << loonies << endl; 
    cout << "Quarters = " << quarters << endl; 

    cout << "Total Number of Coins = " << total << endl << endl;

    int valuetoonies = toonies*2;
    int valueloonies = loonies*1;
    float valuequarters = quarters*0.25;

    cout << "Value of Toonies = " << valuetoonies << endl;
    cout << "Value of Loonies = " << valueloonies << endl;
    cout << "Value of Quarters = " << valuequarters << endl;

    int totalvalue = valueloonies+valuetoonies+valuequarters;
    cout << "Total Value = " << totalvalue << endl;
    
}
