#include <bits/stdc++.h>
using namespace std;

int main(void){
	int N;
	cin >> N;
	int dp[N+1];
	
	dp[0] = dp[1] = 0;
	
	for(int i = 2; i <= N; i++){
		//case of subtracting 1 to current number to get 1
		dp[i] = dp[i-1] + 1;
		
		//if divisible by 2
		if(i%2 == 0){
			dp[i] = min(dp[i], dp[i/2] + 1);
		}
		
		//also if divisible by 3
		if(i%3 == 0){
			dp[i] = min(dp[i], dp[i/3] + 1);
		}
	}
	
	cout << dp[N];
	
	return 0;
}
