#include <bits/stdc++.h>
using namespace std;

const int LIMIT = 10000;
int number[LIMIT];

void func(int num){
	if(number[num] != -1 && num <= LIMIT){
		int temp, sum;
		temp = num;
		sum = temp;
		
		while(temp > 0){
			sum += temp%10;
			temp /= 10;
		}
		
//		printf("The sum is: %d\n",sum);

		func(sum);
		number[sum] = -1;
	}
}

int main(void){
	
	for(int i = 1; i < LIMIT; i++){
		func(i);
	}
	
	for(int i = 1; i < LIMIT; i++){
		if(number[i] != -1){
			cout << i << "\n";
		}
	}
	
	return 0;	
}
