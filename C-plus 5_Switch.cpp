#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int m = 77; 
	switch(m/10) {
		case 7: 
			cout << "A+" << endl; 
			break;
		case 6: 
			cout << "B" << endl; 
			break;
		case 5: 
			cout << "C" << endl; 
			break;
		case 4: 
			cout << "D" << endl; 
			break;
		
		default:
			cout << "F" << endl; 
			break; 
	}
	return 0; 
}