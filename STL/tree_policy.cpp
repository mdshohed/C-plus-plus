#include <bits/stdc++.h>
using namespace std; 

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

// template<typename T> using ordered_set =  tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int main(){
    // ordered_set<array<int,2>> v;
    // v.insert({1,100}); 
    // v.insert({3,200});
    // v.insert({2,4}); 
    // for(auto i: v) cout<< i[0] << " " << i[1] << endl;
    
    ordered_set a; 
    a.insert(2); 
    a.insert(4); 
    a.insert(10);
    int pos = *a.find_by_order(2); // 10 
    cout << (end(a)==a.find_by_order(2)) << endl; //true    
    cout << (end(a)==a.find_by_order(12)) << endl; //false    
    cout << a.order_of_key(10) << endl;  // Give value Position in range 0 to n-1
    cout << a.order_of_key(40) << endl;  // Out of range  
    return 0;
}

