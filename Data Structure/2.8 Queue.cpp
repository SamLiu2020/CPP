#include <bits/stdc++.h>
using namespace std;

void declare_and_access_queue(){
    queue <int> q;

    for (int i = 0; i < 5; i++)
        q.push(i);
    
    cout << q.size() << endl;

    cout << q.front() << endl;
    cout << q.back() << endl;
    
    q.pop();
}

void queue_operations(){
    queue <int> q;

    for (int i = 0; i < 5; i++)
        q.push(i);
    
    q.push(6);
    q.push(9);
    q.pop();

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }

}

void priority_queue_operations(){
    priority_queue <int> pq;

    pq.push(2);
    pq.push(9);
    pq.push(6);
    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }
}

int main() {
    // declare_and_access_queue();
    // queue_operations();
    priority_queue_operations();

    return 0;
}