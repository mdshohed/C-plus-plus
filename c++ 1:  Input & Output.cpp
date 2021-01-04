#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Integer value Input: ";
    cin >> n;
    cout << "Output value: " << n << endl;

    double d;
    cout << "Double value Input: ";
    cin >> d;
    cout <<fixed<<setprecision(5) << "Output value: " << d << endl;

    string s;
    cout << "String input: ";
    cin >> s;
    cout << "String output: " << s << endl;


    int x;
    cin >> x;
    getchar();
    while ( x--) {
        string s;
        getline(cin,s);
        cout << s << endl;
    }
    return 0;
}
