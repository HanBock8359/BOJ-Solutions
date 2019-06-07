#include <bits/stdc++.h>
using namespace std;

int main(void){
	int N,data;
	string str;
	deque<int> dq;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> str;
		
		if(str == "push_front"){
			cin >> data;
			dq.push_front(data);
		}
		else if(str == "push_back"){
			cin >> data;
			dq.push_back(data);
		}
		else if(str == "pop_front"){
			if(dq.empty()){
				cout << "-1\n";
			}
			else{
				data = dq.front();
				dq.pop_front();
				cout << data << "\n";
			}
		}
		else if(str == "pop_back"){
			if(dq.empty()){
				cout << "-1\n";
			}
			else{
				data = dq.back();
				dq.pop_back();
				cout << data << "\n";
			}
		}
		else if(str == "size"){
			cout << dq.size() << "\n";
		}
		else if(str == "empty"){
			cout << dq.empty() << "\n";
		}
		else if(str == "front"){
			if(dq.empty()){
				cout << "-1\n";
			}
			else{
				cout << dq.front() << "\n";
			}
		}
		else if(str == "back"){
			if(dq.empty()){
				cout << "-1\n";
			}
			else{
				cout << dq.back() << "\n";
			}
		}
	}

	return 0;
}
