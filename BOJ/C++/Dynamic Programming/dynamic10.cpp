#include <bits/stdc++.h>
#define CONST 10009
using namespace std;

int main(void){
	int N;
	cin >> N;
	
	int num[CONST+1] = {};
	int dp[CONST+1] = {};
	
	for(int i = 1; i <= N; i++){
		cin >> num[i];
	}
	
	dp[1] = num[1];
	dp[2] = num[1] + num[2];
	
	for(int i = 3; i <= N; i++){
		dp[i] = max( dp[i-3] + num[i-1] + num[i], dp[i-2] + num[i] );
		dp[i] = max( dp[i-1], dp[i] );
	}
	
	cout << dp[N];
	
	return 0;
}
