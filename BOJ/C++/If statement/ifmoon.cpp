#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a,b,c, max, secmax;
	cin >> a >> b >> c;

	max = a;
	
	if(max < b){
		max = b;
	}
	if(max < c){
		max = c;
	}
	
	//b and c
	if(a == max){
		if(b >= c){
			secmax = b;
		}
		else{
			secmax = c;
		}
	}
	//a and c
	else if(b == max){
		if(a >= c){
			secmax = a;
		}
		else{
			secmax = c;
		}
	}
	//a and b
	else{
		if(a >= b){
			secmax = a;
		}
		else{
			secmax = b;
		}
	}
	
	cout << secmax;
	
}
