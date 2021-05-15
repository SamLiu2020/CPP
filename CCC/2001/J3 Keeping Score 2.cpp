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
        // else if  == D



        if (suit == 0) // it is Clubs
            clubs.push()
            clubs_points +
        else if (suit == 1) // its Diamonds
        


        

        while (input[i] != 'D'){
            if (input[i] == 'J'){
                clubs_points += 1;
            } else if (input[i] == 'Q'){
                clubs_points += 2;
            } else if (input[i] == 'K'){
                clubs_points += 3;
            } else if (input[i] == 'A'){
                clubs_points += 4;
            } else if (input[i] == 'D'){
                break;
            }
        }
        while (input[i] != 'H'){
            if (input[i] == 'J'){
                diamonds_points += 1;
            } else if (input[i] == 'Q'){
                diamonds_points += 2;
            } else if (input[i] == 'K'){
                diamonds_points += 3;
            } else if (input[i] == 'A'){
                diamonds_points += 4;
            } else if (input[i] == 'H'){
                break;
            }
        }
        while (input[i] != 'S'){
            if (input[i] == 'J'){
                hearts_points += 1;
            } else if (input[i] == 'Q'){
                hearts_points += 2;
            } else if (input[i] == 'K'){
                hearts_points += 3;
            } else if (input[i] == 'A'){
                hearts_points += 4;
            } else if (input[i] == 'S'){
                break;
            }
        }
        while (i){
            if (input[i] == 'J'){
                spades_points += 1;
            } else if (input[i] == 'Q'){
                spades_points += 2;
            } else if (input[i] == 'K'){
                spades_points += 3;
            } else if (input[i] == 'A'){
                spades_points += 4;
            }
        }
    }

    for (int i = 0; i < int(input.size()); i++){
        if (input[i] == 'C'){
            for (int j = 0; j < int(input.size()); j++){
                if (input[j] == 'D')
                    break;
                clubs.push(input[j]);
            }
        } 
        if (input[i] == 'D'){
            for (int j = 0; j < int(input.size()); j++){
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
}