#include <bits/stdc++.h>
using namespace std; 

int main() {
	
	int n = 5; 
	std::vector<std::vector<int>> adj(n);
	adj[1].push_back(2);
	adj[0].push_back(3);
	adj[0].push_back(1);
	adj[2].push_back(3);
	for(int i = 0; i<n; i++) {
		for(int j: adj[i]) {
			cout << j << " "; 
		}
		cout << endl; 
	}
	cout << endl; 

	/*int n = 5; 
	std::vector<std::vector<int>> a(n,std::vector<int>(n)); 
	// row = col = n  
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			cin >> a[i][j]; 
		}
	} */
	return 0;  
}
 