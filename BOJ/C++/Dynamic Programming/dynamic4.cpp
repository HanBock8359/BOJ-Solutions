#include <bits/stdc++.h>
using namespace std;

int main(void){
	int N;
	cin >> N;
	
	int num[N];
	int dp[N];
	
	for(int i = 0; i < N; i++){
		cin >> num[i];
	}
	
	dp[0] = num[0];
	dp[1] = max(num[1] + num[0], num[1]);
	dp[2] = max(num[2] + num[0], num[1] + num[0]);
	
	for(int i = 3; i < N; i++){
		dp[i] = max( dp[i-2] + num[i], num[i] + num[i-1] + dp[i-3] );
	}
	
	cout << dp[N-1] << "\n";
	
	return 0;
}
