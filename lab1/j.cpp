#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	char c;
	deque<int> dq;
	while(cin >> c){
		if(c == '!'){
			break;
		}
		if(c == '*'){
			if(dq.empty()){
				cout << "error\n";
				continue;
			}
			cout << dq.front() + dq.back() << '\n';
			dq.pop_back();
			if(!dq.empty()){
				dq.pop_front();
			}
		}
		else{
			int x;
			cin >> x;
			if(c == '+'){
				dq.push_front(x);
			}
			else if(c == '-'){
				dq.push_back(x);
			}
		}
	}
}
