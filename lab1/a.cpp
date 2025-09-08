#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		deque<int> d;
		for(int i = n; i > 0; i--){
			d.push_front(i);
			int k = i % d.size();
			while(k--){
				int x = d.back();
				d.pop_back();
				d.push_front(x);
			}
		}
		for(int i = 0; i < n; i++){
			cout << d[i] << ' ';
		}
		cout << '\n';
	}
}
