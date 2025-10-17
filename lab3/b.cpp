#include <bits/stdc++.h>
#define int long long
using namespace std;
int const MAXN = 1e5 + 7;
int n, k, a[MAXN];
bool ok(int x){
	int kk = 1, summ = 0;
	for(int i = 0; i < n; i++){
		if(summ + a[i] <= x){
			summ += a[i];
		}
		else{
			kk++;
			summ = a[i];
		}
	}
	return kk <= k;
}
signed main(){
	cin >> n >> k;
	int l = -1, r = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		l = max(l, a[i]);
		r += a[i];
	}
	while(r > l){
		int mid = (r + l) / 2;
		if(ok(mid)){
			r = mid;
		}
		else{
			l = mid + 1;
		}
	}
	cout << l << '\n';
}
