#include <bits/stdc++.h>
using namespace std; 

int main() {
	int n; 
	cin >> n; 
	std::vector<pair<int,int>> a(n);
	for(int i = 0; i<n; i++) {
		cin >> a[i].first >> a[i].second; 
	} 
	for(auto i: a) {
		cout << i.first << " " << i.second << endl; 
	}
	cout << endl; 
	return 0;  
}