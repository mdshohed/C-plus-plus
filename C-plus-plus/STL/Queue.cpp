#include <bits/stdc++.h>
using namespace std; 

int main() {

    queue<int> q;
    q.push(100);
    q.push(23);
    q.push(1);
    q.push(5);

    while( !q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0; 
}