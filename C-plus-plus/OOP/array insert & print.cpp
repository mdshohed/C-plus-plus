/* 
 *  20 July 2020
 *  array insert using template and pointer
 */
#include <bits/stdc++.h>
using namespace std;

template<typename T>
class Array{
private:
    T *ptr;
    int size;
public:
    Array(T ara[], int n);
    void print();
};

template<typename T>
Array<T>::Array(T ara[],int n) {
    ptr = new T[n];
    size = n;
    for (int i = 0; i<size; i++){
        ptr[i] = ara[i];
    }
}
template<typename T>
void Array<T>::print(){
    for (int i = 0; i<size; i++) {
        cout << *(ptr+i) << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int ara[100];
    for (int i = 0; i<n; i++){
        cin >> ara[i];
    }
    Array<int> a(ara,n);
    a.print();
    return 0;
}
