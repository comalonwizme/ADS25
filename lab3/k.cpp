#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 7;
int n, k, a[MAXN], pref[MAXN];
bool ok(int mid){
	for(int i = mid; i <= n; i++){
		if(pref[i] - pref[i - mid] >= k){
			return true;
		}
	}
	return false;
}
int main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		pref[i] = pref[i - 1] + a[i];
	}
	int l = 1, r = n, ans = n;
	while(l < r){
		int mid = (l + r) >> 1;
		if(ok(mid)){
			r = mid;
			ans = mid;
		}
		else{
			l = mid + 1;
		}
	}
	cout << ans << '\n';
}
