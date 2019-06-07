#include <bits/stdc++.h>
using namespace std;

string star1 = "  *  \n";
string star2 = " * * \n";
string star3 = "*****\n";

void drawSpace(int numSpace){
	for(int i = 0; i < numSpace; i++){
		cout << " ";
	}
	cout << "\n";
}

void drawStars(int number, int twoSquare){
	if(number <= 3){
		cout << star1 << star2 << star3;
	}
	else{
		drawSpace(twoSquare/2);
		drawStars(number/2, number*2);
	}
	
}

int main(void){
	int N, two;
	cin >> N;
	two = N/3;
	
	drawStars(N, 0);
	
	return 0;	
}
