#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m, x;
	cin >> n >> m;
	int pref[n + 1] = {};
	for(int i = 1; i <= n; i++){
		cin >> x;
		pref[i] = pref[i - 1] + x;
	}
	for(int i = 0; i < m; i++){
		int b;
		cin >> b;
		int idx = lower_bound(pref + 1, pref + n + 1, b) - (pref + 1);
		cout << idx + 1 << '\n';
	}
}
