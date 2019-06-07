#include <bits/stdc++.h>
using namespace std;

int main(void){
	int N,maximum = 0;
	cin >> N;

	int num[N][N];	//input
	int dp[N][N];	//calculated values
	
	//retrieve input
	for(int i = 0; i < N; i++){
		for(int j = 0; j <= i; j++){
			cin >> num[i][j];
		}
	}
	
	//initial value
	dp[0][0] = num[0][0];
	maximum = dp[0][0];
	
	//dp, start from 2nd height
	for(int i = 1; i < N; i++){
		for(int j = 0; j <= i; j++){
			//value of very left
			if(j == 0){
				dp[i][j] = dp[i-1][j] + num[i][j];
			}
			//value of very right
			else if(j == i){
				dp[i][j] = dp[i-1][j-1] + num[i][j];;
			}
			//value that has two parents to compare
			else{
				dp[i][j] = max( dp[i-1][j], dp[i-1][j-1] ) + num[i][j];
			}
			
			//if maximum number is found
			if(maximum < dp[i][j]){
				maximum = dp[i][j];
			}
		}
	}
	
	//prints the maximum value
	cout << maximum;

	return 0;
}
