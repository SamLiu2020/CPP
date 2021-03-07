#include <bits/stdc++.h>
using namespace std;
void declare_map_and_access(){
    map <string, int> my_map = {
        {"Sam", 13},
        {"Person", 15},
        {"Person 2", 78}
    };

    cout << my_map["Sam"] << endl;

    for (auto &item : my_map) {
        cout << item.first << " " << item.second << endl; 
    }
}
void map_operations(){
    map <string, int> my_map = {
        {"Sam", 13},
        {"Person", 15},
        {"Person 2", 78}
    };

    // Add
    my_map["D"] = '8';

    // Update
    my_map["Person"] = '9';

    // Delete
    my_map.erase("Person 2");
    // Invalid key will return empty

    // Determine if the "key" exist
    if (my_map.count("G") > 0){              // The result my_map.count("G") is 1
        cout << "my_map['G'] has value." << endl;
    } else {
        cout << "my_map['G'] has no value." << endl;
    }
}
void determine_key_exist_in_map(){
    map <string, int> my_map = {
        {"Sam", 13},
        {"Person", 15},
        {"Person 2", 78}
    };

    int has_key = my_map.count('2'); // 1

    //if (has_key > 0) {
    if (my_map.count('2') > 0){
        cout << "Key has value." << endl;
    } else {
        cout << "key doesn't exist!" << endl;
    }
    
}

int main() {
    declare_map_and_access();
    map_operations();
    determine_key_exist_in_map();
    return 0;
}