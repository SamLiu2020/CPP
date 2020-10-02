#include <bits/stdc++.h>
using namespace std;
int main() {
    // char str_1[6] = {'h', 'e', 'l', 'l', 'o', '\n'};
    // char str_2[5] = {'h', 'e', 'l', 'l', 'o'};

    // cout << str_1 << endl;
    // cout << str_2 << endl;

    // string mystring = "HELLO!";
    // cout << mystring[0] << endl;

    // cout << mystring.length() << " " << mystring[0] << endl;
    
    // string greeting = "Hello World!\nHello World!\n";

    // greeting = greeting + "Adding string.";
    // cout << "After Combinie String: " << greeting << endl;
    // cout << greeting << endl;


    // str = str.insert(5, " Insertion");
    // cout << "After insert: " << str << endl;

    void replace_string() {
        cout << "Replace String: " << endl;

        string str = "Hello World!";
        str = str.replace(2,2, "oo");
        cout << str << endl;

        str.replace(str.begin(), str,end()-3, "Replace");
        cout << "After replace: " << str << endl;
    }
    void  find_substring_in_a_string() {
        size_t found_idx = str.find ("Hello");
        if (found idx == string : :npos)
        cout << "Not Found!" << endl;
        else 
        cout << "Found at: " << found_idx << endl;
    }
    return 0;
}