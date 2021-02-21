#include <bits/stdc++.h>
using namespace std;
void define_set(){
    set<int> my_set;
    set<int> my_set1 = {3, 2, 4, 1};
    //(Data Type: int, char, string, bool, etc.)

    my_set.insert(3);
    my_set.insert(2);
    my_set.insert(1);
    my_set.insert(3);

    cout << my_set.size() << endl;
    cout << my_set1.size() << endl;
}

void iterate_set_and_delete_element(){
    set<int> my_set1 = {3, 2, 4, 1};

    for (auto item: my_set1)
        cout << item << " ";
    cout << endl;

    for (auto it = my_set1.begin(); it != my_set1.end(); it++) {
        cout << *it;
    }

    cout << endl;

    //Delete element
    my_set1.erase(1);
    for (auto item: my_set1)
        cout << item << " ";
}

void access_set_by_index(){
    set<int> my_set1 = {3, 2, 4, 1};
    auto it = my_set1.begin(); // Pointer of first element
    
    it++;   // Pointer + 1, point to next element
    cout << *it << endl;

    advance(it, 1);
    cout << *it << endl;
    advance(it, 2);
    cout << *it << endl;

}

void determine_element_in_set(){
    set<int> my_set1 = {3, 2, 4, 1};
    auto it = my_set1.find(3);
    if (it != my_set1.end()) {
        cout << &it << endl;
        cout << *it << endl;
        cout << "Found!" << endl;
    } else {
        cout << &it << endl;
        cout << *it << endl;
        cout << "Not found!" << endl;
    }
}


int main() {
    define_set();
    iterate_set_and_delete_element();
    access_set_by_index();
    determine_element_in_set();
}