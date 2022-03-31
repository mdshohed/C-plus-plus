#include<bits/stdc++.h>
using namespace std;


void fun() {
    int a = 10;
    int b = 30 ;
    cout << a+b << endl;
}

int fun2(int ara[], int n ) {
    int sum = 0;
    for (int i = 0; i<n; i++) {
        sum += ara[i];
    }
    return sum;
}


int fun3(int ara[5][3], int n) {
    int sum = 0;
    for (int i = 0; i<n; i++ ) {
        for (int j = 0; j<n; j++) {
            sum +=ara[i][j];
        }
    }
    return sum;
}

vector<int> vector_fun(vector<int> v) {
    int n = v.size();
    for (int i = 0; i<n; i++ ) {
        v[i] +=5;
    }
    return v;
}

int main() {

    fun();

    int n = 5;
    int ara[5] = {10, 23, 2,4,6};
    int sum = fun2(ara, n);
    cout << sum << endl;

    int ara2[7][3] = { {1,2,3}, {2,3, 4}, {3,4, 5},{4,5, 6}, {5,6,7} };
    int sum2 = fun3( ara2, n);
    cout << sum2 << endl;

    vector<int> v = {1,2,3,4,5};

    vector<int> v2 = vector_fun(v);
    for (int i = 0; i<v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;
}




