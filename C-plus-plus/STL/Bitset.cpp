/**
    problem: ...
    algorithm: bitset implementation
*/

#include<iostream>
#include<bitset>
using namespace std;

int main(){
    bitset<8> b(100);
    bitset<8>  c(50);
    c = b;
    ///  b.set();
    /// b.reset();
    /// b.flip(); bit value 1 to 0 , 0 to 1
    /// b.size();
    /// b.cout(); how to have 1 of b bitset
    /// b.any(); at east if have 1 bit then you will true
    /// b.none() all bit if have 0 bit then you will true
    /// b.set(2);
    cout << b << endl;
    cout << c << endl;
    cout << ( b|c) << endl;

    return 0;
}

