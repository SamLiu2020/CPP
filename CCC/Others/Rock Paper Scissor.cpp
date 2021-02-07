#include <bits/stdc++.h>
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
    } else if (computer[randnum] == "Rock", input == "Rock"){
        cout << "Computer chose rock" << endl;
        cout << "You Tied" << endl;
    } else if (computer[randnum] == "Rock", input == "Paper"){
        cout << "Computer chose rock" << endl;
        cout << "You Won" << endl;
    } else if (computer[randnum] == "Paper", input == "Rock"){
        cout << "Computer chose paper" << endl;
        cout << "You Lost" << endl;
    } else if (computer[randnum] == "Paper", input == "Paper"){
        cout << "Computer chose paper" << endl;
        cout << "You Tied" << endl;
    } else if (computer[randnum] == "Scissor", input == "Rock"){
        cout << "Computer chose Scissor" << endl;
        cout << "You Won" << endl;
    } else if (computer[randnum] == "Scissor", input == "Scissor"){
        cout << "Computer chose Scissor" << endl;
        cout << "You Tied" << endl;
    } else if (computer[randnum] == "Scissor", input == "Paper"){
        cout << "Computer chose Scissor" << endl;
        cout << "You Lost" << endl;
    }

    return 0;
}

