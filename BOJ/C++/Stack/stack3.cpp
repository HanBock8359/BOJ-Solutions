#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main(void){
	int T;
	cin >> T;
	
	for(int i = 0; i < T; i++){
		bool result;
		stack<char> s;
		
		string str;
		cin >> str;
		
		for(int k = 0; k < str.length(); k++){
			result = true; 
			
			switch(str[k]){
				case '(':
					s.push(str[k]);
					break;
				case ')':
					if(s.empty()){
						result = false;
					}
					else if(s.top() != '('){
						result = false;
					}
					else{
						s.pop();
					}
					break;
			}
			
			if(!result){
				break;
			}
			
		}
		
		if(result && s.empty()){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
		
	}
	

	return 0;
}
