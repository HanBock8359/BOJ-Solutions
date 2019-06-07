#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void){
	int dec_num, remainder;
	string hexdec_num = "";
	
	char hex[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	
	cout << "Enter a decimal number: ";
	cin >> dec_num;
	
	while(dec_num > 0){
		remainder = dec_num % 16;
		hexdec_num = hex[remainder] + hexdec_num;
		dec_num = dec_num/16;
	}
	
	cout << "Hexadecimal number is: " << hexdec_num;
	
	return 0;
}
