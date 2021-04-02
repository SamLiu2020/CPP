#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << endl;
    cout << "Hello, this is a karaoke system. Please enter your songs to create a playlist. To end your input, type 'end'" << endl;
    queue <string> playlist;
    string songs;
    while (songs != "end"){
        cin >> songs;
        playlist.push(songs);
    }
    cout << endl;
    cout << "Here is your playlist:" << endl;
    while(!playlist.empty()){
        cout << playlist.front() << endl;
        playlist.pop();
    }
    return 0;
}