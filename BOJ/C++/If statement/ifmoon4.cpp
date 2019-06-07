#include <bits/stdc++.h>
using namespace std;

int main(void){
	int T,N;
	double total,avg,overavg;
	cin >> T;
	
	for(int i = 0; i < T; i++){
		cin >> N;
		total = 0;
		avg = 0;
		overavg = 0;
		int temp[N];
		
		for(int j = 0; j < N; j++){
			cin >> temp[j];
			total += temp[j];
		}
		
		avg = total/N;
		
		for(int j = 0; j < N; j++){
			if(temp[j] > avg){
				overavg++;
			}
		}
		
		printf("%.3f%c\n", 100*(overavg/N), '%');
		
	}
}
