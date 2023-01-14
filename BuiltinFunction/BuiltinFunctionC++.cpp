#include <bits/stdc++.h>
using namespace std; 

int main() {
	std::vector<int> v = {3, 4, 5, 8, 25, 5, -4, 5};
	std::vector<int> a(v.size());
	iota(a.begin(), a.end(),0);
	sort(all(a),[&](int x, int y){
            	return v[x] < v[y];
    	});
	// present value print 0-index value, otherwise print nth value.thats means not present that value
	int lower = lower_bound(v.begin(),v.end(), 3) - v.begin(); 
	int upper = upper_bound(v.begin(),v.end(), 3) - v.begin();
	int a = 16, b = 15; 
	string s = "1234";

	string x = to_string(b);    // integer to string convert
	int val = stoi(s);  		// string to integer convert
	int Gcd = __gcd(a,b); 		// Euclidean Algorithm for a gcd function
	int Number_of_1_bit = __builtin_popcount(a);  // 15 binary = 1111 = 4 
	int Number_of_1_bit_long = __builtin_popcountll(a);  // 15 binary = 1111 = 4
	int least_significant_1_bit = __builtin_ffs(a); 	// from right first 1 bit
	int most_significant_bit_position = __builtin_clz(a); // 32 bit - a(binary) = ?
	
	int mx = *max_element(v.begin()+3, v.end()); 	// maximum element
	int mn = *min_element(v.begin(), v.end());  	// minimum element	
	int sum = accumulate(v.begin(), v.end(), 0); 	// array sum
	int cnt = count(v.begin(), v.end(), 5);		  // value count
	int element = *find(v.begin(),v.end(), 7); 
	auto it = find(v.begin(),v.end(), 7); 	// element find
	if (it!=v.end()) cout << *it << endl; 
	else cout << "Not found" << endl; 
	reverse(v.begin(), v.end());  // vector reverse 

	int AllOfPositiveOrNegative = all_of(v.begin(), v.end(),[](int x){
		return x>0; 
	});   // All of value is positive in the array then the ans is true
	int AnyOfPositiveOrNegative = any_of(v.begin(), v.end(),[](int x){
		return x>0; 
	});		// Any of value is positive in the array then the ans is true 
	int noneOfValuePositiveorNot = none_of(v.begin(), v.end(),[](int x){
		return x>0; 
	});  // none of value positive in the array then the ans is true
	int All_value_evenORnot = all_of(v.begin(), v.end(),[](int x){
		return x%2==0; 
	});
	cout << All_value_evenORnot << endl; 

	std::vector<pair<int,int>> a = {{1,2},{2, 4},{5,3},{6,4},{12,3}};
    sort(all(a),[&](auto a, auto b){
        if( a.second==b.second) return a<b;
        else return a.second < b.second;  
    });
    for(auto i: a) cout << i.first << " " << i.second << endl; 
    cout << endl;
	return 0;
}
