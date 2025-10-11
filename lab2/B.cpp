#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, k;
	cin >> n >> k;
	deque<string> d;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		d.push_back(s);
	}
	for(int i = 0; i < n - k; i++){
		d.push_front(d.back());
		d.pop_back();
	}
	for(int i = 0; i < n; i++){
		cout << d[i] << ' ';
	}
	cout << '\n';
}
