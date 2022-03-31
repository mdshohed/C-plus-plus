#include <bits/stdc++.h>
using namespace std;

int main() {
	
	set<int> st; 
	st.insert(23);  
	st.insert(23);  
	st.insert(2);  
	st.insert(3);  
	st.insert(2);  
	st.insert(3);  
	st.insert(4);  	
	for(int i: st) {
		cout << i << " "; 
	}
	cout << endl; 

	auto it = st.begin(); 
	cout << "First Value: "<< *it << endl; 

	it = st.end();
	cout << "Last Value: " << *it << endl; 
	return 0; 
}