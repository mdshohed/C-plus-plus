/**
    problem: ...
    algorithm: STL vector 
*/

#include <bits/stdc++.h> 
using namespace std; 

int main() {
    
    int n; 
    cin >> n; 
    
    // 1D array 
    vector<int> v;                    // vector declare
    vector<int> v(n);                // vector declare total n with 0 
    vector<int> v(n,5);             // vector declare total n with 5 
    vector<pair<int,int>> v(n);     // first and second value vector declare 
    v.push_back(2);                 // value insert  
    v.clear(); 
    v.size();                       // vector size
    
    
    // 2D vector 
    vector<vector<int>> v_2;      
    vector<int> v_2[100];                    // another way 2D vector declare 
    vector<int> v_2(n,vector<int>(n.1));    
    v_2[1].push_back(5);   
                     // value insert 
    for (int i = 0; i<v_2.size(); i++){         // value clear 
        v_2[i].clear();  
    }
            
    return 0; 
}
