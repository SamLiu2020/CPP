#include <bits/stdc++.h>
using namespace std;
int main() {
    // bitset <8> bits_1 ("00000000");
    // cout << bits_1 << endl;
    // bitset <8> bits_2 (2);
    
    // biset <8> bits("11111111")
    
    bitset <8> bits("00000000");
    cout << "bits: " << bits << endl; 

    bits.set(7, 1); // 0000 0000 -> 0000 0001
    cout << "bits: " << bits << endl;

    bits.reset(0); //0000 0000 -> 0000 0000

    int x = 5;
    cout << bitset<8>(x) << endl;
    string binary_str = bitset<8>(x).to_string();
    cout << "bits string: " << binary_str << endl;
    
    
    bitset <8> bits_1 ("00000001");
    bitset <8> bits_2 ("10000001");
    bitset <8? bits_result;
    bits_result = bits_1 & bits_2;
    cout << "bits_result: " << bits_result << endl;
    bits_result = bits_1 | bits_2;
    cout << "bits_result: " << bits_result << endl;
    return 0;
}