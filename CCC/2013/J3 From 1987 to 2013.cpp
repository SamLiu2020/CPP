#include <bits/stdc++.h>
using namespace std;
int counthowmanydigits(int y){
    int count = 0;
    while (y != 0) {
        y = y / 10;
        ++count;
    }
    return count;
}
int totalnumberofdistinctdigits(int y){
    int arr[10] = {0};
    int count = 0;
    
    while (y) {
        int r = y % 10;
        arr[r] = 1;
        y /= 10;
    }

    for (int i = 0; i < 10; i++){
        if (arr[i])
            count++;
    }
    return count;
}
int nextdistinctnumber(int y){
    while (y < INT_MAX) {
        int distinct_digits = totalnumberofdistinctdigits(y+1);
        int total_digits = counthowmanydigits(y+1);
 
        if (distinct_digits == total_digits) {
            return y+1;
        } else
            y++;
    }
}
int main(){
    int y;
    cin >> y;
    cout << nextdistinctnumber(y) << endl;
}
