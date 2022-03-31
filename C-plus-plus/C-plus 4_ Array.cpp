#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    // 1D Array...
    int ara[100];
    for (int i = 0; i<n; i++) {
        cin >> ara[i];
    }
    for (int i = 0; i<n; i++ ) {
        cout << ara[i] << " ";
    }
    cout << endl;


    // 2D Array...
    int ara2[100][100];
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++ ) {
            cin >> ara2[i][j];
        }
    }

    for (int i = 0; i<n; i++ ) {
        for (int j = 0; j<n; j++ ) {
            cout << ara2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}




