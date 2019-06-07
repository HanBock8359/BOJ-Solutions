#include <bits/stdc++.h>
using namespace std;

int count0 = 0;
int count1 = 0;

int fibonacci(int n) {
    if (n == 0) {
        count0++;
        return 0;
    } else if (n == 1) {
        count1++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(void){
	int T, num;
	cin >> T;
	
	for(int i = 0; i < T; i++){
		count0 = count1 = 0;
		cin >> num;
		fibonacci(num);
		
		printf("%d %d\n", count0, count1);
	}
	
	return 0;
}
