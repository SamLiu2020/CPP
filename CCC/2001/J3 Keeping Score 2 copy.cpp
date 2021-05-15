#include <bits/stdc++.h>
using namespace std;
int main() {
    string input;
    cin >> input;
    int clubs_points = 0, diamonds_points = 0, hearts_points = 0, spades_points = 0, suit;
    queue <char> clubs, diamonds, hearts, spades;
    // int suit: 1: Club, 2: Diamond, 3: Harts, 4, Spacde
    // chat  suit: 'C': Club, 'D': Diamond, 'H': Harts, 'S', Spacde

    
    for (int i = 0; i < int(input.size()); i++) {
        if (input[i] == 'C')
            suit = 0;
        if (input[i] == 'D')
            suit = 1;
        if (input[i] == 'H')
            suit = 2;
        if (input[i] == 'S')
            suit = 3;
    
        if (input[i] != 'C') {
            if (suit == 0){
                clubs.push(input[i]);
                if (input[i] == 'J')
                    clubs_points += 1;
                if (input[i] == 'Q')
                    clubs_points += 2;
                if (input[i] == 'K')
                    clubs_points += 3;
                if (input[i] == 'A')
                    clubs_points += 4;
            }
        } 
        if (input[i] != 'D') {
            if (suit == 1){ 
                diamonds.push(input[i]);
                if (input[i] == 'J')
                    diamonds_points += 1;
                if (input[i] == 'Q')
                    diamonds_points += 2;
                if (input[i] == 'K')
                    diamonds_points += 3;
                if (input[i] == 'A')
                    diamonds_points += 4;
            }
        } 
        if (input[i] != 'H') {
            if (suit == 2){ 
                hearts.push(input[i]);
                if (input[i] == 'J')
                    hearts_points += 1;
                if (input[i] == 'Q')
                    hearts_points += 2;
                if (input[i] == 'K')
                    hearts_points += 3;
                if (input[i] == 'A')
                    hearts_points += 4;
            } 
        }
        if (input[i] != 'S') {
            if (suit == 3){ 
                spades.push(input[i]);
                if (input[i] == 'J')
                    spades_points += 1;
                if (input[i] == 'Q')
                    spades_points += 2;
                if (input[i] == 'K')
                    spades_points += 3;
                if (input[i] == 'A')
                    spades_points += 4;
            }
        }
    }
    cout << "Cards Dealt " << "Points" << endl;
    cout << "Clubs ";
    while(!clubs.empty()){
        cout << clubs.front() << " ";
        clubs.pop();
    }
    cout << clubs_points << endl;
    cout << "Diamonds ";
    while(!diamonds.empty()){
        cout << diamonds.front() << " ";
        diamonds.pop();
    }
    cout << diamonds_points << endl;
    cout << "Hearts ";
    while(!hearts.empty()){
        cout << hearts.front() << " ";
        hearts.pop();
    }
    cout << hearts_points << endl;
    cout << "Spades ";
    while(!spades.empty()){
        cout << spades.front() << " ";
        spades.pop();
    }
    cout << spades_points << endl;
    cout << "Total " << clubs_points+diamonds_points+hearts_points+spades_points << endl;
}