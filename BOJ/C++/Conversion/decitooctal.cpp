#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	int dec_num, rem, quot, i = 1, j;
	int oct_num[100];
	
	cout << "Enter a decimal number: ";
	cin >> dec_num;
	
	quot = dec_num;
	
	while(quot != 0){
		oct_num[i++] = quot%8;
		quot = quot/8;
	}
	
	cout << "Octal number is: ";
	
	for(j = i - 1; j > 0; j--){
		cout << oct_num[j];
	}
	
	
	
	return 0;
}
