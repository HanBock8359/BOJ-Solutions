#include <bits/stdc++.h>
using namespace std;

int main(void){
	int N, maximum = -9999;
	cin >> N;
	int num[N];
	int dp[N];
	
	for(int i = 0; i < N; i++){
		cin >> num[i];
	}
	
	dp[0] = num[0];
	
	for(int i = 0; i < N; i++){
		dp[i] = max( num[i], dp[i-1] + num[i]);
		maximum = max( maximum, dp[i] ); 
	}
	
	cout << maximum;
	
	return 0;
}
