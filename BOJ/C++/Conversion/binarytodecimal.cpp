#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void){
	long binary, decimal = 0, j = 1, rem;
	
	cout << "Input binary number: ";
	cin >> binary;
	
	while(binary != 0){
		rem = binary % 10;
		decimal = decimal + rem * j;
		j = j * 2;
		binary = binary/10;
		
	}
	
	cout << "Decimal Number is : " << decimal;
	
	return 0;
}

