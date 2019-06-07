#include <bits/stdc++.h>
using namespace std;

int main(void){
	int N;
	cin >> N;
	
	int cost[N][3];
	int dp[N][3];
	
	//retrieve how much it will cost to color each house
	for(int i = 0; i < N; i++){
		for(int j = 0; j < 3; j++){
			cin >> cost[i][j];
		}
	}
	
	dp[0][0] = cost[0][0];
	dp[0][1] = cost[0][1];
	dp[0][2] = cost[0][2];
	
	//dp
	for(int i = 1; i < N; i++){
		dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + cost[i][0];
		dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + cost[i][1];
		dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + cost[i][2];
	}
	
	int minimumCost = min( min(dp[N-1][0], dp[N-1][1]), dp[N-1][2]  );
	cout << minimumCost;
	
	return 0;
}
