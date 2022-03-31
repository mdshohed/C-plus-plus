#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 10; 
	//for loop 
	for(int i = 1; i<=n; i++) {
		cout << i << " "; 
	}
	cout << endl;

	int i = 0;  
	while(i<=n) {
		cout << i << " "; 
		i++; 
	}
	cout << endl; 

	i = 0; 
	do{
		cout << i << " "; 
		i++; 
	}while(i<=n); 
	cout << endl; 
	return 0; 
}