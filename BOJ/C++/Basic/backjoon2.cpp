#include <bits/stdc++.h>
using namespace std;

int main(void){
	int m, sum = 0;
	string n;
	cin >> m >> n;
	
	char numbers[m];
	strcpy(numbers, n.c_str());
	
	for(int i = 0; i < m; i++){
		sum += numbers[i] - (int)48;
	}
	
	cout << sum;
	
	return 0;
}
