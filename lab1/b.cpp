#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	stack<int> st;
	st.push(a[0]);
	cout << -1 << ' ';
	for(int i = 1; i < n; i++){
		while(!st.empty() && st.top() > a[i]){
			st.pop();
		}
		if(st.empty()){
			cout << -1 << ' ';
		}
		else{
			cout << st.top() << ' ';
		}
		st.push(a[i]);
	}
	cout << '\n';
}
