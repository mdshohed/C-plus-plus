
#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    st.push(100);
    st.push(23);
    st.push(1);
    st.push(5);

    while ( !st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

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
