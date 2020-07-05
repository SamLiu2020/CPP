#include <bits/stdc++.h> 

using namespace std;

int main() {
    cout << endl;
    int num = 10278;
    cout << "number = " << num << endl << endl;
    
    int last_digit = num%10;
    int fourth_digit = num/10%10;
    int third_digit = num/10/10%10;
    int second_digit = num/10/10/10%10;
    int first_digit = num/10/10/10/10%10;

    cout << "last digit = " << last_digit << endl;
    cout << "fourth digit = " << fourth_digit << endl;
    cout << "third digit = " << third_digit << endl;
    cout << "second digit = " << second_digit << endl;
    cout << "first digit = " << first_digit << endl << endl;

    int sum_of_all_digits = first_digit + second_digit + third_digit + fourth_digit + last_digit;
    cout << "sum of all digits = " << sum_of_all_digits << endl;
    int divide = sum_of_all_digits/9;
    cout << "sum of all digits divided by 9 = " << divide << endl;
    
    // If sum of all digits can not be divided by 9, use boolean and false, cout << "result = " << false or cannot be divided by 9
    // If sum of all digits can be divided by 9, use boolean and if true, cout << "result = " << true or can be divided by 9

}