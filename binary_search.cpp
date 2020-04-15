#include "bits/stdc++.h"
using namespace std;

int main() {
    int m;
    cin >> m;
    vector<int> v(m);
    for (int i = 0; i<m; i++) {
        cin >> v[i];
    }

    int k = 0;
    int x  = 5;
    for ( int b = m/2; b >=1; b/=2) {
        if (  k*b < m && v[ k + b] <=x) {
            k+=b;
        }
    }
    if( v[k] == x) cout << "yes" << '\n';
    else cout << "no" << '\n';

    return 0;
}
