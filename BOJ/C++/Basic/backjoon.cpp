#include <bits/stdc++.h>
using namespace std;

int main(void){
	int name[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	string temp[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
	
	int month,day,total = 0;
	cin >> month >> day;
	
	for(int i = 0; i < month - 1; i++){
		total += name[i];
	}

	cout << temp[(total + day)%7];
	
	return 0;
}
