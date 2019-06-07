#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, max = 0, sum = 0;
	cin >> n;
	int numbers[n];
	
	for(int i = 0; i < n; i++){
		cin >> numbers[i];
		sum += numbers[i];
		
		if(numbers[i] > max){
			max = numbers[i];
		}
	}
	
	printf("%.2f", (double)100*sum/(max*n));
}
