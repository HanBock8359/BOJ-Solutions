#include <bits/stdc++.h>
using namespace std;

int main(void){
	string n;
	cin >> n;

	for(int i = 0; i < n.length(); i++){
		if(i != 0 && i%10 == 0){
			cout << "\n";
		}
		cout << n[i];
		
	}
	
	return 0;
}
