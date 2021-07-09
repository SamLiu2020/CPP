#include <bits/stdc++.h>
using namespace std;
int main() {
    string input, output;
    float time_including_traffic = 0, time_out_of_traffic = 0, total_time = 0;
    cin >> input;
    if ((input[1] == '7') || (input[1] == '8') || (input[1] == '9'))
        time_including_traffic = (int)input[1] + 4 - 48;
        time_out_of_traffic = (time_including_traffic - 10) / 2;
        total_time = time_including_traffic - time_out_of_traffic;
    // } else if (input[0] == '1'){
        
    // } else 
    cout << total_time << endl;
}