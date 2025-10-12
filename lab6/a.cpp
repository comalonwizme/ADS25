#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; string s;
	cin >> n >> s;
	priority_queue<char, vector<char>, greater<>> ans1, ans2;
	for(int i = 0; i < n; i++){
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
			ans1.push(s[i]);
		}
		else{
			ans2.push(s[i]);
		}
	}
	while(!ans1.empty()){
		cout << ans1.top();
		ans1.pop();
	}
	while(!ans2.empty()){
		cout << ans2.top();
		ans2.pop();
	}
}
