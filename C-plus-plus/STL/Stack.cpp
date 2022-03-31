
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
    return 0;
}
