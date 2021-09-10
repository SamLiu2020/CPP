#include <bits/stdc++.h>
using namespace std;
void convert_decimal_to_binary(){
    int x;
    cin >> x;
    cout << bitset<12>(x) << endl;
}
void convert_bitset_to_string(){
    int x;
    cin >> x;
    string binary_str = bitset<8>(x).to_string();
    cout << binary_str << endl;
    cout << binary_str[7] << endl; //ACCESS THE VALUE FROM THE STRING
}
void declare_biset_and_ouput(){
    bitset <8> bits("00000000"); 
    // bitset <8> bits(0); //Both lines work
    cout << bits << endl;
}
void access_and_iterate_bitset(){
    int x;
    cin >> x;

    cout << bitset<8>(x) [3] << endl;
    cout << bitset<16>(x) [0] << endl;

    for (int i=0; i < 8; i++){
        cout << bitset<8>(x)[i];
    }
}
void left_shift(){
    int a = 5; 
    cout << "a = 5, in Binary: " << bitset<8>(a) << endl;

    cout << "a << 1 = " << bitset<8>(a<<1) << endl; // What is the value after left shift?
    cout << "a << 2 = " << bitset<8>(a<<2) << endl; // What is the value after left shift?
}
void right_shift(){
    int a = 5; 
    cout << "a = 5, in Binary: " << bitset<8>(a) << endl;

    cout << "a >> 1 = " << bitset<8>(a>>1) << endl; // What is the value after left shift?
    cout << "a >> 2 = " << bitset<8>(a>>2) << endl; // What is the value after left shift?
}

int main() {
    convert_decimal_to_binary();
    convert_bitset_to_string();
    declare_biset_and_ouput();
    access_and_iterate_bitset();
    left_shift();
    right_shift();

    // bitset <16> bits_1 ("00000000");
    // cout << sizeof(bits_1) << endl;
    // bits_1.set(28,1);
    // cout << sizeof(bits_1) << endl;
    // bitset <8> bits_2 (2);
    
    // biset <8> bits("11111111")
    
    // bitset <8> bits("00000000");
    // cout << "bits: " << bits << endl; 

    // bits.set(7, 1); // 0000 0000 -> 0000 0001
    // cout << "bits: " << bits << endl;

    // bits.reset(0); //0000 0000 -> 0000 0000

    // bitset <8> bits_1 ("00000001");
    // bitset <8> bits_2 ("10000001");
    // bitset <8? bits_result;
    // bits_result = bits_1 & bits_2;
    // cout << "bits_result: " << bits_result << endl;
    // bits_result = bits_1 | bits_2;
    // cout << "bits_result: " << bits_result << endl;
    return 0;
}