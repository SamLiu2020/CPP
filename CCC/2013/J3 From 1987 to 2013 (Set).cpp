#include <bits/stdc++.h>
using namespace std;
int main(){
    int y;  
    cin >> y;
    set <int> myset;
    int counter = 1;
    for (int i = y + 1; i < INT_MAX; i++){
        int length = to_string(i).length();
        myset.clear();
        counter = 1;

        for(int n = 0; n < length; n++){
            myset.insert(i / counter % 10);
            counter = counter * 10; 
            int size = myset.size();
            if(length == size){
                cout << i << endl;
               return 0;
            }
        }  
    }  
}