/// selection sort....

#include <bits/stdc++.h>
using namespace std;

int selection_sort( int ara[], int n)
{
    int i,j,t,index;
    for ( i = 0; i<n-1; i++) {
        index = i;
        for ( j = i+1; j<n; j++) {
            if ( ara[j] >ara[index]) {
                index = j;
            }
        }
        
        if (index != i) {
            t = ara[i];
            ara[i] = ara[index];
            ara[index] = t;
        }
    }
}

int main()
{
    int i,n,ara[100];
    cin>>n;
    for ( i = 0; i<n; i++) cin>>ara[i];
    
    selection_sort( ara,n);
    
    for ( i = 0; i<n; i++) {
        cout<<ara[i];
    }
    
    return 0;
}


/// bubble_sort....

#include <bits/stdc++.h>
using namespace std;

void bubble_sort( int ara[], int n)
{
    int i,j,t,index;
    for ( i = 0; i<n-1; i++) {
        for ( j = 0; j<n-i-1; j++) {
            if ( ara[j] > ara[j+1]) {
                t = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = t;
            }
        }
    }
}

int main()
{
    int i,j,n,ara[100];
    cin>>n;
    for ( i = 0; i<n; i++) {
       cin>>ara[i];
    }
    bubble_sort(ara,n);
    for ( i = 0; i<n; i++) {
        cout<<ara[i]<<" ";
    }
    return 0;
}
