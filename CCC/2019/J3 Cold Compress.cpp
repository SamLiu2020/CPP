#include <bits/stdc++.h>
using namespace std;
int main() {
    int lines, counter = 0;
    cin >> lines;
    
    for (int i = 0; i < lines; i++){
        string characters;
        cin >> characters;

        
        for (int i = 0; i < int(characters.size()); i++){
            if (characters[i] == characters[i+1]){
                counter++;
            }
        }
    } 
}