#include <bits/stdc++.h>
using namespace std;
int main() {
    string input;
    cin >> input;
    queue <char> clubs, diamonds, hearts, spades;
    int x;

    for (int i = 0; i < int(input.size()); i++){
        if (input[i] == 'C'){
            for (int j = 0; j < int(input.size()); j++){
                if (input[j] == 'D')
                    break;
                clubs.push(input[j]);
            }
        } 
        if (input[i] == 'D'){
            for (int j = 0; j < ; j++){
                if (input[j] == 'H')
                    break;
                diamonds.push(input[j]);
            }
        }
        if (input[i] == 'H'){
            for (int j = 0; j < int(input.size()); j++){
                if (input[j] == 'S')
                    break;
                hearts.push(input[j]);
            }
        } 
        if (input[i] == 'S'){
            while (int(input.size())){
                for (int j = 0; j < int(input.size()); j++)
                    spades.push(input[j]);
                break;
            }
        } 
    }

    clubs.pop();
    diamonds.pop();
    hearts.pop();
    spades.pop();


    cout << "Cards Dealt" << "                   " << "Points" << endl;
    cout << "Clubs" << " ";
    while(!clubs.empty()){
        cout << clubs.front() << " ";
        clubs.pop();
    }
    cout << endl;
    cout << "Diamonds" << " ";
    while(!diamonds.empty()){
        cout << diamonds.front() << " ";
        diamonds.pop();
    }
    cout << endl;
    cout << "Hearts" << " ";
    while(!hearts.empty()){
        cout << hearts.front() << " ";
        hearts.pop();
    }
    cout << endl;
    cout << "Spades" << " ";
    while(!spades.empty()){
        cout << spades.front() << " ";
        spades.pop();
    }
    cout << endl;
}