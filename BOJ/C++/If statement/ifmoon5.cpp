#include <bits/stdc++.h>
using namespace std;

int main(void){
	int input,temp,sum,b,a,count=0;
	cin >> input;
	temp = input;
	
	do{
		b = temp%10;
		temp /=10;
		a = temp%10;
		temp /= 10;

		sum = b + a;
		temp = (b*10) + sum%10;
		count++;
		
//		printf("Value of a: %d\n",a);
//		printf("Value of b: %d\n",b);
//		printf("Value of sum: %d\n",sum);
//		printf("Value of temp: %d\n",temp);
//		printf("Value of count: %d\n\n",count);
		
	} while(temp != input);
	
	cout << count;
	
	return 0;
}
