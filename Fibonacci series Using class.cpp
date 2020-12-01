#include <bits/stdc++.h>
using namespace std;

class Fibonacci{
public:
    int a, b, c;
    void generated(int);
};

void Fibonacci::generated(int n) {
    a = 0, b = 1;
    cout << a << " " << b ;
    for ( int i = 1; i<n-2; i++) {
        c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
}
int main() {
    Fibonacci fibonacci;
    int x;
    cin >> x;
    fibonacci.generated(x);
    return 0;
}
