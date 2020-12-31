#include <bits/stdc++.h>
using namespace std;

class A;
class B {
    int x;
public:
    void get(int n) {
        x = n;
    }
    void print() {
        cout << x << endl;
    }
    friend void add( A, B);
};

class A {
    int x;
public:
    void  get(int n) {
        x = n;
    }
    void print() {
        cout << x << endl;
    }
    friend void add(A,B);
};

void add( A ob1, B ob2 ) {
    cout << ob1.x + ob2.x << endl;
}

int main() {
    A a;
    B b;
    a.get(100);
    b.get(50);
    a.print();
    b.print();
    add(a,b);
}
