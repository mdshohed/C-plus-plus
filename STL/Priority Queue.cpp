#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> pq;   /// max heap
    pq.push(100);
    pq.push(23);
    pq.push(1);
    pq.push(5);

    while ( !pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;


    priority_queue<int,vector<int>,greater<int>> min_pq;   /// min heap
    min_pq.push(100);
    min_pq.push(23);
    min_pq.push(1);
    min_pq.push(5);

    while ( !min_pq.empty()) {
        cout << min_pq.top() << " ";
        min_pq.pop();
    }
    cout << endl;
    return 0;
}
