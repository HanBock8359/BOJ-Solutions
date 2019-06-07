#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n,bag3 = 0,bag5 = 0;
	
	//get n 
	//calculate how many bags for 5kg is needed
	cin >> n;
	bag5 = n/5;
	
	//if remainder is 0, DONE
	if(n%5 == 0){
		cout << bag5 << "\n";
	}
	//if remainder is not 0
	else{
		//calculate how many bags for 3kg is needed
		bag3 = (n - (bag5*5))/3;
		
		//if there still exists a remainder,
		//recalculate by,
		//minus one bag for 5kg
		//and divide the remainder by 3
		while(bag5 > 0 && (bag5*5 + bag3*3) != n){
			bag5--;
			bag3 = (n - (bag5*5))/3;
		}
		
		//success
		if((bag5*5 + bag3*3) == n){
			cout << bag5 + bag3 << "\n";
		}
		//failed,
		else{
			cout << "-1" << "\n";
		}
	}
	
	
	return 0;
}
