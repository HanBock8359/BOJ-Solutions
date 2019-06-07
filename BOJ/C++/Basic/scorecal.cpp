#include <bits/stdc++.h>
using namespace std;

int main(void){
	int N,mark,score=0,sum=0;
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> mark;
		
		if(mark){
			score++;
			sum += score;
		}
		else{
			score = 0;
		}
		
	}
	
	cout << sum;
	
	return 0;
}
