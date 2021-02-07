#include <bits/stdc++.h> //YOU ALAWAYS LOSE HAHAHA
using namespace std;
int main() {
    string input;
    string computer[3] = {"Rock", "Paper", "Scisscors"};
    cin >> input;
    int randnum; 
    randnum = rand()%3;
    if (computer[randnum] == "Rock", input == "Scissor"){
        cout << "Computer chose Rock" << endl;
        cout << "You Lost" << endl;
    } else if (computer[randnum] == "Scissor", input == "Paper"){
        cout << "Computer chose Scissor" << endl;
        cout << "You Lost" << endl;
    } else if (computer[randnum] == "Paper", input == "Rock"){
        cout << "Computer chose paper" << endl;
        cout << "You Lost" << endl;
    }
}