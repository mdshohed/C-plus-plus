#include <bits/stdc++.h>
using namespace std;

int main() {
    time_t t;
    time (&t);
    cout << asctime(localtime(&t)) << endl;
    return 0;
}
